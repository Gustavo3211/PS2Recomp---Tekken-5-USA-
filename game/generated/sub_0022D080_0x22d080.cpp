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

// Function: sub_0022D080
// Address: 0x22d080 - 0x22d340
void sub_0022D080_0x22d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D080_0x22d080");
#endif

    switch (ctx->pc) {
        case 0x22d0b8u: goto label_22d0b8;
        case 0x22d0e8u: goto label_22d0e8;
        case 0x22d0f0u: goto label_22d0f0;
        case 0x22d1a0u: goto label_22d1a0;
        case 0x22d1d0u: goto label_22d1d0;
        case 0x22d1f8u: goto label_22d1f8;
        case 0x22d248u: goto label_22d248;
        default: break;
    }

    ctx->pc = 0x22d080u;

    // 0x22d080: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22d080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22d084: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22d084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22d088: 0x244292a0  addiu       $v0, $v0, -0x6D60
    ctx->pc = 0x22d088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939296));
    // 0x22d08c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x22d08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x22d090: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x22d090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x22d094: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22d094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d098: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x22d098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x22d09c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22d09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d0a0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x22d0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x22d0a4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x22d0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x22d0a8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x22d0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x22d0ac: 0xac420050  sw          $v0, 0x50($v0)
    ctx->pc = 0x22d0acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1592F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1592F0u, _value); } while (0);
    // 0x22d0b0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x22d0b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1592BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1592BCu, _value); } while (0);
    // 0x22d0b4: 0x0  nop
    ctx->pc = 0x22d0b4u;
    // NOP
label_22d0b8:
    // 0x22d0b8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x22d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22d0bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22d0bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22d0c0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x22d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x22d0c4: 0x2a240007  slti        $a0, $s1, 0x7
    ctx->pc = 0x22d0c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x22d0c8: 0x0  nop
    ctx->pc = 0x22d0c8u;
    // NOP
    // 0x22d0cc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22D0CCu;
    {
        const bool branch_taken_0x22d0cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0CCu;
        // 0x22d0d0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0cc) {
            ctx->pc = 0x22D0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d0b8;
        }
    }
    ctx->pc = 0x22D0D4u;
    // 0x22d0d4: 0x8e510030  lw          $s1, 0x30($s2)
    ctx->pc = 0x22d0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x22d0d8: 0x1a20002d  blez        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x22D0D8u;
    {
        const bool branch_taken_0x22d0d8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x22D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0D8u;
        // 0x22d0dc: 0x8e500034  lw          $s0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0d8) {
            ctx->pc = 0x22D190u;
            goto label_22d190;
        }
    }
    ctx->pc = 0x22D0E0u;
    // 0x22d0e0: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x22d0e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
    // 0x22d0e4: 0x0  nop
    ctx->pc = 0x22d0e4u;
    // NOP
label_22d0e8:
    // 0x22d0e8: 0xc08b3f4  jal         func_22CFD0
    ctx->pc = 0x22D0E8u;
    SET_GPR_U32(ctx, 31, 0x22D0F0u);
    ctx->pc = 0x22D0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D0E8u;
    // 0x22d0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CFD0u, 0x22D0E8u, 0x22D0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D0F0u;
label_22d0f0:
    // 0x22d0f0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x22d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x22d0f4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22d0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22d0f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D0F8u;
    {
        const bool branch_taken_0x22d0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0F8u;
        // 0x22d0fc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0f8) {
            ctx->pc = 0x22D108u;
            goto label_22d108;
        }
    }
    ctx->pc = 0x22D100u;
    // 0x22d100: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d104: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22d104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_22d108:
    // 0x22d108: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x22d108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x22d10c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D10Cu;
    {
        const bool branch_taken_0x22d10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D10Cu;
        // 0x22d110: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d10c) {
            ctx->pc = 0x22D11Cu;
            goto label_22d11c;
        }
    }
    ctx->pc = 0x22D114u;
    // 0x22d114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d118: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x22d118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_22d11c:
    // 0x22d11c: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x22d11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x22d120: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D120u;
    {
        const bool branch_taken_0x22d120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D120u;
        // 0x22d124: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d120) {
            ctx->pc = 0x22D130u;
            goto label_22d130;
        }
    }
    ctx->pc = 0x22D128u;
    // 0x22d128: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d12c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x22d12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_22d130:
    // 0x22d130: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x22d130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x22d134: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D134u;
    {
        const bool branch_taken_0x22d134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D134u;
        // 0x22d138: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d134) {
            ctx->pc = 0x22D144u;
            goto label_22d144;
        }
    }
    ctx->pc = 0x22D13Cu;
    // 0x22d13c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d140: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x22d140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_22d144:
    // 0x22d144: 0x731024  and         $v0, $v1, $s3
    ctx->pc = 0x22d144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x22d148: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D148u;
    {
        const bool branch_taken_0x22d148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D148u;
        // 0x22d14c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d148) {
            ctx->pc = 0x22D158u;
            goto label_22d158;
        }
    }
    ctx->pc = 0x22D150u;
    // 0x22d150: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d154: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x22d154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_22d158:
    // 0x22d158: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x22d158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x22d15c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D15Cu;
    {
        const bool branch_taken_0x22d15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D15Cu;
        // 0x22d160: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d15c) {
            ctx->pc = 0x22D16Cu;
            goto label_22d16c;
        }
    }
    ctx->pc = 0x22D164u;
    // 0x22d164: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d168: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x22d168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_22d16c:
    // 0x22d16c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x22d16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x22d170: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D170u;
    {
        const bool branch_taken_0x22d170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D170u;
        // 0x22d174: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d170) {
            ctx->pc = 0x22D180u;
            goto label_22d180;
        }
    }
    ctx->pc = 0x22D178u;
    // 0x22d178: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d17c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x22d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_22d180:
    // 0x22d180: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x22d180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x22d184: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22d184u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22d188: 0x1e20ffd7  bgtz        $s1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x22D188u;
    {
        const bool branch_taken_0x22d188 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x22D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D188u;
        // 0x22d18c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d188) {
            ctx->pc = 0x22D0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d0e8;
        }
    }
    ctx->pc = 0x22D190u;
