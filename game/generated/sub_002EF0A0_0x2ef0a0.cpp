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

// Function: sub_002EF0A0
// Address: 0x2ef0a0 - 0x2ef198
void sub_002EF0A0_0x2ef0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF0A0_0x2ef0a0");
#endif

    switch (ctx->pc) {
        case 0x2ef0a0u: goto label_2ef0a0;
        case 0x2ef0a4u: goto label_2ef0a4;
        case 0x2ef0a8u: goto label_2ef0a8;
        case 0x2ef0acu: goto label_2ef0ac;
        case 0x2ef0b0u: goto label_2ef0b0;
        case 0x2ef0b4u: goto label_2ef0b4;
        case 0x2ef0b8u: goto label_2ef0b8;
        case 0x2ef0bcu: goto label_2ef0bc;
        case 0x2ef0c0u: goto label_2ef0c0;
        case 0x2ef0c4u: goto label_2ef0c4;
        case 0x2ef0c8u: goto label_2ef0c8;
        case 0x2ef0ccu: goto label_2ef0cc;
        case 0x2ef0d0u: goto label_2ef0d0;
        case 0x2ef0d4u: goto label_2ef0d4;
        case 0x2ef0d8u: goto label_2ef0d8;
        case 0x2ef0dcu: goto label_2ef0dc;
        case 0x2ef0e0u: goto label_2ef0e0;
        case 0x2ef0e4u: goto label_2ef0e4;
        case 0x2ef0e8u: goto label_2ef0e8;
        case 0x2ef0ecu: goto label_2ef0ec;
        case 0x2ef0f0u: goto label_2ef0f0;
        case 0x2ef0f4u: goto label_2ef0f4;
        case 0x2ef0f8u: goto label_2ef0f8;
        case 0x2ef0fcu: goto label_2ef0fc;
        case 0x2ef100u: goto label_2ef100;
        case 0x2ef104u: goto label_2ef104;
        case 0x2ef108u: goto label_2ef108;
        case 0x2ef10cu: goto label_2ef10c;
        case 0x2ef110u: goto label_2ef110;
        case 0x2ef114u: goto label_2ef114;
        case 0x2ef118u: goto label_2ef118;
        case 0x2ef11cu: goto label_2ef11c;
        case 0x2ef120u: goto label_2ef120;
        case 0x2ef124u: goto label_2ef124;
        case 0x2ef128u: goto label_2ef128;
        case 0x2ef12cu: goto label_2ef12c;
        case 0x2ef130u: goto label_2ef130;
        case 0x2ef134u: goto label_2ef134;
        case 0x2ef138u: goto label_2ef138;
        case 0x2ef13cu: goto label_2ef13c;
        case 0x2ef140u: goto label_2ef140;
        case 0x2ef144u: goto label_2ef144;
        case 0x2ef148u: goto label_2ef148;
        case 0x2ef14cu: goto label_2ef14c;
        case 0x2ef150u: goto label_2ef150;
        case 0x2ef154u: goto label_2ef154;
        case 0x2ef158u: goto label_2ef158;
        case 0x2ef15cu: goto label_2ef15c;
        case 0x2ef160u: goto label_2ef160;
        case 0x2ef164u: goto label_2ef164;
        case 0x2ef168u: goto label_2ef168;
        case 0x2ef16cu: goto label_2ef16c;
        case 0x2ef170u: goto label_2ef170;
        case 0x2ef174u: goto label_2ef174;
        case 0x2ef178u: goto label_2ef178;
        case 0x2ef17cu: goto label_2ef17c;
        case 0x2ef180u: goto label_2ef180;
        case 0x2ef184u: goto label_2ef184;
        case 0x2ef188u: goto label_2ef188;
        case 0x2ef18cu: goto label_2ef18c;
        case 0x2ef190u: goto label_2ef190;
        case 0x2ef194u: goto label_2ef194;
        default: break;
    }

    ctx->pc = 0x2ef0a0u;

label_2ef0a0:
    // 0x2ef0a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ef0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ef0a4:
    // 0x2ef0a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ef0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ef0a8:
    // 0x2ef0a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ef0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef0ac:
    // 0x2ef0ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ef0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2ef0b0:
    // 0x2ef0b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ef0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ef0b4:
    // 0x2ef0b4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2ef0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2ef0b8:
    // 0x2ef0b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ef0b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef0bc:
    // 0x2ef0bc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2ef0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ef0c0:
    // 0x2ef0c0: 0xa0f809  jalr        $a1
