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

// Function: sub_0033BC60
// Address: 0x33bc60 - 0x33bfd0
void sub_0033BC60_0x33bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BC60_0x33bc60");
#endif

    switch (ctx->pc) {
        case 0x33bc60u: goto label_33bc60;
        case 0x33bc64u: goto label_33bc64;
        case 0x33bc68u: goto label_33bc68;
        case 0x33bc6cu: goto label_33bc6c;
        case 0x33bc70u: goto label_33bc70;
        case 0x33bc74u: goto label_33bc74;
        case 0x33bc78u: goto label_33bc78;
        case 0x33bc7cu: goto label_33bc7c;
        case 0x33bc80u: goto label_33bc80;
        case 0x33bc84u: goto label_33bc84;
        case 0x33bc88u: goto label_33bc88;
        case 0x33bc8cu: goto label_33bc8c;
        case 0x33bc90u: goto label_33bc90;
        case 0x33bc94u: goto label_33bc94;
        case 0x33bc98u: goto label_33bc98;
        case 0x33bc9cu: goto label_33bc9c;
        case 0x33bca0u: goto label_33bca0;
        case 0x33bca4u: goto label_33bca4;
        case 0x33bca8u: goto label_33bca8;
        case 0x33bcacu: goto label_33bcac;
        case 0x33bcb0u: goto label_33bcb0;
        case 0x33bcb4u: goto label_33bcb4;
        case 0x33bcb8u: goto label_33bcb8;
        case 0x33bcbcu: goto label_33bcbc;
        case 0x33bcc0u: goto label_33bcc0;
        case 0x33bcc4u: goto label_33bcc4;
        case 0x33bcc8u: goto label_33bcc8;
        case 0x33bcccu: goto label_33bccc;
        case 0x33bcd0u: goto label_33bcd0;
        case 0x33bcd4u: goto label_33bcd4;
        case 0x33bcd8u: goto label_33bcd8;
        case 0x33bcdcu: goto label_33bcdc;
        case 0x33bce0u: goto label_33bce0;
        case 0x33bce4u: goto label_33bce4;
        case 0x33bce8u: goto label_33bce8;
        case 0x33bcecu: goto label_33bcec;
        case 0x33bcf0u: goto label_33bcf0;
        case 0x33bcf4u: goto label_33bcf4;
        case 0x33bcf8u: goto label_33bcf8;
        case 0x33bcfcu: goto label_33bcfc;
        case 0x33bd00u: goto label_33bd00;
        case 0x33bd04u: goto label_33bd04;
        case 0x33bd08u: goto label_33bd08;
        case 0x33bd0cu: goto label_33bd0c;
        case 0x33bd10u: goto label_33bd10;
        case 0x33bd14u: goto label_33bd14;
        case 0x33bd18u: goto label_33bd18;
        case 0x33bd1cu: goto label_33bd1c;
        case 0x33bd20u: goto label_33bd20;
        case 0x33bd24u: goto label_33bd24;
        case 0x33bd28u: goto label_33bd28;
        case 0x33bd2cu: goto label_33bd2c;
        case 0x33bd30u: goto label_33bd30;
        case 0x33bd34u: goto label_33bd34;
        case 0x33bd38u: goto label_33bd38;
        case 0x33bd3cu: goto label_33bd3c;
        case 0x33bd40u: goto label_33bd40;
        case 0x33bd44u: goto label_33bd44;
        case 0x33bd48u: goto label_33bd48;
        case 0x33bd4cu: goto label_33bd4c;
        case 0x33bd50u: goto label_33bd50;
        case 0x33bd54u: goto label_33bd54;
        case 0x33bd58u: goto label_33bd58;
        case 0x33bd5cu: goto label_33bd5c;
        case 0x33bd60u: goto label_33bd60;
        case 0x33bd64u: goto label_33bd64;
        case 0x33bd68u: goto label_33bd68;
        case 0x33bd6cu: goto label_33bd6c;
        case 0x33bd70u: goto label_33bd70;
        case 0x33bd74u: goto label_33bd74;
        case 0x33bd78u: goto label_33bd78;
        case 0x33bd7cu: goto label_33bd7c;
        case 0x33bd80u: goto label_33bd80;
        case 0x33bd84u: goto label_33bd84;
        case 0x33bd88u: goto label_33bd88;
        case 0x33bd8cu: goto label_33bd8c;
        case 0x33bd90u: goto label_33bd90;
        case 0x33bd94u: goto label_33bd94;
        case 0x33bd98u: goto label_33bd98;
        case 0x33bd9cu: goto label_33bd9c;
        case 0x33bda0u: goto label_33bda0;
        case 0x33bda4u: goto label_33bda4;
        case 0x33bda8u: goto label_33bda8;
        case 0x33bdacu: goto label_33bdac;
        case 0x33bdb0u: goto label_33bdb0;
        case 0x33bdb4u: goto label_33bdb4;
        case 0x33bdb8u: goto label_33bdb8;
        case 0x33bdbcu: goto label_33bdbc;
        case 0x33bdc0u: goto label_33bdc0;
        case 0x33bdc4u: goto label_33bdc4;
        case 0x33bdc8u: goto label_33bdc8;
        case 0x33bdccu: goto label_33bdcc;
        case 0x33bdd0u: goto label_33bdd0;
        case 0x33bdd4u: goto label_33bdd4;
        case 0x33bdd8u: goto label_33bdd8;
        case 0x33bddcu: goto label_33bddc;
        case 0x33bde0u: goto label_33bde0;
        case 0x33bde4u: goto label_33bde4;
        case 0x33bde8u: goto label_33bde8;
        case 0x33bdecu: goto label_33bdec;
        case 0x33bdf0u: goto label_33bdf0;
        case 0x33bdf4u: goto label_33bdf4;
        case 0x33bdf8u: goto label_33bdf8;
        case 0x33bdfcu: goto label_33bdfc;
        case 0x33be00u: goto label_33be00;
        case 0x33be04u: goto label_33be04;
        case 0x33be08u: goto label_33be08;
        case 0x33be0cu: goto label_33be0c;
        case 0x33be10u: goto label_33be10;
        case 0x33be14u: goto label_33be14;
        case 0x33be18u: goto label_33be18;
        case 0x33be1cu: goto label_33be1c;
        case 0x33be20u: goto label_33be20;
        case 0x33be24u: goto label_33be24;
        case 0x33be28u: goto label_33be28;
        case 0x33be2cu: goto label_33be2c;
        case 0x33be30u: goto label_33be30;
        case 0x33be34u: goto label_33be34;
        case 0x33be38u: goto label_33be38;
        case 0x33be3cu: goto label_33be3c;
        case 0x33be40u: goto label_33be40;
        case 0x33be44u: goto label_33be44;
        case 0x33be48u: goto label_33be48;
        case 0x33be4cu: goto label_33be4c;
        case 0x33be50u: goto label_33be50;
        case 0x33be54u: goto label_33be54;
        case 0x33be58u: goto label_33be58;
        case 0x33be5cu: goto label_33be5c;
        case 0x33be60u: goto label_33be60;
        case 0x33be64u: goto label_33be64;
        case 0x33be68u: goto label_33be68;
        case 0x33be6cu: goto label_33be6c;
        case 0x33be70u: goto label_33be70;
        case 0x33be74u: goto label_33be74;
        case 0x33be78u: goto label_33be78;
        case 0x33be7cu: goto label_33be7c;
        case 0x33be80u: goto label_33be80;
        case 0x33be84u: goto label_33be84;
        case 0x33be88u: goto label_33be88;
        case 0x33be8cu: goto label_33be8c;
        case 0x33be90u: goto label_33be90;
        case 0x33be94u: goto label_33be94;
        case 0x33be98u: goto label_33be98;
        case 0x33be9cu: goto label_33be9c;
        case 0x33bea0u: goto label_33bea0;
        case 0x33bea4u: goto label_33bea4;
        case 0x33bea8u: goto label_33bea8;
        case 0x33beacu: goto label_33beac;
        case 0x33beb0u: goto label_33beb0;
        case 0x33beb4u: goto label_33beb4;
        case 0x33beb8u: goto label_33beb8;
        case 0x33bebcu: goto label_33bebc;
        case 0x33bec0u: goto label_33bec0;
        case 0x33bec4u: goto label_33bec4;
        case 0x33bec8u: goto label_33bec8;
        case 0x33beccu: goto label_33becc;
        case 0x33bed0u: goto label_33bed0;
        case 0x33bed4u: goto label_33bed4;
        case 0x33bed8u: goto label_33bed8;
        case 0x33bedcu: goto label_33bedc;
        case 0x33bee0u: goto label_33bee0;
        case 0x33bee4u: goto label_33bee4;
        case 0x33bee8u: goto label_33bee8;
        case 0x33beecu: goto label_33beec;
        case 0x33bef0u: goto label_33bef0;
        case 0x33bef4u: goto label_33bef4;
        case 0x33bef8u: goto label_33bef8;
        case 0x33befcu: goto label_33befc;
        case 0x33bf00u: goto label_33bf00;
        case 0x33bf04u: goto label_33bf04;
        case 0x33bf08u: goto label_33bf08;
        case 0x33bf0cu: goto label_33bf0c;
        case 0x33bf10u: goto label_33bf10;
        case 0x33bf14u: goto label_33bf14;
        case 0x33bf18u: goto label_33bf18;
        case 0x33bf1cu: goto label_33bf1c;
        case 0x33bf20u: goto label_33bf20;
        case 0x33bf24u: goto label_33bf24;
        case 0x33bf28u: goto label_33bf28;
        case 0x33bf2cu: goto label_33bf2c;
        case 0x33bf30u: goto label_33bf30;
        case 0x33bf34u: goto label_33bf34;
        case 0x33bf38u: goto label_33bf38;
        case 0x33bf3cu: goto label_33bf3c;
        case 0x33bf40u: goto label_33bf40;
        case 0x33bf44u: goto label_33bf44;
        case 0x33bf48u: goto label_33bf48;
        case 0x33bf4cu: goto label_33bf4c;
        case 0x33bf50u: goto label_33bf50;
        case 0x33bf54u: goto label_33bf54;
        case 0x33bf58u: goto label_33bf58;
        case 0x33bf5cu: goto label_33bf5c;
        case 0x33bf60u: goto label_33bf60;
        case 0x33bf64u: goto label_33bf64;
        case 0x33bf68u: goto label_33bf68;
        case 0x33bf6cu: goto label_33bf6c;
        case 0x33bf70u: goto label_33bf70;
        case 0x33bf74u: goto label_33bf74;
        case 0x33bf78u: goto label_33bf78;
        case 0x33bf7cu: goto label_33bf7c;
        case 0x33bf80u: goto label_33bf80;
        case 0x33bf84u: goto label_33bf84;
        case 0x33bf88u: goto label_33bf88;
        case 0x33bf8cu: goto label_33bf8c;
        case 0x33bf90u: goto label_33bf90;
        case 0x33bf94u: goto label_33bf94;
        case 0x33bf98u: goto label_33bf98;
        case 0x33bf9cu: goto label_33bf9c;
        case 0x33bfa0u: goto label_33bfa0;
        case 0x33bfa4u: goto label_33bfa4;
        case 0x33bfa8u: goto label_33bfa8;
        case 0x33bfacu: goto label_33bfac;
        case 0x33bfb0u: goto label_33bfb0;
        case 0x33bfb4u: goto label_33bfb4;
        case 0x33bfb8u: goto label_33bfb8;
        case 0x33bfbcu: goto label_33bfbc;
        case 0x33bfc0u: goto label_33bfc0;
        case 0x33bfc4u: goto label_33bfc4;
        case 0x33bfc8u: goto label_33bfc8;
        case 0x33bfccu: goto label_33bfcc;
        default: break;
    }

    ctx->pc = 0x33bc60u;

