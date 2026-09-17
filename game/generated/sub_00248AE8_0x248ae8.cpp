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

// Function: sub_00248AE8
// Address: 0x248ae8 - 0x248b58
void sub_00248AE8_0x248ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248AE8_0x248ae8");
#endif

    switch (ctx->pc) {
        case 0x248b04u: goto label_248b04;
        case 0x248b1cu: goto label_248b1c;
        case 0x248b24u: goto label_248b24;
        case 0x248b34u: goto label_248b34;
        case 0x248b44u: goto label_248b44;
        default: break;
    }

    ctx->pc = 0x248ae8u;

    // 0x248ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x248aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248af4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x248af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x248af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x248af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x248afc: 0xc092296  jal         func_248A58
    ctx->pc = 0x248AFCu;
    SET_GPR_U32(ctx, 31, 0x248B04u);
    ctx->pc = 0x248B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248AFCu;
    // 0x248b00: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248A58u, 0x248AFCu, 0x248B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B04u;
label_248b04:
    // 0x248b04: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x248b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x248b08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x248b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b0c: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x248b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x248b10: 0x2484003f  addiu       $a0, $a0, 0x3F
    ctx->pc = 0x248b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x248b14: 0xc0d6428  jal         func_3590A0
    ctx->pc = 0x248B14u;
    SET_GPR_U32(ctx, 31, 0x248B1Cu);
    ctx->pc = 0x248B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248B14u;
    // 0x248b18: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3590A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3590A0u, 0x248B14u, 0x248B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B1Cu;
label_248b1c:
    // 0x248b1c: 0xc0d6460  jal         func_359180
    ctx->pc = 0x248B1Cu;
    SET_GPR_U32(ctx, 31, 0x248B24u);
    ctx->pc = 0x248B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248B1Cu;
    // 0x248b20: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359180u, 0x248B1Cu, 0x248B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B24u;
label_248b24:
    // 0x248b24: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x248b24u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x248b28: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x248b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x248b2c: 0xc0d6434  jal         func_3590D0
    ctx->pc = 0x248B2Cu;
    SET_GPR_U32(ctx, 31, 0x248B34u);
    ctx->pc = 0x248B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248B2Cu;
    // 0x248b30: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3590D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3590D0u, 0x248B2Cu, 0x248B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B34u;
label_248b34:
    // 0x248b34: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x248b34u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x248b38: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x248b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x248b3c: 0xc0d6466  jal         func_359198
    ctx->pc = 0x248B3Cu;
    SET_GPR_U32(ctx, 31, 0x248B44u);
    ctx->pc = 0x248B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248B3Cu;
    // 0x248b40: 0x26060004  addiu       $a2, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359198u, 0x248B3Cu, 0x248B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B44u;
label_248b44:
    // 0x248b44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248b48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x248b48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248b4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248b50: 0x3e00008  jr          $ra
    ctx->pc = 0x248B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B50u;
        // 0x248b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248B58u;
}
