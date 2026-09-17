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

// Function: sub_0024BF28
// Address: 0x24bf28 - 0x24c070
void sub_0024BF28_0x24bf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BF28_0x24bf28");
#endif

    switch (ctx->pc) {
        case 0x24bf68u: goto label_24bf68;
        case 0x24bf90u: goto label_24bf90;
        case 0x24bf98u: goto label_24bf98;
        case 0x24bfd4u: goto label_24bfd4;
        default: break;
    }

    ctx->pc = 0x24bf28u;

    // 0x24bf28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24bf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24bf2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24bf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24bf30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24bf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24bf34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24bf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24bf38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24bf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24bf3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24bf3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bf40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24bf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24bf44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24bf44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bf48: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24bf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24bf4c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24bf4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bf50: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24bf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24bf54: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x24bf54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bf58: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x24bf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x24bf5c: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x24bf5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24bf60: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x24bf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x24bf64: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x24bf64u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
label_24bf68:
    // 0x24bf68: 0x8ee28858  lw          $v0, -0x77A8($s7)
    ctx->pc = 0x24bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936664)));
    // 0x24bf6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24bf70: 0x56001b  divu        $zero, $v0, $s6
    ctx->pc = 0x24bf70u;
    { uint32_t divisor = GPR_U32(ctx, 22); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24bf74: 0x1810  mfhi        $v1
    ctx->pc = 0x24bf74u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24bf78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BF78u;
    {
        const bool branch_taken_0x24bf78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF78u;
        // 0x24bf7c: 0x2413001d  addiu       $s3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bf78) {
            ctx->pc = 0x24BF88u;
            goto label_24bf88;
        }
    }
    ctx->pc = 0x24BF80u;
    // 0x24bf80: 0x52a00017  beql        $s5, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x24BF80u;
    {
        const bool branch_taken_0x24bf80 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bf80) {
            ctx->pc = 0x24BF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BF80u;
            // 0x24bf84: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BFE0u;
            goto label_24bfe0;
        }
    }
    ctx->pc = 0x24BF88u;
label_24bf88:
    // 0x24bf88: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x24bf88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bf8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x24bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24bf90:
    // 0x24bf90: 0xde050028  ld          $a1, 0x28($s0)
    ctx->pc = 0x24bf90u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24bf94: 0x0  nop
    ctx->pc = 0x24bf94u;
    // NOP
label_24bf98:
    // 0x24bf98: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x24bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24bf9c: 0x2843001e  slti        $v1, $v0, 0x1E
    ctx->pc = 0x24bf9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x24bfa0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BFA0u;
    {
        const bool branch_taken_0x24bfa0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x24BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFA0u;
        // 0x24bfa4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bfa0) {
            ctx->pc = 0x24BFB0u;
            goto label_24bfb0;
        }
    }
    ctx->pc = 0x24BFA8u;
    // 0x24bfa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24BFA8u;
    {
        const bool branch_taken_0x24bfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFA8u;
        // 0x24bfac: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bfa8) {
            ctx->pc = 0x24BFB8u;
            goto label_24bfb8;
        }
    }
    ctx->pc = 0x24BFB0u;
label_24bfb0:
    // 0x24bfb0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24BFB0u;
    {
        const bool branch_taken_0x24bfb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bfb0) {
            ctx->pc = 0x24BFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BFB0u;
            // 0x24bfb4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BFB8u;
            goto label_24bfb8;
        }
    }
    ctx->pc = 0x24BFB8u;
label_24bfb8:
    // 0x24bfb8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x24bfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24bfbc: 0x851016  dsrlv       $v0, $a1, $a0
    ctx->pc = 0x24bfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x24bfc0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x24bfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x24bfc4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x24BFC4u;
    {
        const bool branch_taken_0x24bfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFC4u;
        // 0x24bfc8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bfc4) {
            ctx->pc = 0x24BF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24bf98;
        }
    }
    ctx->pc = 0x24BFCCu;
    // 0x24bfcc: 0xc086304  jal         func_218C10
    ctx->pc = 0x24BFCCu;
    SET_GPR_U32(ctx, 31, 0x24BFD4u);
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x24BFCCu, 0x24BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BFD4u;
label_24bfd4:
    // 0x24bfd4: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x24BFD4u;
    {
        const bool branch_taken_0x24bfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bfd4) {
            ctx->pc = 0x24BFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BFD4u;
            // 0x24bfd8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24bf90;
        }
    }
    ctx->pc = 0x24BFDCu;
    // 0x24bfdc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24bfdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24bfe0:
    // 0x24bfe0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x24bfe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24bfe4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x24BFE4u;
    {
        const bool branch_taken_0x24bfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFE4u;
        // 0x24bfe8: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bfe4) {
            ctx->pc = 0x24BF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24bf68;
        }
    }
    ctx->pc = 0x24BFECu;
    // 0x24bfec: 0x8ee28858  lw          $v0, -0x77A8($s7)
    ctx->pc = 0x24bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936664)));
    // 0x24bff0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24bff4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x24bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x24bff8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x24bff8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24bffc: 0x1810  mfhi        $v1
    ctx->pc = 0x24bffcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24c000: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C000u;
    {
        const bool branch_taken_0x24c000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c000) {
            ctx->pc = 0x24C004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C000u;
            // 0x24c004: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C014u;
            goto label_24c014;
        }
    }
    ctx->pc = 0x24C008u;
    // 0x24c008: 0x52a0000f  beql        $s5, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x24C008u;
    {
        const bool branch_taken_0x24c008 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c008) {
            ctx->pc = 0x24C00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C008u;
            // 0x24c00c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C048u;
            goto label_24c048;
        }
    }
    ctx->pc = 0x24C010u;
    // 0x24c010: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x24c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_24c014:
    // 0x24c014: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x24c014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24c018: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C018u;
    {
        const bool branch_taken_0x24c018 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x24C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C018u;
        // 0x24c01c: 0xae830010  sw          $v1, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c018) {
            ctx->pc = 0x24C030u;
            goto label_24c030;
        }
    }
    ctx->pc = 0x24C020u;
    // 0x24c020: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x24c020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x24c024: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x24c024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x24c028: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24C028u;
    {
        const bool branch_taken_0x24c028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C028u;
        // 0x24c02c: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c028) {
            ctx->pc = 0x24C044u;
            goto label_24c044;
        }
    }
    ctx->pc = 0x24C030u;
label_24c030:
    // 0x24c030: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x24c030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x24c034: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x24c034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x24c038: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24c038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24c03c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24C03Cu;
    {
        const bool branch_taken_0x24c03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c03c) {
            ctx->pc = 0x24C040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C03Cu;
            // 0x24c040: 0xae800010  sw          $zero, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C044u;
            goto label_24c044;
        }
    }
    ctx->pc = 0x24C044u;
label_24c044:
    // 0x24c044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24c048:
    // 0x24c048: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c04c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24c04cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c050: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24c050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c054: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24c054u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c058: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24c058u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24c05c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x24c05cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c060: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x24c060u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24c064: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24c064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c068: 0x3e00008  jr          $ra
    ctx->pc = 0x24C068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C068u;
        // 0x24c06c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C070u;
}