label_33bc60:
    // 0x33bc60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33bc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33bc64:
    // 0x33bc64: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x33bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_33bc68:
    // 0x33bc68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33bc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_33bc6c:
    // 0x33bc6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33bc6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33bc70:
    // 0x33bc70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33bc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33bc74:
    // 0x33bc74: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x33bc74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33bc78:
    // 0x33bc78: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x33bc78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_33bc7c:
    // 0x33bc7c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_33bc80:
    if (ctx->pc == 0x33BC80u) {
        ctx->pc = 0x33BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC7Cu;
        // 0x33bc80: 0x2c660025  sltiu       $a2, $v1, 0x25 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BC84u;
        goto label_33bc84;
    }
    ctx->pc = 0x33BC7Cu;
    {
        const bool branch_taken_0x33bc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC7Cu;
        // 0x33bc80: 0x2c660025  sltiu       $a2, $v1, 0x25 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bc7c) {
            ctx->pc = 0x33BCF8u;
            goto label_33bcf8;
        }
    }
    ctx->pc = 0x33BC84u;
label_33bc84:
    // 0x33bc84: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_33bc88:
    if (ctx->pc == 0x33BC88u) {
        ctx->pc = 0x33BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC84u;
        // 0x33bc88: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BC8Cu;
        goto label_33bc8c;
    }
    ctx->pc = 0x33BC84u;
    {
        const bool branch_taken_0x33bc84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC84u;
        // 0x33bc88: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bc84) {
            ctx->pc = 0x33BCA0u;
            goto label_33bca0;
        }
    }
    ctx->pc = 0x33BC8Cu;
