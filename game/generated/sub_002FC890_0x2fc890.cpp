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

// Function: sub_002FC890
// Address: 0x2fc890 - 0x2fc910
void sub_002FC890_0x2fc890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC890_0x2fc890");
#endif

    switch (ctx->pc) {
        case 0x2fc8c4u: goto label_2fc8c4;
        case 0x2fc8e8u: goto label_2fc8e8;
        default: break;
    }

    ctx->pc = 0x2fc890u;

    // 0x2fc890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc894: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2fc894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2fc898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc89c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc8a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fc8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fc8a4: 0x24a51ba8  addiu       $a1, $a1, 0x1BA8
    ctx->pc = 0x2fc8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7080));
    // 0x2fc8a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc8ac: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x2fc8acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2fc8b0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2fc8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2fc8b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC8B4u;
    {
        const bool branch_taken_0x2fc8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8B4u;
        // 0x2fc8b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc8b4) {
            ctx->pc = 0x2FC8D0u;
            goto label_2fc8d0;
        }
    }
    ctx->pc = 0x2FC8BCu;
    // 0x2fc8bc: 0xc0bf32c  jal         func_2FCCB0
    ctx->pc = 0x2FC8BCu;
    SET_GPR_U32(ctx, 31, 0x2FC8C4u);
    ctx->pc = 0x2FCCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCCB0u, 0x2FC8BCu, 0x2FC8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC8C4u;
label_2fc8c4:
    // 0x2fc8c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC8C4u;
    {
        const bool branch_taken_0x2fc8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc8c4) {
            ctx->pc = 0x2FC8D4u;
            goto label_2fc8d4;
        }
    }
    ctx->pc = 0x2FC8CCu;
    // 0x2fc8cc: 0x0  nop
    ctx->pc = 0x2fc8ccu;
    // NOP
label_2fc8d0:
    // 0x2fc8d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fc8d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fc8d4:
    // 0x2fc8d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FC8D4u;
    {
        const bool branch_taken_0x2fc8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8D4u;
        // 0x2fc8d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc8d4) {
            ctx->pc = 0x2FC8F4u;
            goto label_2fc8f4;
        }
    }
    ctx->pc = 0x2FC8DCu;
    // 0x2fc8dc: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2fc8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x2fc8e0: 0xc0bf728  jal         func_2FDCA0
    ctx->pc = 0x2FC8E0u;
    SET_GPR_U32(ctx, 31, 0x2FC8E8u);
    ctx->pc = 0x2FC8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC8E0u;
    // 0x2fc8e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDCA0u, 0x2FC8E0u, 0x2FC8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC8E8u;
label_2fc8e8:
    // 0x2fc8e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fc8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc8ec: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FC8ECu;
    {
        const bool branch_taken_0x2fc8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fc8ec) {
            ctx->pc = 0x2FC8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC8ECu;
            // 0x2fc8f0: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC8F4u;
            goto label_2fc8f4;
        }
    }
    ctx->pc = 0x2FC8F4u;
label_2fc8f4:
    // 0x2fc8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc8f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fc8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc8fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fc8fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc904: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC904u;
        // 0x2fc908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC90Cu;
    // 0x2fc90c: 0x0  nop
    ctx->pc = 0x2fc90cu;
    // NOP
    ctx->pc = 0x2fc910u;
}
