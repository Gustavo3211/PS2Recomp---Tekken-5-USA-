#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00510DB8
// Address: 0x510db8 - 0x510e60
void sub_00510DB8_0x510db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510DB8_0x510db8");
#endif

    switch (ctx->pc) {
        case 0x510de0u: goto label_510de0;
        case 0x510decu: goto label_510dec;
        case 0x510dfcu: goto label_510dfc;
        case 0x510e04u: goto label_510e04;
        case 0x510e0cu: goto label_510e0c;
        case 0x510e38u: goto label_510e38;
        case 0x510e40u: goto label_510e40;
        default: break;
    }

    ctx->pc = 0x510db8u;

    // 0x510db8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x510db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x510dbc: 0x24055080  addiu       $a1, $zero, 0x5080
    ctx->pc = 0x510dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x510dc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x510dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x510dc4: 0x3c100090  lui         $s0, 0x90
    ctx->pc = 0x510dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    // 0x510dc8: 0x2610f080  addiu       $s0, $s0, -0xF80
    ctx->pc = 0x510dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963328));
    // 0x510dcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x510dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x510dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x510dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x510dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x510dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x510dd8: 0xc13e4a6  jal         func_4F9298
    ctx->pc = 0x510DD8u;
    SET_GPR_U32(ctx, 31, 0x510DE0u);
    ctx->pc = 0x510DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510DD8u;
    // 0x510ddc: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9298u, 0x510DD8u, 0x510DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510DE0u;
label_510de0:
    // 0x510de0: 0xae1148c0  sw          $s1, 0x48C0($s0)
    ctx->pc = 0x510de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18624), GPR_U32(ctx, 17));
    // 0x510de4: 0xc124620  jal         func_491880
    ctx->pc = 0x510DE4u;
    SET_GPR_U32(ctx, 31, 0x510DECu);
    ctx->pc = 0x510DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510DE4u;
    // 0x510de8: 0xa6000008  sh          $zero, 0x8($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x510DE4u, 0x510DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510DECu;
label_510dec:
    // 0x510dec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x510decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x510df0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x510df0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x510df4: 0xc144b38  jal         func_512CE0
    ctx->pc = 0x510DF4u;
    SET_GPR_U32(ctx, 31, 0x510DFCu);
    ctx->pc = 0x510DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510DF4u;
    // 0x510df8: 0xac319400  sw          $s1, -0x6C00($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939648), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512CE0u, 0x510DF4u, 0x510DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510DFCu;
label_510dfc:
    // 0x510dfc: 0xc144846  jal         func_512118
    ctx->pc = 0x510DFCu;
    SET_GPR_U32(ctx, 31, 0x510E04u);
    ctx->pc = 0x512118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512118u, 0x510DFCu, 0x510E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510E04u;
label_510e04:
    // 0x510e04: 0xc144a96  jal         func_512A58
    ctx->pc = 0x510E04u;
    SET_GPR_U32(ctx, 31, 0x510E0Cu);
    ctx->pc = 0x512A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512A58u, 0x510E04u, 0x510E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510E0Cu;
label_510e0c:
    // 0x510e0c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x510e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x510e10: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x510e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x510e14: 0xa60200a0  sh          $v0, 0xA0($s0)
    ctx->pc = 0x510e14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 2));
    // 0x510e18: 0xa60300a2  sh          $v1, 0xA2($s0)
    ctx->pc = 0x510e18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 3));
    // 0x510e1c: 0xa60000a4  sh          $zero, 0xA4($s0)
    ctx->pc = 0x510e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 0));
    // 0x510e20: 0xa6000072  sh          $zero, 0x72($s0)
    ctx->pc = 0x510e20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x510e24: 0xa6000078  sh          $zero, 0x78($s0)
    ctx->pc = 0x510e24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x510e28: 0xa6004e42  sh          $zero, 0x4E42($s0)
    ctx->pc = 0x510e28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20034), (uint16_t)GPR_U32(ctx, 0));
    // 0x510e2c: 0xa6000096  sh          $zero, 0x96($s0)
    ctx->pc = 0x510e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x510e30: 0xc143c66  jal         func_50F198
    ctx->pc = 0x510E30u;
    SET_GPR_U32(ctx, 31, 0x510E38u);
    ctx->pc = 0x510E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510E30u;
    // 0x510e34: 0xa6004cd6  sh          $zero, 0x4CD6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 19670), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50F198u, 0x510E30u, 0x510E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510E38u;
label_510e38:
    // 0x510e38: 0xc144362  jal         func_510D88
    ctx->pc = 0x510E38u;
    SET_GPR_U32(ctx, 31, 0x510E40u);
    ctx->pc = 0x510E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510E38u;
    // 0x510e3c: 0xa600001a  sh          $zero, 0x1A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510D88u, 0x510E38u, 0x510E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510E40u;
label_510e40:
    // 0x510e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x510e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x510e44: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x510e44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x510e48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x510e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x510e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x510e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510e50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x510e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x510e54: 0x3e00008  jr          $ra
    ctx->pc = 0x510E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510E54u;
        // 0x510e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x510E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x510E5Cu;
    // 0x510e5c: 0x0  nop
    ctx->pc = 0x510e5cu;
    // NOP
    ctx->pc = 0x510e60u;
}
