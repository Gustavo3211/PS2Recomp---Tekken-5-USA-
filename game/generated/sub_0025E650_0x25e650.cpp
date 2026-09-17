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

// Function: sub_0025E650
// Address: 0x25e650 - 0x25e718
void sub_0025E650_0x25e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E650_0x25e650");
#endif

    switch (ctx->pc) {
        case 0x25e680u: goto label_25e680;
        case 0x25e6c0u: goto label_25e6c0;
        case 0x25e70cu: goto label_25e70c;
        default: break;
    }

    ctx->pc = 0x25e650u;

    // 0x25e650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25e650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25e654: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x25e654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x25e658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e65c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x25e65cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e660: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25e660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25e664: 0x244be750  addiu       $t3, $v0, -0x18B0
    ctx->pc = 0x25e664u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960976));
    // 0x25e668: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25e668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25e66c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25e66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e670: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e674: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x25e674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x25e678: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25e678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25e67c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x25e67cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25e680:
    // 0x25e680: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x25e680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x25e684: 0x85230012  lh          $v1, 0x12($t1)
    ctx->pc = 0x25e684u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 18)));
    // 0x25e688: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x25e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x25e68c: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x25e68cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x25e690: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25e690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e694: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25e694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25e698: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x25e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x25e69c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x25e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x25e6a0: 0x24420834  addiu       $v0, $v0, 0x834
    ctx->pc = 0x25e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2100));
    // 0x25e6a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x25e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x25e6a8: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x25e6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x25e6ac: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x25e6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x25e6b0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x25e6b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25e6b4: 0x874023  subu        $t0, $a0, $a3
    ctx->pc = 0x25e6b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x25e6b8: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x25e6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x25e6bc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x25e6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_25e6c0:
    // 0x25e6c0: 0x8d240894  lw          $a0, 0x894($t1)
    ctx->pc = 0x25e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 2196)));
    // 0x25e6c4: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x25e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x25e6c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x25e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25e6cc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x25e6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x25e6d0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x25e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x25e6d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e6d8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x25e6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x25e6dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25e6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25e6e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x25e6e4: 0x4a1fff6  bgez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x25E6E4u;
    {
        const bool branch_taken_0x25e6e4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x25E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6E4u;
        // 0x25e6e8: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6e4) {
            ctx->pc = 0x25E6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e6c0;
        }
    }
    ctx->pc = 0x25E6ECu;
    // 0x25e6ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x25e6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x25e6f0: 0xa4ca0006  sh          $t2, 0x6($a2)
    ctx->pc = 0x25e6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 10));
    // 0x25e6f4: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x25e6f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25e6f8: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x25e6f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x25e6fc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x25E6FCu;
    {
        const bool branch_taken_0x25e6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6FCu;
        // 0x25e700: 0xa4ca0004  sh          $t2, 0x4($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6fc) {
            ctx->pc = 0x25E680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e680;
        }
    }
    ctx->pc = 0x25E704u;
    // 0x25e704: 0xc09791a  jal         func_25E468
    ctx->pc = 0x25E704u;
    SET_GPR_U32(ctx, 31, 0x25E70Cu);
    ctx->pc = 0x25E708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E704u;
    // 0x25e708: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E468u, 0x25E704u, 0x25E70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E70Cu;
label_25e70c:
    // 0x25e70c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e710: 0x3e00008  jr          $ra
    ctx->pc = 0x25E710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E710u;
        // 0x25e714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E718u;
}
