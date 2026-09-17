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

// Function: sub_002EF198
// Address: 0x2ef198 - 0x2ef278
void sub_002EF198_0x2ef198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF198_0x2ef198");
#endif

    switch (ctx->pc) {
        case 0x2ef198u: goto label_2ef198;
        case 0x2ef19cu: goto label_2ef19c;
        case 0x2ef1a0u: goto label_2ef1a0;
        case 0x2ef1a4u: goto label_2ef1a4;
        case 0x2ef1a8u: goto label_2ef1a8;
        case 0x2ef1acu: goto label_2ef1ac;
        case 0x2ef1b0u: goto label_2ef1b0;
        case 0x2ef1b4u: goto label_2ef1b4;
        case 0x2ef1b8u: goto label_2ef1b8;
        case 0x2ef1bcu: goto label_2ef1bc;
        case 0x2ef1c0u: goto label_2ef1c0;
        case 0x2ef1c4u: goto label_2ef1c4;
        case 0x2ef1c8u: goto label_2ef1c8;
        case 0x2ef1ccu: goto label_2ef1cc;
        case 0x2ef1d0u: goto label_2ef1d0;
        case 0x2ef1d4u: goto label_2ef1d4;
        case 0x2ef1d8u: goto label_2ef1d8;
        case 0x2ef1dcu: goto label_2ef1dc;
        case 0x2ef1e0u: goto label_2ef1e0;
        case 0x2ef1e4u: goto label_2ef1e4;
        case 0x2ef1e8u: goto label_2ef1e8;
        case 0x2ef1ecu: goto label_2ef1ec;
        case 0x2ef1f0u: goto label_2ef1f0;
        case 0x2ef1f4u: goto label_2ef1f4;
        case 0x2ef1f8u: goto label_2ef1f8;
        case 0x2ef1fcu: goto label_2ef1fc;
        case 0x2ef200u: goto label_2ef200;
        case 0x2ef204u: goto label_2ef204;
        case 0x2ef208u: goto label_2ef208;
        case 0x2ef20cu: goto label_2ef20c;
        case 0x2ef210u: goto label_2ef210;
        case 0x2ef214u: goto label_2ef214;
        case 0x2ef218u: goto label_2ef218;
        case 0x2ef21cu: goto label_2ef21c;
        case 0x2ef220u: goto label_2ef220;
        case 0x2ef224u: goto label_2ef224;
        case 0x2ef228u: goto label_2ef228;
        case 0x2ef22cu: goto label_2ef22c;
        case 0x2ef230u: goto label_2ef230;
        case 0x2ef234u: goto label_2ef234;
        case 0x2ef238u: goto label_2ef238;
        case 0x2ef23cu: goto label_2ef23c;
        case 0x2ef240u: goto label_2ef240;
        case 0x2ef244u: goto label_2ef244;
        case 0x2ef248u: goto label_2ef248;
        case 0x2ef24cu: goto label_2ef24c;
        case 0x2ef250u: goto label_2ef250;
        case 0x2ef254u: goto label_2ef254;
        case 0x2ef258u: goto label_2ef258;
        case 0x2ef25cu: goto label_2ef25c;
        case 0x2ef260u: goto label_2ef260;
        case 0x2ef264u: goto label_2ef264;
        case 0x2ef268u: goto label_2ef268;
        case 0x2ef26cu: goto label_2ef26c;
        case 0x2ef270u: goto label_2ef270;
        case 0x2ef274u: goto label_2ef274;
        default: break;
    }

    ctx->pc = 0x2ef198u;

label_2ef198:
    // 0x2ef198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ef198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ef19c:
    // 0x2ef19c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ef19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ef1a0:
    // 0x2ef1a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ef1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef1a4:
    // 0x2ef1a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ef1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2ef1a8:
    // 0x2ef1a8: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2ef1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2ef1ac:
    // 0x2ef1ac: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
label_2ef1b0:
    if (ctx->pc == 0x2EF1B0u) {
        ctx->pc = 0x2EF1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1ACu;
        // 0x2ef1b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF1B4u;
        goto label_2ef1b4;
    }
    ctx->pc = 0x2EF1ACu;
    {
        const bool branch_taken_0x2ef1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef1ac) {
            ctx->pc = 0x2EF1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF1ACu;
            // 0x2ef1b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF26Cu;
            goto label_2ef26c;
        }
    }
    ctx->pc = 0x2EF1B4u;