label_33bc8c:
    // 0x33bc8c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x33bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_33bc90:
    // 0x33bc90: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_33bc94:
    if (ctx->pc == 0x33BC94u) {
        ctx->pc = 0x33BC98u;
        goto label_33bc98;
    }
    ctx->pc = 0x33BC90u;
    {
        const bool branch_taken_0x33bc90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33bc90) {
            ctx->pc = 0x33BCB0u;
            goto label_33bcb0;
        }
    }
    ctx->pc = 0x33BC98u;
label_33bc98:
    // 0x33bc98: 0x10000021  b           . + 4 + (0x21 << 2)
label_33bc9c:
    if (ctx->pc == 0x33BC9Cu) {
        ctx->pc = 0x33BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC98u;
        // 0x33bc9c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BCA0u;
        goto label_33bca0;
    }
    ctx->pc = 0x33BC98u;
    {
        const bool branch_taken_0x33bc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC98u;
        // 0x33bc9c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bc98) {
            ctx->pc = 0x33BD20u;
            goto label_33bd20;
        }
    }
    ctx->pc = 0x33BCA0u;
label_33bca0:
    // 0x33bca0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_33bca4:
    if (ctx->pc == 0x33BCA4u) {
        ctx->pc = 0x33BCA8u;
        goto label_33bca8;
    }
    ctx->pc = 0x33BCA0u;
    {
        const bool branch_taken_0x33bca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33bca0) {
            ctx->pc = 0x33BCC8u;
            goto label_33bcc8;
        }
    }
    ctx->pc = 0x33BCA8u;
label_33bca8:
    // 0x33bca8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_33bcac:
    if (ctx->pc == 0x33BCACu) {
        ctx->pc = 0x33BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCA8u;
        // 0x33bcac: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BCB0u;
        goto label_33bcb0;
    }
    ctx->pc = 0x33BCA8u;
    {
        const bool branch_taken_0x33bca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCA8u;
        // 0x33bcac: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bca8) {
            ctx->pc = 0x33BD20u;
            goto label_33bd20;
        }
    }
    ctx->pc = 0x33BCB0u;
label_33bcb0:
    // 0x33bcb0: 0xc0cee3c  jal         func_33B8F0
label_33bcb4:
    if (ctx->pc == 0x33BCB4u) {
        ctx->pc = 0x33BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCB0u;
        // 0x33bcb4: 0x24e40098  addiu       $a0, $a3, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BCB8u;
        goto label_33bcb8;
    }
    ctx->pc = 0x33BCB0u;
    SET_GPR_U32(ctx, 31, 0x33BCB8u);
    ctx->pc = 0x33BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BCB0u;
    // 0x33bcb4: 0x24e40098  addiu       $a0, $a3, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B8F0u, 0x33BCB0u, 0x33BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BCB8u;
label_33bcb8:
    // 0x33bcb8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x33bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33bcbc:
    // 0x33bcbc: 0x10000006  b           . + 4 + (0x6 << 2)
label_33bcc0:
    if (ctx->pc == 0x33BCC0u) {
        ctx->pc = 0x33BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCBCu;
        // 0x33bcc0: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BCC4u;
        goto label_33bcc4;
    }
    ctx->pc = 0x33BCBCu;
    {
        const bool branch_taken_0x33bcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCBCu;
        // 0x33bcc0: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bcbc) {
            ctx->pc = 0x33BCD8u;
            goto label_33bcd8;
        }
    }
    ctx->pc = 0x33BCC4u;
label_33bcc4:
    // 0x33bcc4: 0x0  nop
    ctx->pc = 0x33bcc4u;
    // NOP
label_33bcc8:
    // 0x33bcc8: 0xc0cee3c  jal         func_33B8F0