label_2ef0c4:
    if (ctx->pc == 0x2EF0C4u) {
        ctx->pc = 0x2EF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0C0u;
        // 0x2ef0c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF0C8u;
        goto label_2ef0c8;
    }
    ctx->pc = 0x2EF0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2EF0C8u);
        ctx->pc = 0x2EF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0C0u;
        // 0x2ef0c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF0C0u, 0x2EF0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF0C8u;
label_2ef0c8:
    // 0x2ef0c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ef0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ef0cc:
    // 0x2ef0cc: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x2ef0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_2ef0d0:
    // 0x2ef0d0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2ef0d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2ef0d4:
    // 0x2ef0d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ef0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2ef0d8:
    // 0x2ef0d8: 0x40f809  jalr        $v0
label_2ef0dc:
    if (ctx->pc == 0x2EF0DCu) {
        ctx->pc = 0x2EF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0D8u;
        // 0x2ef0dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF0E0u;
        goto label_2ef0e0;
    }
    ctx->pc = 0x2EF0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EF0E0u);
        ctx->pc = 0x2EF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0D8u;
        // 0x2ef0dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF0D8u, 0x2EF0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF0E0u;
label_2ef0e0:
    // 0x2ef0e0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_2ef0e4:
    if (ctx->pc == 0x2EF0E4u) {
        ctx->pc = 0x2EF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0E0u;
        // 0x2ef0e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF0E8u;
        goto label_2ef0e8;
    }
    ctx->pc = 0x2EF0E0u;
    {
        const bool branch_taken_0x2ef0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0E0u;
        // 0x2ef0e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef0e0) {
            ctx->pc = 0x2EF170u;
            goto label_2ef170;
        }
    }
    ctx->pc = 0x2EF0E8u;
label_2ef0e8:
    // 0x2ef0e8: 0xc0bbb2a  jal         func_2EECA8
label_2ef0ec:
    if (ctx->pc == 0x2EF0ECu) {
        ctx->pc = 0x2EF0F0u;
        goto label_2ef0f0;
    }
    ctx->pc = 0x2EF0E8u;
    SET_GPR_U32(ctx, 31, 0x2EF0F0u);
    ctx->pc = 0x2EECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EECA8u, 0x2EF0E8u, 0x2EF0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF0F0u;
label_2ef0f0:
    // 0x2ef0f0: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_2ef0f4:
    if (ctx->pc == 0x2EF0F4u) {
        ctx->pc = 0x2EF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0F0u;
        // 0x2ef0f4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF0F8u;
        goto label_2ef0f8;
    }
    ctx->pc = 0x2EF0F0u;
    {
        const bool branch_taken_0x2ef0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef0f0) {
            ctx->pc = 0x2EF0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF0F0u;
            // 0x2ef0f4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF174u;
            goto label_2ef174;
        }
    }
    ctx->pc = 0x2EF0F8u;
label_2ef0f8:
    // 0x2ef0f8: 0xc0bb8c2  jal         func_2EE308
label_2ef0fc:
    if (ctx->pc == 0x2EF0FCu) {
        ctx->pc = 0x2EF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0F8u;
        // 0x2ef0fc: 0x260400fc  addiu       $a0, $s0, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF100u;
        goto label_2ef100;
    }
    ctx->pc = 0x2EF0F8u;
    SET_GPR_U32(ctx, 31, 0x2EF100u);
    ctx->pc = 0x2EF0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF0F8u;
    // 0x2ef0fc: 0x260400fc  addiu       $a0, $s0, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE308u, 0x2EF0F8u, 0x2EF100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF100u;
label_2ef100:
    // 0x2ef100: 0x8e070058  lw          $a3, 0x58($s0)
    ctx->pc = 0x2ef100u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ef104:
    // 0x2ef104: 0x21bc3  sra         $v1, $v0, 15
    ctx->pc = 0x2ef104u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 15));
label_2ef108:
    // 0x2ef108: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x2ef108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_2ef10c:
    // 0x2ef10c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ef10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ef110:
    // 0x2ef110: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ef110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2ef114:
    // 0x2ef114: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x2ef114u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ef118:
    // 0x2ef118: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2ef118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2ef11c:
    // 0x2ef11c: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2ef11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2ef120:
    // 0x2ef120: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x2ef120u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_2ef124:
    // 0x2ef124: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x2ef124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2ef128:
    // 0x2ef128: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2ef128u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2ef12c:
    // 0x2ef12c: 0x44202a  slt         $a0, $v0, $a0
    ctx->pc = 0x2ef12cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2ef130:
    // 0x2ef130: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_2ef134:
    if (ctx->pc == 0x2EF134u) {
        ctx->pc = 0x2EF134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF130u;
        // 0x2ef134: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF138u;
        goto label_2ef138;
    }
    ctx->pc = 0x2EF130u;
    {
        const bool branch_taken_0x2ef130 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF130u;
        // 0x2ef134: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef130) {
            ctx->pc = 0x2EF13Cu;
            goto label_2ef13c;
        }
    }
    ctx->pc = 0x2EF138u;