label_2ef1b4:
    // 0x2ef1b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ef1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ef1b8:
    // 0x2ef1b8: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x2ef1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_2ef1bc:
    // 0x2ef1bc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2ef1bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2ef1c0:
    // 0x2ef1c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ef1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2ef1c4:
    // 0x2ef1c4: 0x40f809  jalr        $v0
label_2ef1c8:
    if (ctx->pc == 0x2EF1C8u) {
        ctx->pc = 0x2EF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1C4u;
        // 0x2ef1c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF1CCu;
        goto label_2ef1cc;
    }
    ctx->pc = 0x2EF1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EF1CCu);
        ctx->pc = 0x2EF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1C4u;
        // 0x2ef1c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF1C4u, 0x2EF1CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF1CCu;
label_2ef1cc:
    // 0x2ef1cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ef1d0:
    if (ctx->pc == 0x2EF1D0u) {
        ctx->pc = 0x2EF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1CCu;
        // 0x2ef1d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF1D4u;
        goto label_2ef1d4;
    }
    ctx->pc = 0x2EF1CCu;
    {
        const bool branch_taken_0x2ef1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1CCu;
        // 0x2ef1d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef1cc) {
            ctx->pc = 0x2EF1E0u;
            goto label_2ef1e0;
        }
    }
    ctx->pc = 0x2EF1D4u;
label_2ef1d4:
    // 0x2ef1d4: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x2ef1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
label_2ef1d8:
    // 0x2ef1d8: 0x10000023  b           . + 4 + (0x23 << 2)
label_2ef1dc:
    if (ctx->pc == 0x2EF1DCu) {
        ctx->pc = 0x2EF1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1D8u;
        // 0x2ef1dc: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF1E0u;
        goto label_2ef1e0;
    }
    ctx->pc = 0x2EF1D8u;
    {
        const bool branch_taken_0x2ef1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1D8u;
        // 0x2ef1dc: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef1d8) {
            ctx->pc = 0x2EF268u;
            goto label_2ef268;
        }
    }
    ctx->pc = 0x2EF1E0u;
label_2ef1e0:
    // 0x2ef1e0: 0xc0bbb2a  jal         func_2EECA8
label_2ef1e4:
    if (ctx->pc == 0x2EF1E4u) {
        ctx->pc = 0x2EF1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1E0u;
        // 0x2ef1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF1E8u;
        goto label_2ef1e8;
    }
    ctx->pc = 0x2EF1E0u;
    SET_GPR_U32(ctx, 31, 0x2EF1E8u);
    ctx->pc = 0x2EF1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF1E0u;
    // 0x2ef1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EECA8u, 0x2EF1E0u, 0x2EF1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF1E8u;
label_2ef1e8:
    // 0x2ef1e8: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_2ef1ec:
    if (ctx->pc == 0x2EF1ECu) {
        ctx->pc = 0x2EF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1E8u;
        // 0x2ef1ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF1F0u;
        goto label_2ef1f0;
    }
    ctx->pc = 0x2EF1E8u;
    {
        const bool branch_taken_0x2ef1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef1e8) {
            ctx->pc = 0x2EF1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF1E8u;
            // 0x2ef1ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF26Cu;
            goto label_2ef26c;
        }
    }
    ctx->pc = 0x2EF1F0u;
label_2ef1f0:
    // 0x2ef1f0: 0xc0bb8b0  jal         func_2EE2C0
label_2ef1f4:
    if (ctx->pc == 0x2EF1F4u) {
        ctx->pc = 0x2EF1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1F0u;
        // 0x2ef1f4: 0x260400fc  addiu       $a0, $s0, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF1F8u;
        goto label_2ef1f8;
    }
    ctx->pc = 0x2EF1F0u;
    SET_GPR_U32(ctx, 31, 0x2EF1F8u);
    ctx->pc = 0x2EF1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF1F0u;
    // 0x2ef1f4: 0x260400fc  addiu       $a0, $s0, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE2C0u, 0x2EF1F0u, 0x2EF1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF1F8u;
label_2ef1f8:
    // 0x2ef1f8: 0x21bc3  sra         $v1, $v0, 15
    ctx->pc = 0x2ef1f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 15));
