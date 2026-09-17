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

// Function: sub_0029D0D8
// Address: 0x29d0d8 - 0x29d2d8
void sub_0029D0D8_0x29d0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D0D8_0x29d0d8");
#endif

    switch (ctx->pc) {
        case 0x29d110u: goto label_29d110;
        case 0x29d170u: goto label_29d170;
        case 0x29d278u: goto label_29d278;
        case 0x29d28cu: goto label_29d28c;
        case 0x29d2a0u: goto label_29d2a0;
        case 0x29d2b8u: goto label_29d2b8;
        default: break;
    }

    ctx->pc = 0x29d0d8u;

    // 0x29d0d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29d0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29d0dc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x29d0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29d0e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29d0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29d0e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29d0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d0e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29d0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x29d0ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29d0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d0f0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x29d0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x29d0f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29d0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d0f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29d0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29d0fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d100: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29d100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29d104: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x29d104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29d108: 0xc04a151  jal         func_128544
    ctx->pc = 0x29D108u;
    SET_GPR_U32(ctx, 31, 0x29D110u);
    ctx->pc = 0x29D10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D108u;
    // 0x29d10c: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x29D108u, 0x29D110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D110u;
label_29d110:
    // 0x29d110: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x29d110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29d114: 0x8e050160  lw          $a1, 0x160($s0)
    ctx->pc = 0x29d114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x29d118: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x29d118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x29d11c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x29d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x29d120: 0x8e060154  lw          $a2, 0x154($s0)
    ctx->pc = 0x29d120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x29d124: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x29d124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29d128: 0x8e070158  lw          $a3, 0x158($s0)
    ctx->pc = 0x29d128u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x29d12c: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x29D12Cu;
    {
        const bool branch_taken_0x29d12c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D12Cu;
        // 0x29d130: 0x2429823  subu        $s3, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d12c) {
            ctx->pc = 0x29D218u;
            goto label_29d218;
        }
    }
    ctx->pc = 0x29D134u;
    // 0x29d134: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x29d134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d138: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d13c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29d13cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d140: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x29D140u;
    {
        const bool branch_taken_0x29d140 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D140u;
        // 0x29d144: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d140) {
            ctx->pc = 0x29D14Cu;
            goto label_29d14c;
        }
    }
    ctx->pc = 0x29D148u;
    // 0x29d148: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x29d148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_29d14c:
    // 0x29d14c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29d14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d150: 0x1a200024  blez        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x29D150u;
    {
        const bool branch_taken_0x29d150 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x29D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D150u;
        // 0x29d154: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d150) {
            ctx->pc = 0x29D1E4u;
            goto label_29d1e4;
        }
    }
    ctx->pc = 0x29D158u;
    // 0x29d158: 0x1a400023  blez        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x29D158u;
    {
        const bool branch_taken_0x29d158 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x29D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D158u;
        // 0x29d15c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d158) {
            ctx->pc = 0x29D1E8u;
            goto label_29d1e8;
        }
    }
    ctx->pc = 0x29D160u;
    // 0x29d160: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x29d160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x29d164: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x29d164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d168: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x29d168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d16c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x29d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_29d170:
    // 0x29d170: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29d170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29d174: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29d174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29d178: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29d178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29d17c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x29d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29d180: 0x1069000b  beq         $v1, $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x29D180u;
    {
        const bool branch_taken_0x29d180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x29D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D180u;
        // 0x29d184: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d180) {
            ctx->pc = 0x29D1B0u;
            goto label_29d1b0;
        }
    }
    ctx->pc = 0x29D188u;
    // 0x29d188: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D188u;
    {
        const bool branch_taken_0x29d188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d188) {
            ctx->pc = 0x29D1A0u;
            goto label_29d1a0;
        }
    }
    ctx->pc = 0x29D190u;
    // 0x29d190: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x29D190u;
    {
        const bool branch_taken_0x29d190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d190) {
            ctx->pc = 0x29D194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D190u;
            // 0x29d194: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D1C8u;
            goto label_29d1c8;
        }
    }
    ctx->pc = 0x29D198u;
    // 0x29d198: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29D198u;
    {
        const bool branch_taken_0x29d198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D198u;
        // 0x29d19c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d198) {
            ctx->pc = 0x29D1CCu;
            goto label_29d1cc;
        }
    }
    ctx->pc = 0x29D1A0u;
label_29d1a0:
    // 0x29d1a0: 0x10680007  beq         $v1, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D1A0u;
    {
        const bool branch_taken_0x29d1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x29D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1A0u;
        // 0x29d1a4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1a0) {
            ctx->pc = 0x29D1C0u;
            goto label_29d1c0;
        }
    }
    ctx->pc = 0x29D1A8u;
    // 0x29d1a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29D1A8u;
    {
        const bool branch_taken_0x29d1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1A8u;
        // 0x29d1ac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1a8) {
            ctx->pc = 0x29D1CCu;
            goto label_29d1cc;
        }
    }
    ctx->pc = 0x29D1B0u;
