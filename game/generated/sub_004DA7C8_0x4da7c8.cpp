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

// Function: sub_004DA7C8
// Address: 0x4da7c8 - 0x4da8a8
void sub_004DA7C8_0x4da7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA7C8_0x4da7c8");
#endif

    switch (ctx->pc) {
        case 0x4da7e4u: goto label_4da7e4;
        default: break;
    }

    ctx->pc = 0x4da7c8u;

    // 0x4da7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4da7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4da7cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4da7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4da7d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4da7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4da7d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4da7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4da7d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4da7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4da7dc: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4DA7DCu;
    SET_GPR_U32(ctx, 31, 0x4DA7E4u);
    ctx->pc = 0x4DA7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA7DCu;
    // 0x4da7e0: 0xa602016a  sh          $v0, 0x16A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 362), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4DA7DCu, 0x4DA7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA7E4u;
label_4da7e4:
    // 0x4da7e4: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x4da7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x4da7e8: 0x24040442  addiu       $a0, $zero, 0x442
    ctx->pc = 0x4da7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1090));
    // 0x4da7ec: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4da7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4da7f0: 0xa446016a  sh          $a2, 0x16A($v0)
    ctx->pc = 0x4da7f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 362), (uint16_t)GPR_U32(ctx, 6));
    // 0x4da7f4: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x4da7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4da7f8: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4da7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4da7fc: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x4da7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4da800: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4da800u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4da804: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4da804u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4da808: 0xa444000c  sh          $a0, 0xC($v0)
    ctx->pc = 0x4da808u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x4da80c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4da80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4da810: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4da810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4da814: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4da814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4da818: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4da818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4da81c: 0x24a510fc  addiu       $a1, $a1, 0x10FC
    ctx->pc = 0x4da81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4348));
    // 0x4da820: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x4da820u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4da824: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4da824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4da828: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4da828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4da82c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4da82cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4da830: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4da830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4da834: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4da834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4da838: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4da838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4da83c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4da83cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4da840: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4da840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4da844: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4da844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4da848: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4da848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4da84c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4da84cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4da850: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4da850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4da854: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4da854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4da858: 0x24632000  addiu       $v1, $v1, 0x2000
    ctx->pc = 0x4da858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x4da85c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4da85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4da860: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4da860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4da864: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4da864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4da868: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4da868u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4da86c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4da86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4da870: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4da870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4da874: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4da874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4da878: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4da878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4da87c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4da87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4da880: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4da880u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4da884: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4da884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4da888: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4da888u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4da88c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4da88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4da890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4da890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4da894: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4da894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4da898: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4da898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4da89c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA89Cu;
        // 0x4da8a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA8A4u;
    // 0x4da8a4: 0x0  nop
    ctx->pc = 0x4da8a4u;
    // NOP
    ctx->pc = 0x4da8a8u;
}