label_2ef1fc:
    // 0x2ef1fc: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x2ef1fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_2ef200:
    // 0x2ef200: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ef200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ef204:
    // 0x2ef204: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ef204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2ef208:
    // 0x2ef208: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2ef208u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ef20c:
    // 0x2ef20c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2ef210:
    if (ctx->pc == 0x2EF210u) {
        ctx->pc = 0x2EF210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF20Cu;
        // 0x2ef210: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF214u;
        goto label_2ef214;
    }
    ctx->pc = 0x2EF20Cu;
    {
        const bool branch_taken_0x2ef20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF20Cu;
        // 0x2ef210: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef20c) {
            ctx->pc = 0x2EF268u;
            goto label_2ef268;
        }
    }
    ctx->pc = 0x2EF214u;
label_2ef214:
    // 0x2ef214: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ef214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ef218:
    // 0x2ef218: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2ef21c:
    if (ctx->pc == 0x2EF21Cu) {
        ctx->pc = 0x2EF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF218u;
        // 0x2ef21c: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF220u;
        goto label_2ef220;
    }
    ctx->pc = 0x2EF218u;
    {
        const bool branch_taken_0x2ef218 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF218u;
        // 0x2ef21c: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef218) {
            ctx->pc = 0x2EF228u;
            goto label_2ef228;
        }
    }
    ctx->pc = 0x2EF220u;
label_2ef220:
    // 0x2ef220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ef220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef224:
    // 0x2ef224: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x2ef224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_2ef228:
    // 0x2ef228: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2ef228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ef22c:
    // 0x2ef22c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2ef22cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2ef230:
    // 0x2ef230: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2ef234:
    if (ctx->pc == 0x2EF234u) {
        ctx->pc = 0x2EF238u;
        goto label_2ef238;
    }
    ctx->pc = 0x2EF230u;
    {
        const bool branch_taken_0x2ef230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef230) {
            ctx->pc = 0x2EF240u;
            goto label_2ef240;
        }
    }
    ctx->pc = 0x2EF238u;
label_2ef238:
    // 0x2ef238: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2ef238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_2ef23c:
    // 0x2ef23c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ef23cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef240:
    // 0x2ef240: 0x5064000a  beql        $v1, $a0, . + 4 + (0xA << 2)
label_2ef244:
    if (ctx->pc == 0x2EF244u) {
        ctx->pc = 0x2EF244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF240u;
        // 0x2ef244: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF248u;
        goto label_2ef248;
    }
    ctx->pc = 0x2EF240u;
    {
        const bool branch_taken_0x2ef240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ef240) {
            ctx->pc = 0x2EF244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF240u;
            // 0x2ef244: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF26Cu;
            goto label_2ef26c;
        }
    }
    ctx->pc = 0x2EF248u;
label_2ef248:
    // 0x2ef248: 0xc0bbb46  jal         func_2EED18
label_2ef24c:
    if (ctx->pc == 0x2EF24Cu) {
        ctx->pc = 0x2EF24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF248u;
        // 0x2ef24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF250u;
        goto label_2ef250;
    }
    ctx->pc = 0x2EF248u;
    SET_GPR_U32(ctx, 31, 0x2EF250u);
    ctx->pc = 0x2EF24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF248u;
    // 0x2ef24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EED18u, 0x2EF248u, 0x2EF250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF250u;
label_2ef250:
    // 0x2ef250: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ef250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ef254:
    // 0x2ef254: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x2ef254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_2ef258:
    // 0x2ef258: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ef258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef25c:
    // 0x2ef25c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ef25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ef260:
    // 0x2ef260: 0x60f809  jalr        $v1
label_2ef264:
    if (ctx->pc == 0x2EF264u) {
        ctx->pc = 0x2EF264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF260u;
        // 0x2ef264: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF268u;
        goto label_2ef268;
    }
    ctx->pc = 0x2EF260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EF268u);
        ctx->pc = 0x2EF264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF260u;
        // 0x2ef264: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF260u, 0x2EF268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF268u;
label_2ef268:
    // 0x2ef268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ef268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef26c:
    // 0x2ef26c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ef26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ef270:
    // 0x2ef270: 0x3e00008  jr          $ra
label_2ef274:
    if (ctx->pc == 0x2EF274u) {
        ctx->pc = 0x2EF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF270u;
        // 0x2ef274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF278u;
        goto label_fallthrough_0x2ef270;
    }
    ctx->pc = 0x2EF270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF270u;
        // 0x2ef274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ef270:
    ctx->pc = 0x2EF278u;
}