label_29d1b0:
    // 0x29d1b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29d1b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29D1B8u;
    {
        const bool branch_taken_0x29d1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1B8u;
        // 0x29d1bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1b8) {
            ctx->pc = 0x29D1C8u;
            goto label_29d1c8;
        }
    }
    ctx->pc = 0x29D1C0u;
label_29d1c0:
    // 0x29d1c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29d1c4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x29d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_29d1c8:
    // 0x29d1c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29d1cc:
    // 0x29d1cc: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x29d1ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x29d1d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D1D0u;
    {
        const bool branch_taken_0x29d1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1D0u;
        // 0x29d1d4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1d0) {
            ctx->pc = 0x29D1E8u;
            goto label_29d1e8;
        }
    }
    ctx->pc = 0x29D1D8u;
    // 0x29d1d8: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x29d1d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x29d1dc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x29D1DCu;
    {
        const bool branch_taken_0x29d1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1DCu;
        // 0x29d1e0: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1dc) {
            ctx->pc = 0x29D170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d170;
        }
    }
    ctx->pc = 0x29D1E4u;
label_29d1e4:
    // 0x29d1e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29d1e8:
    // 0x29d1e8: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x29d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x29d1ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29d1f0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29d1f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d1f8: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x29d1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
    // 0x29d1fc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x29d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29d200: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x29d200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x29d204: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29d204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29d208: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29d208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29d20c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d210: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29D210u;
    {
        const bool branch_taken_0x29d210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D210u;
        // 0x29d214: 0xac830078  sw          $v1, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d210) {
            ctx->pc = 0x29D254u;
            goto label_29d254;
        }
    }
    ctx->pc = 0x29D218u;
label_29d218:
    // 0x29d218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29d218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d21c: 0x54a2000e  bnel        $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29D21Cu;
    {
        const bool branch_taken_0x29d21c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x29d21c) {
            ctx->pc = 0x29D220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D21Cu;
            // 0x29d220: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D258u;
            goto label_29d258;
        }
    }
    ctx->pc = 0x29D224u;
    // 0x29d224: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x29d224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29d228: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x29d228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x29d22c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29d230: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29d230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d234: 0xaca30078  sw          $v1, 0x78($a1)
    ctx->pc = 0x29d234u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 3));
    // 0x29d238: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x29d238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29d23c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x29d23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x29d240: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x29d240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29d244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29d244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29d248: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29d248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29d24c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d250: 0xaca30078  sw          $v1, 0x78($a1)
    ctx->pc = 0x29d250u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 3));
label_29d254:
    // 0x29d254: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29d254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_29d258:
    // 0x29d258: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x29d258u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x29d25c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29d25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d260: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x29d260u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x29d264: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x29d264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29d268: 0x2484c118  addiu       $a0, $a0, -0x3EE8
    ctx->pc = 0x29d268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951192));
    // 0x29d26c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29d26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d270: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29D270u;
    SET_GPR_U32(ctx, 31, 0x29D278u);
    ctx->pc = 0x29D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D270u;
    // 0x29d274: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29D270u, 0x29D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D278u;
label_29d278:
    // 0x29d278: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29d278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29d27c: 0x2484c370  addiu       $a0, $a0, -0x3C90
    ctx->pc = 0x29d27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951792));
    // 0x29d280: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x29d280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x29d284: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29D284u;
    SET_GPR_U32(ctx, 31, 0x29D28Cu);
    ctx->pc = 0x29D288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D284u;
    // 0x29d288: 0x24060168  addiu       $a2, $zero, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29D284u, 0x29D28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D28Cu;
label_29d28c:
    // 0x29d28c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x29d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x29d290: 0x24843f20  addiu       $a0, $a0, 0x3F20
    ctx->pc = 0x29d290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    // 0x29d294: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29d294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d298: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29D298u;
    SET_GPR_U32(ctx, 31, 0x29D2A0u);
    ctx->pc = 0x29D29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D298u;
    // 0x29d29c: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29D298u, 0x29D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2A0u;
label_29d2a0:
    // 0x29d2a0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29d2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29d2a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x29d2a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d2a8: 0x2484c380  addiu       $a0, $a0, -0x3C80
    ctx->pc = 0x29d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951808));
    // 0x29d2ac: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x29d2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x29d2b0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29D2B0u;
    SET_GPR_U32(ctx, 31, 0x29D2B8u);
    ctx->pc = 0x29D2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D2B0u;
    // 0x29d2b4: 0x24060178  addiu       $a2, $zero, 0x178 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29D2B0u, 0x29D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2B8u;
label_29d2b8:
    // 0x29d2b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29d2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d2bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x29d2bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29d2c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29d2c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d2c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x29d2c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29d2c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29d2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x29D2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2CCu;
        // 0x29d2d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D2D4u;
    // 0x29d2d4: 0x0  nop
    ctx->pc = 0x29d2d4u;
    // NOP
    ctx->pc = 0x29d2d8u;
}
