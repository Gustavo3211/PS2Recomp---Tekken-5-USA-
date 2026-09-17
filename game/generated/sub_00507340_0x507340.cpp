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

// Function: sub_00507340
// Address: 0x507340 - 0x5073d8
void sub_00507340_0x507340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507340_0x507340");
#endif

    switch (ctx->pc) {
        case 0x50736cu: goto label_50736c;
        case 0x50738cu: goto label_50738c;
        default: break;
    }

    ctx->pc = 0x507340u;

    // 0x507340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x507340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x507344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x507344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x507348: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x507348u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x50734c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50734cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x507350: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x507350u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x507354: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x507354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x507358: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x507358u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x50735c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50735cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x507360: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x507360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x507364: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x507364u;
    SET_GPR_U32(ctx, 31, 0x50736Cu);
    ctx->pc = 0x507368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507364u;
    // 0x507368: 0x2610c55c  addiu       $s0, $s0, -0x3AA4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x507364u, 0x50736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50736Cu;
label_50736c:
    // 0x50736c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x50736cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507370: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x507370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x507374: 0x94433d40  lhu         $v1, 0x3D40($v0)
    ctx->pc = 0x507374u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x903D40u));
    // 0x507378: 0x2631c560  addiu       $s1, $s1, -0x3AA0
    ctx->pc = 0x507378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952288));
    // 0x50737c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50737cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507380: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x507380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x507384: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x507384u;
    SET_GPR_U32(ctx, 31, 0x50738Cu);
    ctx->pc = 0x507388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507384u;
    // 0x507388: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x507384u, 0x50738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50738Cu;
label_50738c:
    // 0x50738c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50738cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507390: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x507390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x507394: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x507394u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x507398: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x507398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50739c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x50739cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x5073a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5073a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5073a4: 0x86620018  lh          $v0, 0x18($s3)
    ctx->pc = 0x5073a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x5073a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5073a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5073ac: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x5073acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x5073b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5073b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5073b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5073b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5073b8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x5073b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x5073bc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x5073bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x5073c0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x5073c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x5073c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5073c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5073c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5073c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5073cc: 0x3e00008  jr          $ra
    ctx->pc = 0x5073CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5073D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5073CCu;
        // 0x5073d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5073CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5073D4u;
    // 0x5073d4: 0x0  nop
    ctx->pc = 0x5073d4u;
    // NOP
    ctx->pc = 0x5073d8u;
}
