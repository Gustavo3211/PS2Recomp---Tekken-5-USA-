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

// Function: sub_0050B0D8
// Address: 0x50b0d8 - 0x50b180
void sub_0050B0D8_0x50b0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050B0D8_0x50b0d8");
#endif

    switch (ctx->pc) {
        case 0x50b130u: goto label_50b130;
        default: break;
    }

    ctx->pc = 0x50b0d8u;

    // 0x50b0d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50b0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50b0dc: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x50b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x50b0e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50b0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50b0e4: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x50b0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x50b0e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50b0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50b0ec: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x50b0ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x50b0f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50b0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50b0f4: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x50b0f4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x50b0f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x50b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x50b0fc: 0x2484f080  addiu       $a0, $a0, -0xF80
    ctx->pc = 0x50b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963328));
    // 0x50b100: 0x24844e0c  addiu       $a0, $a0, 0x4E0C
    ctx->pc = 0x50b100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19980));
    // 0x50b104: 0x2610c628  addiu       $s0, $s0, -0x39D8
    ctx->pc = 0x50b104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952488));
    // 0x50b108: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x50b108u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x903E8Cu));
    // 0x50b10c: 0x2631c604  addiu       $s1, $s1, -0x39FC
    ctx->pc = 0x50b10cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952452));
    // 0x50b110: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50b110u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC628u));
    // 0x50b114: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x50b114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x50b118: 0x522825  or          $a1, $v0, $s2
    ctx->pc = 0x50b118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50b11c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50b11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b120: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x50b120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x50b124: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x50b124u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50b128: 0xc124620  jal         func_491880
    ctx->pc = 0x50B128u;
    SET_GPR_U32(ctx, 31, 0x50B130u);
    ctx->pc = 0x50B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50B128u;
    // 0x50b12c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x50B128u, 0x50B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B130u;
label_50b130:
    // 0x50b130: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x50b130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50b134: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50b134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50b138: 0x24424c00  addiu       $v0, $v0, 0x4C00
    ctx->pc = 0x50b138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19456));
    // 0x50b13c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x50b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x50b140: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x50b140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50b144: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x50b144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x50b148: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50b148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50b14c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50b14cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50b150: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x50b150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50b154: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x50b154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x50b158: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50b158u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50b15c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50b15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b160: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50b160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50b164: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x50b164u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x50b168: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x50b168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x50b16c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50b170: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x50b170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x50b174: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50b174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50b178: 0x3e00008  jr          $ra
    ctx->pc = 0x50B178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B178u;
        // 0x50b17c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50B178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50B180u;
}