label_2ef138:
    // 0x2ef138: 0xae050058  sw          $a1, 0x58($s0)
    ctx->pc = 0x2ef138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 5));
label_2ef13c:
    // 0x2ef13c: 0x50c0000d  beql        $a2, $zero, . + 4 + (0xD << 2)
label_2ef140:
    if (ctx->pc == 0x2EF140u) {
        ctx->pc = 0x2EF140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF13Cu;
        // 0x2ef140: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF144u;
        goto label_2ef144;
    }
    ctx->pc = 0x2EF13Cu;
    {
        const bool branch_taken_0x2ef13c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef13c) {
            ctx->pc = 0x2EF140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF13Cu;
            // 0x2ef140: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF174u;
            goto label_2ef174;
        }
    }
    ctx->pc = 0x2EF144u;
label_2ef144:
    // 0x2ef144: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2ef144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ef148:
    // 0x2ef148: 0x5047000a  beql        $v0, $a3, . + 4 + (0xA << 2)
label_2ef14c:
    if (ctx->pc == 0x2EF14Cu) {
        ctx->pc = 0x2EF14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF148u;
        // 0x2ef14c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF150u;
        goto label_2ef150;
    }
    ctx->pc = 0x2EF148u;
    {
        const bool branch_taken_0x2ef148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x2ef148) {
            ctx->pc = 0x2EF14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF148u;
            // 0x2ef14c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF174u;
            goto label_2ef174;
        }
    }
    ctx->pc = 0x2EF150u;
label_2ef150:
    // 0x2ef150: 0xc0bbb46  jal         func_2EED18
label_2ef154:
    if (ctx->pc == 0x2EF154u) {
        ctx->pc = 0x2EF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF150u;
        // 0x2ef154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF158u;
        goto label_2ef158;
    }
    ctx->pc = 0x2EF150u;
    SET_GPR_U32(ctx, 31, 0x2EF158u);
    ctx->pc = 0x2EF154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF150u;
    // 0x2ef154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EED18u, 0x2EF150u, 0x2EF158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF158u;
label_2ef158:
    // 0x2ef158: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ef158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ef15c:
    // 0x2ef15c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x2ef15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_2ef160:
    // 0x2ef160: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ef160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef164:
    // 0x2ef164: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ef164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ef168:
    // 0x2ef168: 0x60f809  jalr        $v1
label_2ef16c:
    if (ctx->pc == 0x2EF16Cu) {
        ctx->pc = 0x2EF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF168u;
        // 0x2ef16c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF170u;
        goto label_2ef170;
    }
    ctx->pc = 0x2EF168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EF170u);
        ctx->pc = 0x2EF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF168u;
        // 0x2ef16c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF168u, 0x2EF170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF170u;
label_2ef170:
    // 0x2ef170: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ef170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ef174:
    // 0x2ef174: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2ef174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_2ef178:
    // 0x2ef178: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ef178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef17c:
    // 0x2ef17c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ef17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ef180:
    // 0x2ef180: 0x60f809  jalr        $v1
label_2ef184:
    if (ctx->pc == 0x2EF184u) {
        ctx->pc = 0x2EF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF180u;
        // 0x2ef184: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF188u;
        goto label_2ef188;
    }
    ctx->pc = 0x2EF180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EF188u);
        ctx->pc = 0x2EF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF180u;
        // 0x2ef184: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF180u, 0x2EF188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF188u;
label_2ef188:
    // 0x2ef188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ef188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef18c:
    // 0x2ef18c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ef18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ef190:
    // 0x2ef190: 0x3e00008  jr          $ra
label_2ef194:
    if (ctx->pc == 0x2EF194u) {
        ctx->pc = 0x2EF194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF190u;
        // 0x2ef194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF198u;
        goto label_fallthrough_0x2ef190;
    }
    ctx->pc = 0x2EF190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF190u;
        // 0x2ef194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ef190:
    ctx->pc = 0x2EF198u;
}