label_22d190:
    // 0x22d190: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22d190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22d194: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x22d194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d198: 0x24549300  addiu       $s4, $v0, -0x6D00
    ctx->pc = 0x22d198u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939392));
    // 0x22d19c: 0x3c130015  lui         $s3, 0x15
    ctx->pc = 0x22d19cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
label_22d1a0:
    // 0x22d1a0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x22d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22d1a4: 0x1180c0  sll         $s0, $s1, 3
    ctx->pc = 0x22d1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x22d1a8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x22d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x22d1ac: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x22d1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x22d1b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d1b4: 0x2626002a  addiu       $a2, $s1, 0x2A
    ctx->pc = 0x22d1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 42));
    // 0x22d1b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22d1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22d1bc: 0x26672d88  addiu       $a3, $s3, 0x2D88
    ctx->pc = 0x22d1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 11656));
    // 0x22d1c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22d1c4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x22d1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22d1c8: 0xc089248  jal         func_224920
    ctx->pc = 0x22D1C8u;
    SET_GPR_U32(ctx, 31, 0x22D1D0u);
    ctx->pc = 0x22D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D1C8u;
    // 0x22d1cc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x22D1C8u, 0x22D1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D1D0u;
label_22d1d0:
    // 0x22d1d0: 0x2a230007  slti        $v1, $s1, 0x7
    ctx->pc = 0x22d1d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x22d1d4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x22D1D4u;
    {
        const bool branch_taken_0x22d1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1D4u;
        // 0x22d1d8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d1d4) {
            ctx->pc = 0x22D1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d1a0;
        }
    }
    ctx->pc = 0x22D1DCu;
    // 0x22d1dc: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22d1e0: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x22d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x22d1e4: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x22d1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x22d1e8: 0x24489300  addiu       $t0, $v0, -0x6D00
    ctx->pc = 0x22d1e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939392));
    // 0x22d1ec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x22d1ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d1f0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x22d1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22d1f4: 0x0  nop
    ctx->pc = 0x22d1f4u;
    // NOP
