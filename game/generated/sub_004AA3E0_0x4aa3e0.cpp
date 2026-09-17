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

// Function: sub_004AA3E0
// Address: 0x4aa3e0 - 0x4aa4f8
void sub_004AA3E0_0x4aa3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA3E0_0x4aa3e0");
#endif

    switch (ctx->pc) {
        case 0x4aa468u: goto label_4aa468;
        case 0x4aa478u: goto label_4aa478;
        case 0x4aa488u: goto label_4aa488;
        case 0x4aa494u: goto label_4aa494;
        default: break;
    }

    ctx->pc = 0x4aa3e0u;

    // 0x4aa3e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4aa3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4aa3e4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4aa3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4aa3e8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4aa3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4aa3ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4aa3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4aa3f0: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4aa3f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4aa3f4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4aa3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4aa3f8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4aa3f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa3fc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4aa3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4aa400: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4aa400u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa404: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4aa404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4aa408: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4aa408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa40c: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x4aa40cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4aa410: 0x84850062  lh          $a1, 0x62($a0)
    ctx->pc = 0x4aa410u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 98)));
    // 0x4aa414: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4aa414u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4aa418: 0x84820060  lh          $v0, 0x60($a0)
    ctx->pc = 0x4aa418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x4aa41c: 0x3124ffff  andi        $a0, $t1, 0xFFFF
    ctx->pc = 0x4aa41cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x4aa420: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x4aa420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aa424: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x4aa424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4aa428: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4aa428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aa42c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4aa42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4aa430: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4aa430u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4aa434: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4aa434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4aa438: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4aa438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4aa43c: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x4aa43cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x4aa440: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4aa440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4aa444: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4aa444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4aa448: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x4aa448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4aa44c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4aa44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa450: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x4aa450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x4aa454: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4aa454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4aa458: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x4aa458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x4aa45c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4aa45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4aa460: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AA460u;
    SET_GPR_U32(ctx, 31, 0x4AA468u);
    ctx->pc = 0x4AA464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA460u;
    // 0x4aa464: 0xafa9000c  sw          $t1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AA460u, 0x4AA468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA468u;
label_4aa468:
    // 0x4aa468: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x4aa468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4aa46c: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x4aa46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4aa470: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AA470u;
    SET_GPR_U32(ctx, 31, 0x4AA478u);
    ctx->pc = 0x4AA474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA470u;
    // 0x4aa474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AA470u, 0x4AA478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA478u;
label_4aa478:
    // 0x4aa478: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x4aa478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4aa47c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4aa47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa480: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AA480u;
    SET_GPR_U32(ctx, 31, 0x4AA488u);
    ctx->pc = 0x4AA484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA480u;
    // 0x4aa484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AA480u, 0x4AA488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA488u;
label_4aa488:
    // 0x4aa488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4aa488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa48c: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AA48Cu;
    SET_GPR_U32(ctx, 31, 0x4AA494u);
    ctx->pc = 0x4AA490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA48Cu;
    // 0x4aa490: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AA48Cu, 0x4AA494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA494u;
label_4aa494:
    // 0x4aa494: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x4aa494u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aa498: 0x87a50010  lh          $a1, 0x10($sp)
    ctx->pc = 0x4aa498u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa49c: 0x87a4000c  lh          $a0, 0xC($sp)
    ctx->pc = 0x4aa49cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4aa4a0: 0x87a60000  lh          $a2, 0x0($sp)
    ctx->pc = 0x4aa4a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa4a4: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4aa4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4aa4a8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4aa4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa4ac: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x4aa4acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4aa4b0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4aa4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4aa4b4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4aa4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4aa4b8: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4aa4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4aa4bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4aa4bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aa4c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aa4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aa4c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4aa4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4aa4c8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4aa4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4aa4cc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4aa4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4aa4d0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4aa4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4aa4d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4aa4d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa4d8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4aa4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4aa4dc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4aa4dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4aa4e0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4aa4e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4aa4e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4aa4e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4aa4e8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4aa4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4aa4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA4ECu;
        // 0x4aa4f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA4F4u;
    // 0x4aa4f4: 0x0  nop
    ctx->pc = 0x4aa4f4u;
    // NOP
    ctx->pc = 0x4aa4f8u;
}