label_33bccc:
    if (ctx->pc == 0x33BCCCu) {
        ctx->pc = 0x33BCD0u;
        goto label_33bcd0;
    }
    ctx->pc = 0x33BCC8u;
    SET_GPR_U32(ctx, 31, 0x33BCD0u);
    ctx->pc = 0x33B8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B8F0u, 0x33BCC8u, 0x33BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BCD0u;
label_33bcd0:
    // 0x33bcd0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x33bcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_33bcd4:
    // 0x33bcd4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x33bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33bcd8:
    // 0x33bcd8: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x33bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_33bcdc:
    // 0x33bcdc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33bcdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33bce0:
    // 0x33bce0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33bce4:
    // 0x33bce4: 0x60f809  jalr        $v1
label_33bce8:
    if (ctx->pc == 0x33BCE8u) {
        ctx->pc = 0x33BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCE4u;
        // 0x33bce8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BCECu;
        goto label_33bcec;
    }
    ctx->pc = 0x33BCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33BCECu);
        ctx->pc = 0x33BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCE4u;
        // 0x33bce8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BCE4u, 0x33BCECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33BCECu;
label_33bcec:
    // 0x33bcec: 0x1000000c  b           . + 4 + (0xC << 2)
label_33bcf0:
    if (ctx->pc == 0x33BCF0u) {
        ctx->pc = 0x33BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCECu;
        // 0x33bcf0: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BCF4u;
        goto label_33bcf4;
    }
    ctx->pc = 0x33BCECu;
    {
        const bool branch_taken_0x33bcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCECu;
        // 0x33bcf0: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bcec) {
            ctx->pc = 0x33BD20u;
            goto label_33bd20;
        }
    }
    ctx->pc = 0x33BCF4u;
label_33bcf4:
    // 0x33bcf4: 0x0  nop
    ctx->pc = 0x33bcf4u;
    // NOP
label_33bcf8:
    // 0x33bcf8: 0xc0cee3c  jal         func_33B8F0
label_33bcfc:
    if (ctx->pc == 0x33BCFCu) {
        ctx->pc = 0x33BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCF8u;
        // 0x33bcfc: 0x24e4004c  addiu       $a0, $a3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD00u;
        goto label_33bd00;
    }
    ctx->pc = 0x33BCF8u;
    SET_GPR_U32(ctx, 31, 0x33BD00u);
    ctx->pc = 0x33BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BCF8u;
    // 0x33bcfc: 0x24e4004c  addiu       $a0, $a3, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B8F0u, 0x33BCF8u, 0x33BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD00u;
label_33bd00:
    // 0x33bd00: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x33bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33bd04:
    // 0x33bd04: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x33bd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_33bd08:
    // 0x33bd08: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x33bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_33bd0c:
    // 0x33bd0c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33bd0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33bd10:
    // 0x33bd10: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33bd14:
    // 0x33bd14: 0x60f809  jalr        $v1
label_33bd18:
    if (ctx->pc == 0x33BD18u) {
        ctx->pc = 0x33BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD14u;
        // 0x33bd18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD1Cu;
        goto label_33bd1c;
    }
    ctx->pc = 0x33BD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33BD1Cu);
        ctx->pc = 0x33BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD14u;
        // 0x33bd18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BD14u, 0x33BD1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33BD1Cu;
label_33bd1c:
    // 0x33bd1c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x33bd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_33bd20:
    // 0x33bd20: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x33bd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_33bd24:
    // 0x33bd24: 0xc0cf25c  jal         func_33C970
label_33bd28:
    if (ctx->pc == 0x33BD28u) {
        ctx->pc = 0x33BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD24u;
        // 0x33bd28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD2Cu;
        goto label_33bd2c;
    }
    ctx->pc = 0x33BD24u;
    SET_GPR_U32(ctx, 31, 0x33BD2Cu);
    ctx->pc = 0x33BD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD24u;
    // 0x33bd28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C970u, 0x33BD24u, 0x33BD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD2Cu;
label_33bd2c:
    // 0x33bd2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33bd30:
    // 0x33bd30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x33bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33bd34:
    // 0x33bd34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33bd34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33bd38:
    // 0x33bd38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33bd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33bd3c:
    // 0x33bd3c: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x33bd3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
label_33bd40:
    // 0x33bd40: 0x3e00008  jr          $ra
label_33bd44:
    if (ctx->pc == 0x33BD44u) {
        ctx->pc = 0x33BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD40u;
        // 0x33bd44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD48u;
        goto label_33bd48;
    }
    ctx->pc = 0x33BD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD40u;
        // 0x33bd44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BD48u;
label_33bd48:
    // 0x33bd48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33bd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33bd4c:
    // 0x33bd4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33bd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33bd50:
    // 0x33bd50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33bd50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33bd54:
    // 0x33bd54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33bd58:
    // 0x33bd58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33bd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33bd5c:
    // 0x33bd5c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33bd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33bd60:
    // 0x33bd60: 0xc0cee74  jal         func_33B9D0
label_33bd64:
    if (ctx->pc == 0x33BD64u) {
        ctx->pc = 0x33BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD60u;
        // 0x33bd64: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD68u;
        goto label_33bd68;
    }
    ctx->pc = 0x33BD60u;
    SET_GPR_U32(ctx, 31, 0x33BD68u);
    ctx->pc = 0x33BD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD60u;
    // 0x33bd64: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B9D0u, 0x33BD60u, 0x33BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD68u;
label_33bd68:
    // 0x33bd68: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x33bd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_33bd6c:
    // 0x33bd6c: 0xc0cee74  jal         func_33B9D0
label_33bd70:
    if (ctx->pc == 0x33BD70u) {
        ctx->pc = 0x33BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD6Cu;
        // 0x33bd70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD74u;
        goto label_33bd74;
    }
    ctx->pc = 0x33BD6Cu;
    SET_GPR_U32(ctx, 31, 0x33BD74u);
    ctx->pc = 0x33BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD6Cu;
    // 0x33bd70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B9D0u, 0x33BD6Cu, 0x33BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD74u;