label_22d1f8:
    // 0x22d1f8: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x22d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x22d1fc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x22d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22d200: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x22d200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x22d204: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22d204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22d208: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x22d208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22d20c: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x22d20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x22d210: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x22d210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x22d214: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22D214u;
    {
        const bool branch_taken_0x22d214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D214u;
        // 0x22d218: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d214) {
            ctx->pc = 0x22D1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d1f8;
        }
    }
    ctx->pc = 0x22D21Cu;
    // 0x22d21c: 0x58c00040  blezl       $a2, . + 4 + (0x40 << 2)
    ctx->pc = 0x22D21Cu;
    {
        const bool branch_taken_0x22d21c = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x22d21c) {
            ctx->pc = 0x22D220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D21Cu;
            // 0x22d220: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D320u;
            goto label_22d320;
        }
    }
    ctx->pc = 0x22D224u;
    // 0x22d224: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22d224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22d228: 0x27ac0024  addiu       $t4, $sp, 0x24
    ctx->pc = 0x22d228u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x22d22c: 0x244b92a0  addiu       $t3, $v0, -0x6D60
    ctx->pc = 0x22d22cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939296));
    // 0x22d230: 0x27aa0028  addiu       $t2, $sp, 0x28
    ctx->pc = 0x22d230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x22d234: 0x27a9002c  addiu       $t1, $sp, 0x2C
    ctx->pc = 0x22d234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x22d238: 0x3c0d0001  lui         $t5, 0x1
    ctx->pc = 0x22d238u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1 << 16));
    // 0x22d23c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x22d23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22d240: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x22d240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x22d244: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x22d244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_22d248:
    // 0x22d248: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x22d248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x22d24c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22d24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22d250: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D250u;
    {
        const bool branch_taken_0x22d250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D250u;
        // 0x22d254: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d250) {
            ctx->pc = 0x22D268u;
            goto label_22d268;
        }
    }
    ctx->pc = 0x22D258u;
    // 0x22d258: 0x8d62001c  lw          $v0, 0x1C($t3)
    ctx->pc = 0x22d258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x22d25c: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x22d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x22d260: 0xad65001c  sw          $a1, 0x1C($t3)
    ctx->pc = 0x22d260u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 5));
    // 0x22d264: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x22d264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_22d268:
    // 0x22d268: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D268u;
    {
        const bool branch_taken_0x22d268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D268u;
        // 0x22d26c: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d268) {
            ctx->pc = 0x22D284u;
            goto label_22d284;
        }
    }
    ctx->pc = 0x22D270u;
    // 0x22d270: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x22d270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x22d274: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x22d274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x22d278: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22d278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22d27c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x22d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x22d280: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x22d280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_22d284:
    // 0x22d284: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D284u;
    {
        const bool branch_taken_0x22d284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D284u;
        // 0x22d288: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d284) {
            ctx->pc = 0x22D2A0u;
            goto label_22d2a0;
        }
    }
    ctx->pc = 0x22D28Cu;
    // 0x22d28c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x22d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x22d290: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x22d290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x22d294: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22d294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22d298: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x22d298u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x22d29c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x22d29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_22d2a0:
    // 0x22d2a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D2A0u;
    {
        const bool branch_taken_0x22d2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2A0u;
        // 0x22d2a4: 0x6d1024  and         $v0, $v1, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2a0) {
            ctx->pc = 0x22D2BCu;
            goto label_22d2bc;
        }
    }
    ctx->pc = 0x22D2A8u;
    // 0x22d2a8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x22d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x22d2ac: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x22d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x22d2b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22d2b4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x22d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x22d2b8: 0x6d1024  and         $v0, $v1, $t5
    ctx->pc = 0x22d2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
label_22d2bc:
    // 0x22d2bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D2BCu;
    {
        const bool branch_taken_0x22d2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2BCu;
        // 0x22d2c0: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2bc) {
            ctx->pc = 0x22D2D8u;
            goto label_22d2d8;
        }
    }
    ctx->pc = 0x22D2C4u;
    // 0x22d2c4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x22d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x22d2c8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x22d2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x22d2cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22d2d0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x22d2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x22d2d4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x22d2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_22d2d8:
    // 0x22d2d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D2D8u;
    {
        const bool branch_taken_0x22d2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2D8u;
        // 0x22d2dc: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2d8) {
            ctx->pc = 0x22D2F4u;
            goto label_22d2f4;
        }
    }
    ctx->pc = 0x22D2E0u;
    // 0x22d2e0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x22d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22d2e4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x22d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x22d2e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22d2ec: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x22d2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x22d2f0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x22d2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_22d2f4:
    // 0x22d2f4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D2F4u;
    {
        const bool branch_taken_0x22d2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d2f4) {
            ctx->pc = 0x22D2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D2F4u;
            // 0x22d2f8: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D310u;
            goto label_22d310;
        }
    }
    ctx->pc = 0x22D2FCu;
    // 0x22d2fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d300: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x22d300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x22d304: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22d304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22d308: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22d308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x22d30c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x22d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_22d310:
    // 0x22d310: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22d310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d314: 0x1cc0ffcc  bgtz        $a2, . + 4 + (-0x34 << 2)
    ctx->pc = 0x22D314u;
    {
        const bool branch_taken_0x22d314 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x22D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D314u;
        // 0x22d318: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d314) {
            ctx->pc = 0x22D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d248;
        }
    }
    ctx->pc = 0x22D31Cu;
    // 0x22d31c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x22d31cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22d320:
    // 0x22d320: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x22d320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d324: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x22d324u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d328: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x22d328u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22d32c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x22d32cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22d330: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x22d330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x22d334: 0x3e00008  jr          $ra
    ctx->pc = 0x22D334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D334u;
        // 0x22d338: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D33Cu;
    // 0x22d33c: 0x0  nop
    ctx->pc = 0x22d33cu;
    // NOP
    ctx->pc = 0x22d340u;
}
