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

// Function: sub_0012DDD0
// Address: 0x12ddd0 - 0x12de60
void sub_0012DDD0_0x12ddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DDD0_0x12ddd0");
#endif

    switch (ctx->pc) {
        case 0x12de10u: goto label_12de10;
        case 0x12de24u: goto label_12de24;
        case 0x12de38u: goto label_12de38;
        default: break;
    }

    ctx->pc = 0x12ddd0u;

    // 0x12ddd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ddd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ddd4: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x12ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12ddd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12dddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12dddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dde0: 0x2442dd90  addiu       $v0, $v0, -0x2270
    ctx->pc = 0x12dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958480));
    // 0x12dde4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12dde8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12dde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ddec: 0x261101e4  addiu       $s1, $s0, 0x1E4
    ctx->pc = 0x12ddecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x12ddf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12ddf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12ddf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ddf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddf8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x12ddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x12ddfc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12ddfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de00: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x12de00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x12de04: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x12de04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12de08: 0xc04b6f0  jal         func_12DBC0
    ctx->pc = 0x12DE08u;
    SET_GPR_U32(ctx, 31, 0x12DE10u);
    ctx->pc = 0x12DE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE08u;
    // 0x12de0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DBC0u, 0x12DE08u, 0x12DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE10u;
label_12de10:
    // 0x12de10: 0x2604023c  addiu       $a0, $s0, 0x23C
    ctx->pc = 0x12de10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x12de14: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12de14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de18: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x12de18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12de1c: 0xc04b6f0  jal         func_12DBC0
    ctx->pc = 0x12DE1Cu;
    SET_GPR_U32(ctx, 31, 0x12DE24u);
    ctx->pc = 0x12DE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE1Cu;
    // 0x12de20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DBC0u, 0x12DE1Cu, 0x12DE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE24u;
label_12de24:
    // 0x12de24: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x12de24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    // 0x12de28: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12de28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de2c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12de2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12de30: 0xc04b6f0  jal         func_12DBC0
    ctx->pc = 0x12DE30u;
    SET_GPR_U32(ctx, 31, 0x12DE38u);
    ctx->pc = 0x12DE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE30u;
    // 0x12de34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DBC0u, 0x12DE30u, 0x12DE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE38u;
label_12de38:
    // 0x12de38: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x12de38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x12de3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12de40: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x12de40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    // 0x12de44: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x12de44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x12de48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12de48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12de4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12de4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12de50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12de50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12de54: 0x3e00008  jr          $ra
    ctx->pc = 0x12DE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE54u;
        // 0x12de58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DE5Cu;
    // 0x12de5c: 0x0  nop
    ctx->pc = 0x12de5cu;
    // NOP
    ctx->pc = 0x12de60u;
}
