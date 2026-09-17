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

// Function: sub_00358AC0
// Address: 0x358ac0 - 0x358b70
void sub_00358AC0_0x358ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358AC0_0x358ac0");
#endif

    switch (ctx->pc) {
        case 0x358ad0u: goto label_358ad0;
        case 0x358ae4u: goto label_358ae4;
        case 0x358af8u: goto label_358af8;
        case 0x358b00u: goto label_358b00;
        case 0x358b08u: goto label_358b08;
        case 0x358b10u: goto label_358b10;
        case 0x358b18u: goto label_358b18;
        case 0x358b20u: goto label_358b20;
        case 0x358b28u: goto label_358b28;
        case 0x358b30u: goto label_358b30;
        case 0x358b38u: goto label_358b38;
        case 0x358b48u: goto label_358b48;
        case 0x358b50u: goto label_358b50;
        case 0x358b5cu: goto label_358b5c;
        default: break;
    }

    ctx->pc = 0x358ac0u;

    // 0x358ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358ac8: 0xc0d8ada  jal         func_362B68
    ctx->pc = 0x358AC8u;
    SET_GPR_U32(ctx, 31, 0x358AD0u);
    ctx->pc = 0x362B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362B68u, 0x358AC8u, 0x358AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358AD0u;
label_358ad0:
    // 0x358ad0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x358ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x358ad4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x358AD4u;
    {
        const bool branch_taken_0x358ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358AD4u;
        // 0x358ad8: 0x24844f98  addiu       $a0, $a0, 0x4F98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358ad4) {
            ctx->pc = 0x358AF0u;
            goto label_358af0;
        }
    }
    ctx->pc = 0x358ADCu;
    // 0x358adc: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x358ADCu;
    SET_GPR_U32(ctx, 31, 0x358AE4u);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x358ADCu, 0x358AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358AE4u;
label_358ae4:
    // 0x358ae4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x358ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x358ae8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x358AE8u;
    {
        const bool branch_taken_0x358ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358AE8u;
        // 0x358aec: 0x3442002a  ori         $v0, $v0, 0x2A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358ae8) {
            ctx->pc = 0x358B60u;
            goto label_358b60;
        }
    }
    ctx->pc = 0x358AF0u;
label_358af0:
    // 0x358af0: 0xc0d77fa  jal         func_35DFE8
    ctx->pc = 0x358AF0u;
    SET_GPR_U32(ctx, 31, 0x358AF8u);
    ctx->pc = 0x35DFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DFE8u, 0x358AF0u, 0x358AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358AF8u;
label_358af8:
    // 0x358af8: 0xc0d62dc  jal         func_358B70
    ctx->pc = 0x358AF8u;
    SET_GPR_U32(ctx, 31, 0x358B00u);
    ctx->pc = 0x358AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358AF8u;
    // 0x358afc: 0x8f84c7a8  lw          $a0, -0x3858($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358B70u, 0x358AF8u, 0x358B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B00u;
label_358b00:
    // 0x358b00: 0xc0d686e  jal         func_35A1B8
    ctx->pc = 0x358B00u;
    SET_GPR_U32(ctx, 31, 0x358B08u);
    ctx->pc = 0x358B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B00u;
    // 0x358b04: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1B8u, 0x358B00u, 0x358B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B08u;
label_358b08:
    // 0x358b08: 0xc0d62dc  jal         func_358B70
    ctx->pc = 0x358B08u;
    SET_GPR_U32(ctx, 31, 0x358B10u);
    ctx->pc = 0x358B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B08u;
    // 0x358b0c: 0x8f84c7a8  lw          $a0, -0x3858($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358B70u, 0x358B08u, 0x358B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B10u;
label_358b10:
    // 0x358b10: 0xc0d6776  jal         func_359DD8
    ctx->pc = 0x358B10u;
    SET_GPR_U32(ctx, 31, 0x358B18u);
    ctx->pc = 0x359DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359DD8u, 0x358B10u, 0x358B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B18u;
label_358b18:
    // 0x358b18: 0xc0d62dc  jal         func_358B70
    ctx->pc = 0x358B18u;
    SET_GPR_U32(ctx, 31, 0x358B20u);
    ctx->pc = 0x358B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B18u;
    // 0x358b1c: 0x8f84c7a8  lw          $a0, -0x3858($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358B70u, 0x358B18u, 0x358B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B20u;
label_358b20:
    // 0x358b20: 0xc0d8972  jal         func_3625C8
    ctx->pc = 0x358B20u;
    SET_GPR_U32(ctx, 31, 0x358B28u);
    ctx->pc = 0x3625C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3625C8u, 0x358B20u, 0x358B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B28u;
label_358b28:
    // 0x358b28: 0xc0d62dc  jal         func_358B70
    ctx->pc = 0x358B28u;
    SET_GPR_U32(ctx, 31, 0x358B30u);
    ctx->pc = 0x358B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B28u;
    // 0x358b2c: 0x8f84c7a8  lw          $a0, -0x3858($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358B70u, 0x358B28u, 0x358B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B30u;
label_358b30:
    // 0x358b30: 0xc0d8a3a  jal         func_3628E8
    ctx->pc = 0x358B30u;
    SET_GPR_U32(ctx, 31, 0x358B38u);
    ctx->pc = 0x3628E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3628E8u, 0x358B30u, 0x358B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B38u;
label_358b38:
    // 0x358b38: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x358B38u;
    {
        const bool branch_taken_0x358b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B38u;
        // 0x358b3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b38) {
            ctx->pc = 0x358B64u;
            goto label_358b64;
        }
    }
    ctx->pc = 0x358B40u;
    // 0x358b40: 0xc0d5f78  jal         func_357DE0
    ctx->pc = 0x358B40u;
    SET_GPR_U32(ctx, 31, 0x358B48u);
    ctx->pc = 0x357DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357DE0u, 0x358B40u, 0x358B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B48u;
label_358b48:
    // 0x358b48: 0xc0d920e  jal         func_364838
    ctx->pc = 0x358B48u;
    SET_GPR_U32(ctx, 31, 0x358B50u);
    ctx->pc = 0x364838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364838u, 0x358B48u, 0x358B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B50u;
label_358b50:
    // 0x358b50: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x358b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x358b54: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x358B54u;
    SET_GPR_U32(ctx, 31, 0x358B5Cu);
    ctx->pc = 0x358B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B54u;
    // 0x358b58: 0x24844fe8  addiu       $a0, $a0, 0x4FE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x358B54u, 0x358B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B5Cu;
label_358b5c:
    // 0x358b5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358b60:
    // 0x358b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_358b64:
    // 0x358b64: 0x3e00008  jr          $ra
    ctx->pc = 0x358B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B64u;
        // 0x358b68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358B6Cu;
    // 0x358b6c: 0x0  nop
    ctx->pc = 0x358b6cu;
    // NOP
    ctx->pc = 0x358b70u;
}
