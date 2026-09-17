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

// Function: sub_0024AA50
// Address: 0x24aa50 - 0x24aac8
void sub_0024AA50_0x24aa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AA50_0x24aa50");
#endif

    switch (ctx->pc) {
        case 0x24aa50u: goto label_24aa50;
        case 0x24aa54u: goto label_24aa54;
        case 0x24aa58u: goto label_24aa58;
        case 0x24aa5cu: goto label_24aa5c;
        case 0x24aa60u: goto label_24aa60;
        case 0x24aa64u: goto label_24aa64;
        case 0x24aa68u: goto label_24aa68;
        case 0x24aa6cu: goto label_24aa6c;
        case 0x24aa70u: goto label_24aa70;
        case 0x24aa74u: goto label_24aa74;
        case 0x24aa78u: goto label_24aa78;
        case 0x24aa7cu: goto label_24aa7c;
        case 0x24aa80u: goto label_24aa80;
        case 0x24aa84u: goto label_24aa84;
        case 0x24aa88u: goto label_24aa88;
        case 0x24aa8cu: goto label_24aa8c;
        case 0x24aa90u: goto label_24aa90;
        case 0x24aa94u: goto label_24aa94;
        case 0x24aa98u: goto label_24aa98;
        case 0x24aa9cu: goto label_24aa9c;
        case 0x24aaa0u: goto label_24aaa0;
        case 0x24aaa4u: goto label_24aaa4;
        case 0x24aaa8u: goto label_24aaa8;
        case 0x24aaacu: goto label_24aaac;
        case 0x24aab0u: goto label_24aab0;
        case 0x24aab4u: goto label_24aab4;
        case 0x24aab8u: goto label_24aab8;
        case 0x24aabcu: goto label_24aabc;
        case 0x24aac0u: goto label_24aac0;
        case 0x24aac4u: goto label_24aac4;
        default: break;
    }

    ctx->pc = 0x24aa50u;

label_24aa50:
    // 0x24aa50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24aa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24aa54:
    // 0x24aa54: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x24aa54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24aa58:
    // 0x24aa58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24aa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24aa5c:
    // 0x24aa5c: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_24aa60:
    if (ctx->pc == 0x24AA60u) {
        ctx->pc = 0x24AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA5Cu;
        // 0x24aa60: 0x61b03  sra         $v1, $a2, 12 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AA64u;
        goto label_24aa64;
    }
    ctx->pc = 0x24AA5Cu;
    {
        const bool branch_taken_0x24aa5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA5Cu;
        // 0x24aa60: 0x61b03  sra         $v1, $a2, 12 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa5c) {
            ctx->pc = 0x24AA80u;
            goto label_24aa80;
        }
    }
    ctx->pc = 0x24AA64u;
label_24aa64:
    // 0x24aa64: 0x4e0004c  bltz        $a3, . + 4 + (0x4C << 2)
label_24aa68:
    if (ctx->pc == 0x24AA68u) {
        ctx->pc = 0x24AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA64u;
        // 0x24aa68: 0x28e20003  slti        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AA6Cu;
        goto label_24aa6c;
    }
    ctx->pc = 0x24AA64u;
    {
        const bool branch_taken_0x24aa64 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x24AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA64u;
        // 0x24aa68: 0x28e20003  slti        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa64) {
            ctx->pc = 0x24AB98u;
            return;
        }
    }
    ctx->pc = 0x24AA6Cu;
label_24aa6c:
    // 0x24aa6c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_24aa70:
    if (ctx->pc == 0x24AA70u) {
        ctx->pc = 0x24AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA6Cu;
        // 0x24aa70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AA74u;
        goto label_24aa74;
    }
    ctx->pc = 0x24AA6Cu;
    {
        const bool branch_taken_0x24aa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA6Cu;
        // 0x24aa70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa6c) {
            ctx->pc = 0x24AB9Cu;
            return;
        }
    }
    ctx->pc = 0x24AA74u;
label_24aa74:
    // 0x24aa74: 0x1000000c  b           . + 4 + (0xC << 2)
label_24aa78:
    if (ctx->pc == 0x24AA78u) {
        ctx->pc = 0x24AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA74u;
        // 0x24aa78: 0x2c62000c  sltiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AA7Cu;
        goto label_24aa7c;
    }
    ctx->pc = 0x24AA74u;
    {
        const bool branch_taken_0x24aa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA74u;
        // 0x24aa78: 0x2c62000c  sltiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa74) {
            ctx->pc = 0x24AAA8u;
            goto label_24aaa8;
        }
    }
    ctx->pc = 0x24AA7Cu;
label_24aa7c:
    // 0x24aa7c: 0x0  nop
    ctx->pc = 0x24aa7cu;
    // NOP
label_24aa80:
    // 0x24aa80: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
label_24aa84:
    if (ctx->pc == 0x24AA84u) {
        ctx->pc = 0x24AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA80u;
        // 0x24aa84: 0x30c50fff  andi        $a1, $a2, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AA88u;
        goto label_24aa88;
    }
    ctx->pc = 0x24AA80u;
    {
        const bool branch_taken_0x24aa80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA80u;
        // 0x24aa84: 0x30c50fff  andi        $a1, $a2, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa80) {
            ctx->pc = 0x24AB98u;
            return;
        }
    }
    ctx->pc = 0x24AA88u;
label_24aa88:
    // 0x24aa88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24aa88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24aa8c:
    // 0x24aa8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24aa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24aa90:
    // 0x24aa90: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24aa90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24aa94:
    // 0x24aa94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24aa94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24aa98:
    // 0x24aa98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24aa98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24aa9c:
    // 0x24aa9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24aa9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24aaa0:
    // 0x24aaa0: 0x809289a  j           func_24A268
label_24aaa4:
    if (ctx->pc == 0x24AAA4u) {
        ctx->pc = 0x24AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAA0u;
        // 0x24aaa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AAA8u;
        goto label_24aaa8;
    }
    ctx->pc = 0x24AAA0u;
    ctx->pc = 0x24AAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AAA0u;
    // 0x24aaa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A268u;
    sub_0024A268_0x24a268(rdram, ctx, runtime); return;
    ctx->pc = 0x24AAA8u;
label_24aaa8:
    // 0x24aaa8: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_24aaac:
    if (ctx->pc == 0x24AAACu) {
        ctx->pc = 0x24AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAA8u;
        // 0x24aaac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AAB0u;
        goto label_24aab0;
    }
    ctx->pc = 0x24AAA8u;
    {
        const bool branch_taken_0x24aaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAA8u;
        // 0x24aaac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aaa8) {
            ctx->pc = 0x24AB9Cu;
            return;
        }
    }
    ctx->pc = 0x24AAB0u;
label_24aab0:
    // 0x24aab0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x24aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24aab4:
    // 0x24aab4: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x24aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_24aab8:
    // 0x24aab8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24aabc:
    // 0x24aabc: 0x8c6315b0  lw          $v1, 0x15B0($v1)
    ctx->pc = 0x24aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5552)));
label_24aac0:
    // 0x24aac0: 0x600008  jr          $v1
label_24aac4:
    if (ctx->pc == 0x24AAC4u) {
        ctx->pc = 0x24AAC8u;
        goto label_fallthrough_0x24aac0;
    }
    ctx->pc = 0x24AAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AAC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x24aac0:
    ctx->pc = 0x24AAC8u;
}