label_33bd74:
    // 0x33bd74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33bd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33bd78:
    // 0x33bd78: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x33bd78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_33bd7c:
    // 0x33bd7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_33bd80:
    if (ctx->pc == 0x33BD80u) {
        ctx->pc = 0x33BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD7Cu;
        // 0x33bd80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD84u;
        goto label_33bd84;
    }
    ctx->pc = 0x33BD7Cu;
    {
        const bool branch_taken_0x33bd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD7Cu;
        // 0x33bd80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bd7c) {
            ctx->pc = 0x33BDA0u;
            goto label_33bda0;
        }
    }
    ctx->pc = 0x33BD84u;
label_33bd84:
    // 0x33bd84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33bd84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33bd88:
    // 0x33bd88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33bd88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33bd8c:
    // 0x33bd8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33bd8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33bd90:
    // 0x33bd90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33bd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33bd94:
    // 0x33bd94: 0x80cef6e  j           func_33BDB8
label_33bd98:
    if (ctx->pc == 0x33BD98u) {
        ctx->pc = 0x33BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD94u;
        // 0x33bd98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD9Cu;
        goto label_33bd9c;
    }
    ctx->pc = 0x33BD94u;
    ctx->pc = 0x33BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD94u;
    // 0x33bd98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BDB8u;
    goto label_33bdb8;
    ctx->pc = 0x33BD9Cu;
label_33bd9c:
    // 0x33bd9c: 0x0  nop
    ctx->pc = 0x33bd9cu;
    // NOP
label_33bda0:
    // 0x33bda0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33bda0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33bda4:
    // 0x33bda4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33bda4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33bda8:
    // 0x33bda8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33bda8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33bdac:
    // 0x33bdac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33bdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33bdb0:
    // 0x33bdb0: 0x80cef94  j           func_33BE50
label_33bdb4:
    if (ctx->pc == 0x33BDB4u) {
        ctx->pc = 0x33BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDB0u;
        // 0x33bdb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BDB8u;
        goto label_33bdb8;
    }
    ctx->pc = 0x33BDB0u;
    ctx->pc = 0x33BDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BDB0u;
    // 0x33bdb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BE50u;
    goto label_33be50;
    ctx->pc = 0x33BDB8u;
label_33bdb8:
    // 0x33bdb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33bdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33bdbc:
    // 0x33bdbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33bdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33bdc0:
    // 0x33bdc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33bdc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33bdc4:
    // 0x33bdc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33bdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33bdc8:
    // 0x33bdc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33bdcc:
    // 0x33bdcc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33bdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33bdd0:
    // 0x33bdd0: 0xc0ced72  jal         func_33B5C8
label_33bdd4:
    if (ctx->pc == 0x33BDD4u) {
        ctx->pc = 0x33BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDD0u;
        // 0x33bdd4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BDD8u;
        goto label_33bdd8;
    }
    ctx->pc = 0x33BDD0u;
    SET_GPR_U32(ctx, 31, 0x33BDD8u);
    ctx->pc = 0x33BDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BDD0u;
    // 0x33bdd4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B5C8u, 0x33BDD0u, 0x33BDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BDD8u;
label_33bdd8:
    // 0x33bdd8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_33bddc:
    if (ctx->pc == 0x33BDDCu) {
        ctx->pc = 0x33BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDD8u;
        // 0x33bddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BDE0u;
        goto label_33bde0;
    }
    ctx->pc = 0x33BDD8u;
    {
        const bool branch_taken_0x33bdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDD8u;
        // 0x33bddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bdd8) {
            ctx->pc = 0x33BE34u;
            goto label_33be34;
        }
    }
    ctx->pc = 0x33BDE0u;
label_33bde0:
    // 0x33bde0: 0xc0cee94  jal         func_33BA50
label_33bde4:
    if (ctx->pc == 0x33BDE4u) {
        ctx->pc = 0x33BDE8u;
        goto label_33bde8;
    }
    ctx->pc = 0x33BDE0u;
    SET_GPR_U32(ctx, 31, 0x33BDE8u);
    ctx->pc = 0x33BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA50u, 0x33BDE0u, 0x33BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BDE8u;
label_33bde8:
    // 0x33bde8: 0x26240098  addiu       $a0, $s1, 0x98
    ctx->pc = 0x33bde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_33bdec:
    // 0x33bdec: 0xc0cee82  jal         func_33BA08
label_33bdf0:
    if (ctx->pc == 0x33BDF0u) {
        ctx->pc = 0x33BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDECu;
        // 0x33bdf0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BDF4u;
        goto label_33bdf4;
    }
    ctx->pc = 0x33BDECu;
    SET_GPR_U32(ctx, 31, 0x33BDF4u);
    ctx->pc = 0x33BDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BDECu;
    // 0x33bdf0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA08u, 0x33BDECu, 0x33BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BDF4u;
label_33bdf4:
    // 0x33bdf4: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x33bdf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_33bdf8:
    // 0x33bdf8: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x33bdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_33bdfc:
    // 0x33bdfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_33be00:
    if (ctx->pc == 0x33BE00u) {
        ctx->pc = 0x33BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDFCu;
        // 0x33be00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BE04u;
        goto label_33be04;
    }
    ctx->pc = 0x33BDFCu;
    {
        const bool branch_taken_0x33bdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDFCu;
        // 0x33be00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bdfc) {
            ctx->pc = 0x33BE18u;
            goto label_33be18;
        }
    }
    ctx->pc = 0x33BE04u;
label_33be04:
    // 0x33be04: 0xc0cee3c  jal         func_33B8F0
