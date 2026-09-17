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

// Function: sub_00244450
// Address: 0x244450 - 0x244508
void sub_00244450_0x244450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244450_0x244450");
#endif

    switch (ctx->pc) {
        case 0x2444bcu: goto label_2444bc;
        case 0x2444d0u: goto label_2444d0;
        case 0x2444e4u: goto label_2444e4;
        default: break;
    }

    ctx->pc = 0x244450u;

    // 0x244450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244454: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x244454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x244458: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x244458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24445c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24445cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244460: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x244460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x244464: 0x24636690  addiu       $v1, $v1, 0x6690
    ctx->pc = 0x244464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26256));
    // 0x244468: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24446c: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x24446cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x244470: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x244470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x244474: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x244474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244478: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x244478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24447c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x244480: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x244480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x244484: 0x8c720110  lw          $s2, 0x110($v1)
    ctx->pc = 0x244484u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x244488: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x244488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x24448c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x24448cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x244490: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x244490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x244494: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x244494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x244498: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x244498u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x24449c: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x24449cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2444a0: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x2444a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2444a4: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x2444a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2444a8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2444a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2444ac: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2444acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2444b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2444b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2444b4: 0xc0910dc  jal         func_244370
    ctx->pc = 0x2444B4u;
    SET_GPR_U32(ctx, 31, 0x2444BCu);
    ctx->pc = 0x2444B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444B4u;
    // 0x2444b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244370u, 0x2444B4u, 0x2444BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444BCu;
label_2444bc:
    // 0x2444bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2444bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2444c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2444c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2444c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2444c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2444c8: 0xc0910dc  jal         func_244370
    ctx->pc = 0x2444C8u;
    SET_GPR_U32(ctx, 31, 0x2444D0u);
    ctx->pc = 0x2444CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444C8u;
    // 0x2444cc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x244370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244370u, 0x2444C8u, 0x2444D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444D0u;
label_2444d0:
    // 0x2444d0: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x2444d0u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
    // 0x2444d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2444d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2444d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2444d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2444dc: 0xc0910dc  jal         func_244370
    ctx->pc = 0x2444DCu;
    SET_GPR_U32(ctx, 31, 0x2444E4u);
    ctx->pc = 0x2444E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444DCu;
    // 0x2444e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244370u, 0x2444DCu, 0x2444E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444E4u;
label_2444e4:
    // 0x2444e4: 0x4600a029  min.s       $f0, $f20, $f0
    ctx->pc = 0x2444e4u;
    ctx->f[0] = std::min(ctx->f[20], ctx->f[0]);
    // 0x2444e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2444e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2444ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2444ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2444f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2444f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2444f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2444f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2444f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2444f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2444fc: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x2444fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x244500: 0x3e00008  jr          $ra
    ctx->pc = 0x244500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244500u;
        // 0x244504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244508u;
}
