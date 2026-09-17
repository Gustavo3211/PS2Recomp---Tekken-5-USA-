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

// Function: sub_004AE968
// Address: 0x4ae968 - 0x4ae9f0
void sub_004AE968_0x4ae968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE968_0x4ae968");
#endif

    switch (ctx->pc) {
        case 0x4ae9e8u: goto label_4ae9e8;
        default: break;
    }

    ctx->pc = 0x4ae968u;

    // 0x4ae968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae96c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ae96cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ae970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae974: 0x24840d10  addiu       $a0, $a0, 0xD10
    ctx->pc = 0x4ae974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3344));
    // 0x4ae978: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ae978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ae97c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4ae97cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0D10u));
    // 0x4ae980: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ae980u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D10u));
    // 0x4ae984: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4ae984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4ae988: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ae988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ae98c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ae98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ae990: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ae990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ae994: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ae994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ae998: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ae998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ae99c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ae99cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ae9a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ae9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ae9a4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ae9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ae9a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ae9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ae9ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ae9acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ae9b0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4ae9b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ae9b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ae9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ae9b8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ae9b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ae9bc: 0x2c430008  sltiu       $v1, $v0, 0x8
    ctx->pc = 0x4ae9bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4ae9c0: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x4AE9C0u;
    {
        const bool branch_taken_0x4ae9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae9c0) {
            ctx->pc = 0x4AE9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AE9C0u;
            // 0x4ae9c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AEA0Cu;
            return;
        }
    }
    ctx->pc = 0x4AE9C8u;
    // 0x4ae9c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ae9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4ae9cc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ae9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4ae9d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ae9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ae9d4: 0x8c63b290  lw          $v1, -0x4D70($v1)
    ctx->pc = 0x4ae9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947472)));
    // 0x4ae9d8: 0x600008  jr          $v1
    ctx->pc = 0x4AE9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4AE9E0u: goto label_4ae9e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE9D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4AE9E0u;
label_4ae9e0:
    // 0x4ae9e0: 0xc12ba28  jal         func_4AE8A0
    ctx->pc = 0x4AE9E0u;
    SET_GPR_U32(ctx, 31, 0x4AE9E8u);
    ctx->pc = 0x4AE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE8A0u, 0x4AE9E0u, 0x4AE9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE9E8u;
label_4ae9e8:
    // 0x4ae9e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4AE9E8u;
    {
        const bool branch_taken_0x4ae9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE9E8u;
        // 0x4ae9ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae9e8) {
            ctx->pc = 0x4AEA0Cu;
            return;
        }
    }
    ctx->pc = 0x4AE9F0u;
}