label_33be08:
    if (ctx->pc == 0x33BE08u) {
        ctx->pc = 0x33BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE04u;
        // 0x33be08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BE0Cu;
        goto label_33be0c;
    }
    ctx->pc = 0x33BE04u;
    SET_GPR_U32(ctx, 31, 0x33BE0Cu);
    ctx->pc = 0x33BE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE04u;
    // 0x33be08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B8F0u, 0x33BE04u, 0x33BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE0Cu;
label_33be0c:
    // 0x33be0c: 0x10000009  b           . + 4 + (0x9 << 2)
label_33be10:
    if (ctx->pc == 0x33BE10u) {
        ctx->pc = 0x33BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE0Cu;
        // 0x33be10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BE14u;
        goto label_33be14;
    }
    ctx->pc = 0x33BE0Cu;
    {
        const bool branch_taken_0x33be0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE0Cu;
        // 0x33be10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33be0c) {
            ctx->pc = 0x33BE34u;
            goto label_33be34;
        }
    }
    ctx->pc = 0x33BE14u;
label_33be14:
    // 0x33be14: 0x0  nop
    ctx->pc = 0x33be14u;
    // NOP
label_33be18:
    // 0x33be18: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x33be18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_33be1c:
    // 0x33be1c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x33be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_33be20:
    // 0x33be20: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33be20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33be24:
    // 0x33be24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33be24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33be28:
    // 0x33be28: 0x60f809  jalr        $v1
label_33be2c:
    if (ctx->pc == 0x33BE2Cu) {
        ctx->pc = 0x33BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE28u;
        // 0x33be2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BE30u;
        goto label_33be30;
    }
    ctx->pc = 0x33BE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33BE30u);
        ctx->pc = 0x33BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE28u;
        // 0x33be2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BE28u, 0x33BE30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33BE30u;
label_33be30:
    // 0x33be30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33be34:
    // 0x33be34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33be34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33be38:
    // 0x33be38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33be38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33be3c:
    // 0x33be3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33be3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33be40:
    // 0x33be40: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33be40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33be44:
    // 0x33be44: 0x3e00008  jr          $ra
label_33be48:
    if (ctx->pc == 0x33BE48u) {
        ctx->pc = 0x33BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE44u;
        // 0x33be48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BE4Cu;
        goto label_33be4c;
    }
    ctx->pc = 0x33BE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE44u;
        // 0x33be48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BE4Cu;
label_33be4c:
    // 0x33be4c: 0x0  nop
    ctx->pc = 0x33be4cu;
    // NOP
label_33be50:
    // 0x33be50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33be54:
    // 0x33be54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33be54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_33be58:
    // 0x33be58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33be58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33be5c:
    // 0x33be5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33be5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33be60:
    // 0x33be60: 0x2671004c  addiu       $s1, $s3, 0x4C
    ctx->pc = 0x33be60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
label_33be64:
    // 0x33be64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33be64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33be68:
    // 0x33be68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33be68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33be6c:
    // 0x33be6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33be6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33be70:
    // 0x33be70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33be70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33be74:
    // 0x33be74: 0xc0ced72  jal         func_33B5C8
label_33be78:
    if (ctx->pc == 0x33BE78u) {
        ctx->pc = 0x33BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE74u;
        // 0x33be78: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BE7Cu;
        goto label_33be7c;
    }
    ctx->pc = 0x33BE74u;
    SET_GPR_U32(ctx, 31, 0x33BE7Cu);
    ctx->pc = 0x33BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE74u;
    // 0x33be78: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B5C8u, 0x33BE74u, 0x33BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE7Cu;
label_33be7c:
    // 0x33be7c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_33be80:
    if (ctx->pc == 0x33BE80u) {
        ctx->pc = 0x33BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE7Cu;
        // 0x33be80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BE84u;
        goto label_33be84;
    }
    ctx->pc = 0x33BE7Cu;
    {
        const bool branch_taken_0x33be7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE7Cu;
        // 0x33be80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33be7c) {
            ctx->pc = 0x33BED4u;
            goto label_33bed4;
        }
    }
    ctx->pc = 0x33BE84u;
label_33be84:
    // 0x33be84: 0xc0cee94  jal         func_33BA50
label_33be88:
    if (ctx->pc == 0x33BE88u) {
        ctx->pc = 0x33BE8Cu;
        goto label_33be8c;
    }
    ctx->pc = 0x33BE84u;
    SET_GPR_U32(ctx, 31, 0x33BE8Cu);
    ctx->pc = 0x33BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA50u, 0x33BE84u, 0x33BE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE8Cu;
label_33be8c:
    // 0x33be8c: 0x26640098  addiu       $a0, $s3, 0x98
    ctx->pc = 0x33be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 152));
label_33be90:
    // 0x33be90: 0xc0cee82  jal         func_33BA08
label_33be94:
    if (ctx->pc == 0x33BE94u) {
        ctx->pc = 0x33BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE90u;
        // 0x33be94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BE98u;
        goto label_33be98;
    }
    ctx->pc = 0x33BE90u;
    SET_GPR_U32(ctx, 31, 0x33BE98u);
    ctx->pc = 0x33BE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE90u;
    // 0x33be94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA08u, 0x33BE90u, 0x33BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE98u;
label_33be98:
    // 0x33be98: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x33be98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_33be9c:
    // 0x33be9c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x33be9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_33bea0:
    // 0x33bea0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_33bea4:
    if (ctx->pc == 0x33BEA4u) {
        ctx->pc = 0x33BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BEA0u;
        // 0x33bea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BEA8u;
        goto label_33bea8;
    }
    ctx->pc = 0x33BEA0u;
    {
        const bool branch_taken_0x33bea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BEA0u;
        // 0x33bea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bea0) {
            ctx->pc = 0x33BEB8u;
            goto label_33beb8;
        }
    }
    ctx->pc = 0x33BEA8u;
label_33bea8:
    // 0x33bea8: 0xc0cee3c  jal         func_33B8F0
