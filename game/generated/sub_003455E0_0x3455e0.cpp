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

// Function: sub_003455E0
// Address: 0x3455e0 - 0x345758
void sub_003455E0_0x3455e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003455E0_0x3455e0");
#endif

    ctx->pc = 0x3455e0u;

    // 0x3455e0: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x3455e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3455e4: 0x3402824e  ori         $v0, $zero, 0x824E
    ctx->pc = 0x3455e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33358);
    // 0x3455e8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3455e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3455ec: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3455ECu;
    {
        const bool branch_taken_0x3455ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3455ec) {
            ctx->pc = 0x3455F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3455ECu;
            // 0x3455f0: 0x3402825f  ori         $v0, $zero, 0x825F (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33375);
            ctx->in_delay_slot = false;
            ctx->pc = 0x345628u;
            goto label_345628;
        }
    }
    ctx->pc = 0x3455F4u;
    // 0x3455f4: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x3455f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3455f8: 0x521c2  srl         $a0, $a1, 7
    ctx->pc = 0x3455f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x3455fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3455fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x345600: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x345600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x345604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x345604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345608: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x345608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34560c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x34560cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x345610: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x345610u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345614: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x345614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x345618: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x345618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34561c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x34561cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x345620: 0x3e00008  jr          $ra
    ctx->pc = 0x345620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345620u;
        // 0x345624: 0x2442a104  addiu       $v0, $v0, -0x5EFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942980));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345628u;
label_345628:
    // 0x345628: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x345628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x34562c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x34562Cu;
    {
        const bool branch_taken_0x34562c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34562c) {
            ctx->pc = 0x345630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34562Cu;
            // 0x345630: 0x34028280  ori         $v0, $zero, 0x8280 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33408);
            ctx->in_delay_slot = false;
            ctx->pc = 0x345668u;
            goto label_345668;
        }
    }
    ctx->pc = 0x345634u;
    // 0x345634: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x345634u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x345638: 0x521c2  srl         $a0, $a1, 7
    ctx->pc = 0x345638u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x34563c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x34563cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x345640: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x345640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x345644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x345644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345648: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x345648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34564c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x34564cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x345650: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x345650u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345654: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x345654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x345658: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x345658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34565c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x34565cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x345660: 0x3e00008  jr          $ra
    ctx->pc = 0x345660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345660u;
        // 0x345664: 0x2442a0cc  addiu       $v0, $v0, -0x5F34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942924));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345668u;
label_345668:
    // 0x345668: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x345668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x34566c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x34566Cu;
    {
        const bool branch_taken_0x34566c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34566c) {
            ctx->pc = 0x345670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34566Cu;
            // 0x345670: 0x3402829e  ori         $v0, $zero, 0x829E (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33438);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3456A8u;
            goto label_3456a8;
        }
    }
    ctx->pc = 0x345674u;
    // 0x345674: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x345674u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x345678: 0x521c2  srl         $a0, $a1, 7
    ctx->pc = 0x345678u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x34567c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x34567cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x345680: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x345680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x345684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x345684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345688: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x345688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34568c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x34568cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x345690: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x345690u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345694: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x345694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x345698: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x345698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34569c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x34569cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3456a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3456A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3456A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456A0u;
        // 0x3456a4: 0x2442a0c5  addiu       $v0, $v0, -0x5F3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942917));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3456A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3456A8u;
label_3456a8:
    // 0x3456a8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3456a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3456ac: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3456ACu;
    {
        const bool branch_taken_0x3456ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3456ac) {
            ctx->pc = 0x3456B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3456ACu;
            // 0x3456b0: 0x3402833f  ori         $v0, $zero, 0x833F (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33599);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3456E8u;
            goto label_3456e8;
        }
    }
    ctx->pc = 0x3456B4u;
    // 0x3456b4: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x3456b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3456b8: 0x521c2  srl         $a0, $a1, 7
    ctx->pc = 0x3456b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x3456bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3456bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3456c0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3456c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3456c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3456c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3456c8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3456c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3456cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3456ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3456d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3456d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3456d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3456d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3456d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3456d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3456dc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3456dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3456e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3456E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3456E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456E0u;
        // 0x3456e4: 0x2442a0bf  addiu       $v0, $v0, -0x5F41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942911));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3456E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3456E8u;
label_3456e8:
    // 0x3456e8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3456e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3456ec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3456ECu;
    {
        const bool branch_taken_0x3456ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3456F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456ECu;
        // 0x3456f0: 0x51a02  srl         $v1, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3456ec) {
            ctx->pc = 0x345728u;
            goto label_345728;
        }
    }
    ctx->pc = 0x3456F4u;
    // 0x3456f4: 0x521c2  srl         $a0, $a1, 7
    ctx->pc = 0x3456f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x3456f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3456f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3456fc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3456fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x345700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x345700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345704: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x345704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x345708: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x345708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x34570c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x34570cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345710: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x345710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x345714: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x345714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x345718: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x345718u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34571c: 0x3e00008  jr          $ra
    ctx->pc = 0x34571Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34571Cu;
        // 0x345720: 0x2442a0bb  addiu       $v0, $v0, -0x5F45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942907));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34571Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345724u;
    // 0x345724: 0x0  nop
    ctx->pc = 0x345724u;
    // NOP
label_345728:
    // 0x345728: 0x521c2  srl         $a0, $a1, 7
    ctx->pc = 0x345728u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x34572c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x34572cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x345730: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x345730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x345734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x345734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345738: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x345738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34573c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x34573cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x345740: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x345740u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345744: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x345744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x345748: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x345748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34574c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x34574cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x345750: 0x3e00008  jr          $ra
    ctx->pc = 0x345750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345750u;
        // 0x345754: 0x2442a0b0  addiu       $v0, $v0, -0x5F50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942896));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345758u;
}
