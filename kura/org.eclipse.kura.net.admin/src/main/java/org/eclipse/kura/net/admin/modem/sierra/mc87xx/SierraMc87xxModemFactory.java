/*******************************************************************************
 * Copyright (c) 2011, 2016 Eurotech and/or its affiliates
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     Eurotech
 *******************************************************************************/
package org.eclipse.kura.net.admin.modem.sierra.mc87xx;

import java.util.Hashtable;

import org.eclipse.kura.net.admin.NetworkConfigurationService;
import org.eclipse.kura.net.admin.modem.AtConnectionFactory;
import org.eclipse.kura.net.admin.modem.CellularModemFactory;
import org.eclipse.kura.net.modem.CellularModem;
import org.eclipse.kura.net.modem.ModemDevice;
import org.eclipse.kura.net.modem.ModemTechnologyType;
import org.osgi.framework.BundleContext;
import org.osgi.framework.FrameworkUtil;
import org.osgi.util.tracker.ServiceTracker;

/**
 * Defines Sierra MC87xx Modem Factory
 * 
 * @author ilya.binshtok
 *
 */
public class SierraMc87xxModemFactory implements CellularModemFactory {
	
	private static SierraMc87xxModemFactory s_factoryInstance = null;
    
	private static ModemTechnologyType s_type = ModemTechnologyType.HSDPA;
	
	private BundleContext s_bundleContext = null;
	private Hashtable<String, SierraMc87xx> m_modemServices = null;
	
	private AtConnectionFactory m_atConnectionFactory = null;

	private SierraMc87xxModemFactory () {
		s_bundleContext = FrameworkUtil.getBundle(NetworkConfigurationService.class).getBundleContext();
		
		ServiceTracker<AtConnectionFactory, AtConnectionFactory> serviceTracker = new ServiceTracker<AtConnectionFactory, AtConnectionFactory>(s_bundleContext, AtConnectionFactory.class, null);
		serviceTracker.open(true);
		m_atConnectionFactory = serviceTracker.getService();
		
		m_modemServices = new Hashtable<String, SierraMc87xx>();
	}
	
	public static SierraMc87xxModemFactory getInstance() {
	    if(s_factoryInstance == null) {
	        s_factoryInstance = new SierraMc87xxModemFactory();
	    }
	    return s_factoryInstance;
	}
	
	@Override
	public CellularModem obtainCellularModemService(ModemDevice modemDevice,
			String platform) throws Exception {
		
		String key = modemDevice.getProductName();
		SierraMc87xx sierraMc87xx = m_modemServices.get(key);
		
		if (sierraMc87xx == null) {
			sierraMc87xx = new SierraMc87xx(modemDevice, m_atConnectionFactory);
			this.m_modemServices.put(key, sierraMc87xx);
		} else {
			sierraMc87xx.setModemDevice(modemDevice);
		}
		
		return sierraMc87xx;
	}

	@Override
	public Hashtable<String, ? extends CellularModem> getModemServices() {
		return m_modemServices;
	}

	@Override
	public void releaseModemService(String usbPortAddress) {
		  m_modemServices.remove(usbPortAddress);
	}

	@Override
	@Deprecated
	public ModemTechnologyType getType() {
		return s_type;
	}
}