label_33beac:
    if (ctx->pc == 0x33BEACu) {
        ctx->pc = 0x33BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BEA8u;
        // 0x33beac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BEB0u;
        goto label_33beb0;
    }
    ctx->pc = 0x33BEA8u;
    SET_GPR_U32(ctx, 31, 0x33BEB0u);
    ctx->pc = 0x33BEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BEA8u;
    // 0x33beac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B8F0u, 0x33BEA8u, 0x33BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BEB0u;
label_33beb0:
    // 0x33beb0: 0x10000008  b           . + 4 + (0x8 << 2)
label_33beb4:
    if (ctx->pc == 0x33BEB4u) {
        ctx->pc = 0x33BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BEB0u;
        // 0x33beb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BEB8u;
        goto label_33beb8;
    }
    ctx->pc = 0x33BEB0u;
    {
        const bool branch_taken_0x33beb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BEB0u;
        // 0x33beb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33beb0) {
            ctx->pc = 0x33BED4u;
            goto label_33bed4;
        }
    }
    ctx->pc = 0x33BEB8u;
label_33beb8:
    // 0x33beb8: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x33beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_33bebc:
    // 0x33bebc: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x33bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_33bec0:
    // 0x33bec0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33bec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33bec4:
    // 0x33bec4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33bec8:
    // 0x33bec8: 0x60f809  jalr        $v1
label_33becc:
    if (ctx->pc == 0x33BECCu) {
        ctx->pc = 0x33BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BEC8u;
        // 0x33becc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BED0u;
        goto label_33bed0;
    }
    ctx->pc = 0x33BEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33BED0u);
        ctx->pc = 0x33BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BEC8u;
        // 0x33becc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BEC8u, 0x33BED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33BED0u;
label_33bed0:
    // 0x33bed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bed4:
    // 0x33bed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33bed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33bed8:
    // 0x33bed8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33bed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33bedc:
    // 0x33bedc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33bedcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33bee0:
    // 0x33bee0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33bee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33bee4:
    // 0x33bee4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33bee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33bee8:
    // 0x33bee8: 0x3e00008  jr          $ra
label_33beec:
    if (ctx->pc == 0x33BEECu) {
        ctx->pc = 0x33BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BEE8u;
        // 0x33beec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BEF0u;
        goto label_33bef0;
    }
    ctx->pc = 0x33BEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BEE8u;
        // 0x33beec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BEF0u;
label_33bef0:
    // 0x33bef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33bef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33bef4:
    // 0x33bef4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33bef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33bef8:
    // 0x33bef8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33bef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33befc:
    // 0x33befc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33befcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33bf00:
    // 0x33bf00: 0x26320098  addiu       $s2, $s1, 0x98
    ctx->pc = 0x33bf00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_33bf04:
    // 0x33bf04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33bf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33bf08:
    // 0x33bf08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33bf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_33bf0c:
    // 0x33bf0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33bf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_33bf10:
    // 0x33bf10: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x33bf10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33bf14:
    // 0x33bf14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33bf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33bf18:
    // 0x33bf18: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x33bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_33bf1c:
    // 0x33bf1c: 0xc0cedd8  jal         func_33B760
label_33bf20:
    if (ctx->pc == 0x33BF20u) {
        ctx->pc = 0x33BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF1Cu;
        // 0x33bf20: 0x2633004c  addiu       $s3, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BF24u;
        goto label_33bf24;
    }
    ctx->pc = 0x33BF1Cu;
    SET_GPR_U32(ctx, 31, 0x33BF24u);
    ctx->pc = 0x33BF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BF1Cu;
    // 0x33bf20: 0x2633004c  addiu       $s3, $s1, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B760u, 0x33BF1Cu, 0x33BF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF24u;
label_33bf24:
    // 0x33bf24: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_33bf28:
    if (ctx->pc == 0x33BF28u) {
        ctx->pc = 0x33BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF24u;
        // 0x33bf28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BF2Cu;
        goto label_33bf2c;
    }
    ctx->pc = 0x33BF24u;
    {
        const bool branch_taken_0x33bf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF24u;
        // 0x33bf28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bf24) {
            ctx->pc = 0x33BFB0u;
            goto label_33bfb0;
        }
    }
    ctx->pc = 0x33BF2Cu;
label_33bf2c:
    // 0x33bf2c: 0xc0cee94  jal         func_33BA50
label_33bf30:
    if (ctx->pc == 0x33BF30u) {
        ctx->pc = 0x33BF34u;
        goto label_33bf34;
    }
    ctx->pc = 0x33BF2Cu;
    SET_GPR_U32(ctx, 31, 0x33BF34u);
    ctx->pc = 0x33BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA50u, 0x33BF2Cu, 0x33BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF34u;
label_33bf34:
    // 0x33bf34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33bf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33bf38:
    // 0x33bf38: 0xc0cee94  jal         func_33BA50
label_33bf3c:
    if (ctx->pc == 0x33BF3Cu) {
        ctx->pc = 0x33BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF38u;
        // 0x33bf3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BF40u;
        goto label_33bf40;
    }
    ctx->pc = 0x33BF38u;
    SET_GPR_U32(ctx, 31, 0x33BF40u);
    ctx->pc = 0x33BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BF38u;
    // 0x33bf3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA50u, 0x33BF38u, 0x33BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF40u;
label_33bf40:
    // 0x33bf40: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x33bf40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_33bf44:
    // 0x33bf44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_33bf48:
    if (ctx->pc == 0x33BF48u) {
        ctx->pc = 0x33BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF44u;
        // 0x33bf48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BF4Cu;
        goto label_33bf4c;
    }
    ctx->pc = 0x33BF44u;
    {
        const bool branch_taken_0x33bf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF44u;
        // 0x33bf48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bf44) {
            ctx->pc = 0x33BF60u;
            goto label_33bf60;
        }
    }
    ctx->pc = 0x33BF4Cu;
