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

// Function: sub_00127290
// Address: 0x127290 - 0x127350
void sub_00127290_0x127290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127290_0x127290");
#endif

    ctx->pc = 0x127290u;

    // 0x127290: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x127290u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127294: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x127294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127298: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x127298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12729c: 0x52b3a  dsrl        $a1, $a1, 12
    ctx->pc = 0x12729cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 12);
    // 0x1272a0: 0x21d3e  dsrl32      $v1, $v0, 20
    ctx->pc = 0x1272a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x1272a4: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x1272a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1272a8: 0x306707ff  andi        $a3, $v1, 0x7FF
    ctx->pc = 0x1272a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x1272ac: 0x451824  and         $v1, $v0, $a1
    ctx->pc = 0x1272acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1272b0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1272B0u;
    {
        const bool branch_taken_0x1272b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1272B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272B0u;
        // 0x1272b4: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1272b0) {
            ctx->pc = 0x1272C8u;
            goto label_1272c8;
        }
    }
    ctx->pc = 0x1272B8u;
    // 0x1272b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1272b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1272bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1272BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1272C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272BCu;
        // 0x1272c0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1272BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1272C4u;
    // 0x1272c4: 0x0  nop
    ctx->pc = 0x1272c4u;
    // NOP
label_1272c8:
    // 0x1272c8: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x1272c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1272cc: 0x54e20016  bnel        $a3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1272CCu;
    {
        const bool branch_taken_0x1272cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1272cc) {
            ctx->pc = 0x1272D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1272CCu;
            // 0x1272d0: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x127328u;
            goto label_127328;
        }
    }
    ctx->pc = 0x1272D4u;
    // 0x1272d4: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x1272d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1272d8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1272D8u;
    {
        const bool branch_taken_0x1272d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1272DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272D8u;
        // 0x1272dc: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1272d8) {
            ctx->pc = 0x1272F8u;
            goto label_1272f8;
        }
    }
    ctx->pc = 0x1272E0u;
    // 0x1272e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1272e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1272e4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1272e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1272e8: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1272e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x1272ec: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x1272ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x1272f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1272F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1272F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272F0u;
        // 0x1272f4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1272F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1272F8u;
label_1272f8:
    // 0x1272f8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1272f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1272fc: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1272fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x127300: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x127300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x127304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127304u;
    {
        const bool branch_taken_0x127304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127304u;
        // 0x127308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127304) {
            ctx->pc = 0x127318u;
            goto label_127318;
        }
    }
    ctx->pc = 0x12730Cu;
    // 0x12730c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12730Cu;
    {
        const bool branch_taken_0x12730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12730Cu;
        // 0x127310: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12730c) {
            ctx->pc = 0x12731Cu;
            goto label_12731c;
        }
    }
    ctx->pc = 0x127314u;
    // 0x127314: 0x0  nop
    ctx->pc = 0x127314u;
    // NOP
label_127318:
    // 0x127318: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x127318u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_12731c:
    // 0x12731c: 0x3e00008  jr          $ra
    ctx->pc = 0x12731Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12731Cu;
        // 0x127320: 0xfcc30010  sd          $v1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12731Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127324u;
    // 0x127324: 0x0  nop
    ctx->pc = 0x127324u;
    // NOP
label_127328:
    // 0x127328: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x127328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12732c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x12732cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x127330: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x127330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x127334: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127338: 0x24e4fc01  addiu       $a0, $a3, -0x3FF
    ctx->pc = 0x127338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966273));
    // 0x12733c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x12733cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x127340: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x127340u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x127344: 0x3e00008  jr          $ra
    ctx->pc = 0x127344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127344u;
        // 0x127348: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12734Cu;
    // 0x12734c: 0x0  nop
    ctx->pc = 0x12734cu;
    // NOP
    ctx->pc = 0x127350u;
}
