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

// Function: sub_0022A468
// Address: 0x22a468 - 0x22a4f8
void sub_0022A468_0x22a468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A468_0x22a468");
#endif

    switch (ctx->pc) {
        case 0x22a4c0u: goto label_22a4c0;
        default: break;
    }

    ctx->pc = 0x22a468u;

    // 0x22a468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a46c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x22a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22a470: 0x38a50002  xori        $a1, $a1, 0x2
    ctx->pc = 0x22a470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x22a474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a478: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x22a478u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x22a47c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a480: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22a480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22a484: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22a484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22a488: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x22A488u;
    {
        const bool branch_taken_0x22a488 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A488u;
        // 0x22a48c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a488) {
            ctx->pc = 0x22A4B8u;
            goto label_22a4b8;
        }
    }
    ctx->pc = 0x22A490u;
    // 0x22a490: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22a490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22a494: 0x24620894  addiu       $v0, $v1, 0x894
    ctx->pc = 0x22a494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2196));
    // 0x22a498: 0x24640720  addiu       $a0, $v1, 0x720
    ctx->pc = 0x22a498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1824));
    // 0x22a49c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x22a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x22a4a0: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x22a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x22a4a4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x22a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x22a4a8: 0x84620042  lh          $v0, 0x42($v1)
    ctx->pc = 0x22a4a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x22a4ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22A4ACu;
    {
        const bool branch_taken_0x22a4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4ACu;
        // 0x22a4b0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4ac) {
            ctx->pc = 0x22A4E8u;
            goto label_22a4e8;
        }
    }
    ctx->pc = 0x22A4B4u;
    // 0x22a4b4: 0x0  nop
    ctx->pc = 0x22a4b4u;
    // NOP
label_22a4b8:
    // 0x22a4b8: 0xc08f104  jal         func_23C410
    ctx->pc = 0x22A4B8u;
    SET_GPR_U32(ctx, 31, 0x22A4C0u);
    ctx->pc = 0x23C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C410u, 0x22A4B8u, 0x22A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4C0u;
label_22a4c0:
    // 0x22a4c0: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x22a4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x22a4c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22a4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a4c8: 0x24430894  addiu       $v1, $v0, 0x894
    ctx->pc = 0x22a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2196));
    // 0x22a4cc: 0x24440720  addiu       $a0, $v0, 0x720
    ctx->pc = 0x22a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1824));
    // 0x22a4d0: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x22a4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x22a4d4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x22a4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x22a4d8: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x22a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x22a4dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x22a4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x22a4e0: 0xa446003c  sh          $a2, 0x3C($v0)
    ctx->pc = 0x22a4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 6));
    // 0x22a4e4: 0xa4460012  sh          $a2, 0x12($v0)
    ctx->pc = 0x22a4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 6));
label_22a4e8:
    // 0x22a4e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a4ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22a4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22a4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x22A4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4F0u;
        // 0x22a4f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A4F8u;
}