label_33bf4c:
    // 0x33bf4c: 0xc0cee94  jal         func_33BA50
label_33bf50:
    if (ctx->pc == 0x33BF50u) {
        ctx->pc = 0x33BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF4Cu;
        // 0x33bf50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BF54u;
        goto label_33bf54;
    }
    ctx->pc = 0x33BF4Cu;
    SET_GPR_U32(ctx, 31, 0x33BF54u);
    ctx->pc = 0x33BF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BF4Cu;
    // 0x33bf50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA50u, 0x33BF4Cu, 0x33BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF54u;
label_33bf54:
    // 0x33bf54: 0x10000005  b           . + 4 + (0x5 << 2)
label_33bf58:
    if (ctx->pc == 0x33BF58u) {
        ctx->pc = 0x33BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF54u;
        // 0x33bf58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BF5Cu;
        goto label_33bf5c;
    }
    ctx->pc = 0x33BF54u;
    {
        const bool branch_taken_0x33bf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF54u;
        // 0x33bf58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bf54) {
            ctx->pc = 0x33BF6Cu;
            goto label_33bf6c;
        }
    }
    ctx->pc = 0x33BF5Cu;
label_33bf5c:
    // 0x33bf5c: 0x0  nop
    ctx->pc = 0x33bf5cu;
    // NOP
label_33bf60:
    // 0x33bf60: 0xc0cee94  jal         func_33BA50
label_33bf64:
    if (ctx->pc == 0x33BF64u) {
        ctx->pc = 0x33BF68u;
        goto label_33bf68;
    }
    ctx->pc = 0x33BF60u;
    SET_GPR_U32(ctx, 31, 0x33BF68u);
    ctx->pc = 0x33BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA50u, 0x33BF60u, 0x33BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF68u;
label_33bf68:
    // 0x33bf68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33bf68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33bf6c:
    // 0x33bf6c: 0xc0cee82  jal         func_33BA08
label_33bf70:
    if (ctx->pc == 0x33BF70u) {
        ctx->pc = 0x33BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF6Cu;
        // 0x33bf70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BF74u;
        goto label_33bf74;
    }
    ctx->pc = 0x33BF6Cu;
    SET_GPR_U32(ctx, 31, 0x33BF74u);
    ctx->pc = 0x33BF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BF6Cu;
    // 0x33bf70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA08u, 0x33BF6Cu, 0x33BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF74u;
label_33bf74:
    // 0x33bf74: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x33bf74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_33bf78:
    // 0x33bf78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_33bf7c:
    if (ctx->pc == 0x33BF7Cu) {
        ctx->pc = 0x33BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF78u;
        // 0x33bf7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BF80u;
        goto label_33bf80;
    }
    ctx->pc = 0x33BF78u;
    {
        const bool branch_taken_0x33bf78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF78u;
        // 0x33bf7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bf78) {
            ctx->pc = 0x33BF90u;
            goto label_33bf90;
        }
    }
    ctx->pc = 0x33BF80u;
label_33bf80:
    // 0x33bf80: 0xc0cee3c  jal         func_33B8F0
label_33bf84:
    if (ctx->pc == 0x33BF84u) {
        ctx->pc = 0x33BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF80u;
        // 0x33bf84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BF88u;
        goto label_33bf88;
    }
    ctx->pc = 0x33BF80u;
    SET_GPR_U32(ctx, 31, 0x33BF88u);
    ctx->pc = 0x33BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BF80u;
    // 0x33bf84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B8F0u, 0x33BF80u, 0x33BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF88u;
label_33bf88:
    // 0x33bf88: 0x10000009  b           . + 4 + (0x9 << 2)
label_33bf8c:
    if (ctx->pc == 0x33BF8Cu) {
        ctx->pc = 0x33BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF88u;
        // 0x33bf8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BF90u;
        goto label_33bf90;
    }
    ctx->pc = 0x33BF88u;
    {
        const bool branch_taken_0x33bf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF88u;
        // 0x33bf8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bf88) {
            ctx->pc = 0x33BFB0u;
            goto label_33bfb0;
        }
    }
    ctx->pc = 0x33BF90u;
label_33bf90:
    // 0x33bf90: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x33bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_33bf94:
    // 0x33bf94: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x33bf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_33bf98:
    // 0x33bf98: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x33bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_33bf9c:
    // 0x33bf9c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33bf9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33bfa0:
    // 0x33bfa0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33bfa4:
    // 0x33bfa4: 0x60f809  jalr        $v1
label_33bfa8:
    if (ctx->pc == 0x33BFA8u) {
        ctx->pc = 0x33BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFA4u;
        // 0x33bfa8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BFACu;
        goto label_33bfac;
    }
    ctx->pc = 0x33BFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33BFACu);
        ctx->pc = 0x33BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFA4u;
        // 0x33bfa8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BFA4u, 0x33BFACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33BFACu;
label_33bfac:
    // 0x33bfac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bfb0:
    // 0x33bfb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33bfb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33bfb4:
    // 0x33bfb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33bfb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33bfb8:
    // 0x33bfb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33bfb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33bfbc:
    // 0x33bfbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33bfbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33bfc0:
    // 0x33bfc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33bfc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33bfc4:
    // 0x33bfc4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x33bfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_33bfc8:
    // 0x33bfc8: 0x3e00008  jr          $ra
label_33bfcc:
    if (ctx->pc == 0x33BFCCu) {
        ctx->pc = 0x33BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFC8u;
        // 0x33bfcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BFD0u;
        goto label_fallthrough_0x33bfc8;
    }
    ctx->pc = 0x33BFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFC8u;
        // 0x33bfcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33bfc8:
    ctx->pc = 0x33BFD0u;
}
