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

// Function: sub_001FE070
// Address: 0x1fe070 - 0x1fe160
void sub_001FE070_0x1fe070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE070_0x1fe070");
#endif

    switch (ctx->pc) {
        case 0x1fe098u: goto label_1fe098;
        case 0x1fe130u: goto label_1fe130;
        default: break;
    }

    ctx->pc = 0x1fe070u;

    // 0x1fe070: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1fe070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1fe074: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FE074u;
    {
        const bool branch_taken_0x1fe074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE074u;
        // 0x1fe078: 0x24890014  addiu       $t1, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe074) {
            ctx->pc = 0x1FE0E8u;
            goto label_1fe0e8;
        }
    }
    ctx->pc = 0x1FE07Cu;
    // 0x1fe07c: 0x84820040  lh          $v0, 0x40($a0)
    ctx->pc = 0x1fe07cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1fe080: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fe080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe084: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x1fe084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1fe088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fe088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe08c: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x1fe08cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x1fe090: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1fe090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1fe094: 0x8ce7b560  lw          $a3, -0x4AA0($a3)
    ctx->pc = 0x1fe094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948192)));
label_1fe098:
    // 0x1fe098: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x1fe098u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fe09c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1fe09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x1fe0a0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fe0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fe0a4: 0x632818  mult        $a1, $v1, $v1
    ctx->pc = 0x1fe0a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1fe0a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fe0a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fe0ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fe0acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fe0b0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fe0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fe0b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fe0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fe0b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fe0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe0bc: 0x28c4000e  slti        $a0, $a2, 0xE
    ctx->pc = 0x1fe0bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x1fe0c0: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x1fe0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1fe0c4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1fe0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1fe0c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fe0c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe0cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fe0ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fe0d0: 0xe4410380  swc1        $f1, 0x380($v0)
    ctx->pc = 0x1fe0d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 896), bits); }
    // 0x1fe0d4: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1FE0D4u;
    {
        const bool branch_taken_0x1fe0d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0D4u;
        // 0x1fe0d8: 0xe4600370  swc1        $f0, 0x370($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0d4) {
            ctx->pc = 0x1FE098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe098;
        }
    }
    ctx->pc = 0x1FE0DCu;
    // 0x1fe0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE0E4u;
    // 0x1fe0e4: 0x0  nop
    ctx->pc = 0x1fe0e4u;
    // NOP
label_1fe0e8:
    // 0x1fe0e8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE0E8u;
    {
        const bool branch_taken_0x1fe0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0E8u;
        // 0x1fe0ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0e8) {
            ctx->pc = 0x1FE10Cu;
            goto label_1fe10c;
        }
    }
    ctx->pc = 0x1FE0F0u;
    // 0x1fe0f0: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x1fe0f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1fe0f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE0F4u;
    {
        const bool branch_taken_0x1fe0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0F4u;
        // 0x1fe0f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0f4) {
            ctx->pc = 0x1FE10Cu;
            goto label_1fe10c;
        }
    }
    ctx->pc = 0x1FE0FCu;
    // 0x1fe0fc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1fe0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1fe100: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE100u;
    {
        const bool branch_taken_0x1fe100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fe100) {
            ctx->pc = 0x1FE104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE100u;
            // 0x1fe104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE10Cu;
            goto label_1fe10c;
        }
    }
    ctx->pc = 0x1FE108u;
    // 0x1fe108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe10c:
    // 0x1fe10c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FE10Cu;
    {
        const bool branch_taken_0x1fe10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe10c) {
            ctx->pc = 0x1FE158u;
            goto label_1fe158;
        }
    }
    ctx->pc = 0x1FE114u;
    // 0x1fe114: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x1fe114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x1fe118: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fe118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fe11c: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x1fe11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1fe120: 0xc7808220  lwc1        $f0, -0x7DE0($gp)
    ctx->pc = 0x1fe120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fe124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe128: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x1fe128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1fe12c: 0x0  nop
    ctx->pc = 0x1fe12cu;
    // NOP
label_1fe130:
    // 0x1fe130: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fe130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fe134: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fe134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fe138: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fe138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fe13c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fe13cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe140: 0x28c4000e  slti        $a0, $a2, 0xE
    ctx->pc = 0x1fe140u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x1fe144: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x1fe144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1fe148: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fe148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fe14c: 0xe4410380  swc1        $f1, 0x380($v0)
    ctx->pc = 0x1fe14cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 896), bits); }
    // 0x1fe150: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FE150u;
    {
        const bool branch_taken_0x1fe150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE150u;
        // 0x1fe154: 0xe4600370  swc1        $f0, 0x370($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe150) {
            ctx->pc = 0x1FE130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe130;
        }
    }
    ctx->pc = 0x1FE158u;
label_1fe158:
    // 0x1fe158: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE160u;
}
