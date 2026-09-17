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

// Function: sub_00265F60
// Address: 0x265f60 - 0x266070
void sub_00265F60_0x265f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265F60_0x265f60");
#endif

    ctx->pc = 0x265f60u;

    // 0x265f60: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x265f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265f64: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x265f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x265f68: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x265f68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265f6c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x265f6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x265f70: 0xa4400010  sh          $zero, 0x10($v0)
    ctx->pc = 0x265f70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x265f74: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x265f74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x265f78: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x265f78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x265f7c: 0x240d0007  addiu       $t5, $zero, 0x7
    ctx->pc = 0x265f7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x265f80: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265f84: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x265f84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x265f88: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x265f88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x265f8c: 0x94650010  lhu         $a1, 0x10($v1)
    ctx->pc = 0x265f8cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x265f90: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x265f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x265f94: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x265f94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x265f98: 0xa4620010  sh          $v0, 0x10($v1)
    ctx->pc = 0x265f98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x265f9c: 0x52b83  sra         $a1, $a1, 14
    ctx->pc = 0x265f9cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 14));
    // 0x265fa0: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x265fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265fa4: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x265fa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x265fa8: 0x84e60010  lh          $a2, 0x10($a3)
    ctx->pc = 0x265fa8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x265fac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x265facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x265fb0: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x265fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x265fb4: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x265fb4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x265fb8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x265fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x265fbc: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x265fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x265fc0: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x265fc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265fc4: 0x94670002  lhu         $a3, 0x2($v1)
    ctx->pc = 0x265fc4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x265fc8: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x265fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x265fcc: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x265fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x265fd0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x265fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x265fd4: 0x30860008  andi        $a2, $a0, 0x8
    ctx->pc = 0x265fd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x265fd8: 0x105100b  movn        $v0, $t0, $a1
    ctx->pc = 0x265fd8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x265fdc: 0x30850010  andi        $a1, $a0, 0x10
    ctx->pc = 0x265fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x265fe0: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x265fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x265fe4: 0x126100b  movn        $v0, $t1, $a2
    ctx->pc = 0x265fe4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
    // 0x265fe8: 0x145100b  movn        $v0, $t2, $a1
    ctx->pc = 0x265fe8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
    // 0x265fec: 0x30850080  andi        $a1, $a0, 0x80
    ctx->pc = 0x265fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x265ff0: 0x38780000  xori        $t8, $v1, 0x0
    ctx->pc = 0x265ff0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x265ff4: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x265ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x265ff8: 0x163100b  movn        $v0, $t3, $v1
    ctx->pc = 0x265ff8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 11));
    // 0x265ffc: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x265ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x266000: 0x30e60008  andi        $a2, $a3, 0x8
    ctx->pc = 0x266000u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x266004: 0x183100b  movn        $v0, $t4, $v1
    ctx->pc = 0x266004u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x266008: 0x38c90000  xori        $t1, $a2, 0x0
    ctx->pc = 0x266008u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)0);
    // 0x26600c: 0x30860100  andi        $a2, $a0, 0x100
    ctx->pc = 0x26600cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x266010: 0x1a5100b  movn        $v0, $t5, $a1
    ctx->pc = 0x266010u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 13));
    // 0x266014: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x266014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x266018: 0x1c6100b  movn        $v0, $t6, $a2
    ctx->pc = 0x266018u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
    // 0x26601c: 0x331c0  sll         $a2, $v1, 7
    ctx->pc = 0x26601cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x266020: 0x30840200  andi        $a0, $a0, 0x200
    ctx->pc = 0x266020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x266024: 0x30e70002  andi        $a3, $a3, 0x2
    ctx->pc = 0x266024u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x266028: 0x1e4100b  movn        $v0, $t7, $a0
    ctx->pc = 0x266028u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
    // 0x26602c: 0x34c30010  ori         $v1, $a2, 0x10
    ctx->pc = 0x26602cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x266030: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x266030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x266034: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x266034u;
    {
        const bool branch_taken_0x266034 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x266038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266034u;
        // 0x266038: 0x8f88aa78  lw          $t0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266034) {
            ctx->pc = 0x266040u;
            goto label_266040;
        }
    }
    ctx->pc = 0x26603Cu;
    // 0x26603c: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x26603cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_266040:
    // 0x266040: 0x34c30040  ori         $v1, $a2, 0x40
    ctx->pc = 0x266040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x266044: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x266044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x266048: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x266048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26604c: 0x94a52d50  lhu         $a1, 0x2D50($a1)
    ctx->pc = 0x26604cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 11600)));
    // 0x266050: 0x78300b  movn        $a2, $v1, $t8
    ctx->pc = 0x266050u;
    if (GPR_U64(ctx, 24) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x266054: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x266054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266058: 0x34c40020  ori         $a0, $a2, 0x20
    ctx->pc = 0x266058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x26605c: 0x89300b  movn        $a2, $a0, $t1
    ctx->pc = 0x26605cu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x266060: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x266060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x266064: 0x3e00008  jr          $ra
    ctx->pc = 0x266064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266064u;
        // 0x266068: 0xa5060006  sh          $a2, 0x6($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26606Cu;
    // 0x26606c: 0x0  nop
    ctx->pc = 0x26606cu;
    // NOP
    ctx->pc = 0x266070u;
}
