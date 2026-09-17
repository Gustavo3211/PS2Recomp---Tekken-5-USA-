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

// Function: sub_00126B58
// Address: 0x126b58 - 0x126be8
void sub_00126B58_0x126b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126B58_0x126b58");
#endif

    switch (ctx->pc) {
        case 0x126b84u: goto label_126b84;
        case 0x126bc0u: goto label_126bc0;
        default: break;
    }

    ctx->pc = 0x126b58u;

    // 0x126b58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126b5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x126b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x126b60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x126b60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b64: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x126b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x126b68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126b6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126b70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x126b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x126b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x126b78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x126b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x126b7c: 0xc04884a  jal         func_122128
    ctx->pc = 0x126B7Cu;
    SET_GPR_U32(ctx, 31, 0x126B84u);
    ctx->pc = 0x126B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B7Cu;
    // 0x126b80: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122128u, 0x126B7Cu, 0x126B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B84u;
label_126b84:
    // 0x126b84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b88: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x126b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x126b8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x126b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x126b90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126b94: 0x24426af8  addiu       $v0, $v0, 0x6AF8
    ctx->pc = 0x126b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27384));
    // 0x126b98: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x126b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x126b9c: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x126b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x126ba0: 0xae130028  sw          $s3, 0x28($s0)
    ctx->pc = 0x126ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 19));
    // 0x126ba4: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x126ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x126ba8: 0xa6040006  sh          $a0, 0x6($s0)
    ctx->pc = 0x126ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x126bac: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x126bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x126bb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x126bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x126bb4: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x126bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x126bb8: 0xc048762  jal         func_121D88
    ctx->pc = 0x126BB8u;
    SET_GPR_U32(ctx, 31, 0x126BC0u);
    ctx->pc = 0x126BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126BB8u;
    // 0x126bbc: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121D88u, 0x126BB8u, 0x126BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BC0u;
label_126bc0:
    // 0x126bc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x126bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126bc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126bc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126bc8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x126bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x126bcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x126bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126bd0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x126bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x126bd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x126bd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126bdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x126bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126be0: 0x3e00008  jr          $ra
    ctx->pc = 0x126BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BE0u;
        // 0x126be4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126BE8u;
}
