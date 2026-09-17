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

// Function: sub_0033C198
// Address: 0x33c198 - 0x33c288
void sub_0033C198_0x33c198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C198_0x33c198");
#endif

    switch (ctx->pc) {
        case 0x33c198u: goto label_33c198;
        case 0x33c19cu: goto label_33c19c;
        case 0x33c1a0u: goto label_33c1a0;
        case 0x33c1a4u: goto label_33c1a4;
        case 0x33c1a8u: goto label_33c1a8;
        case 0x33c1acu: goto label_33c1ac;
        case 0x33c1b0u: goto label_33c1b0;
        case 0x33c1b4u: goto label_33c1b4;
        case 0x33c1b8u: goto label_33c1b8;
        case 0x33c1bcu: goto label_33c1bc;
        case 0x33c1c0u: goto label_33c1c0;
        case 0x33c1c4u: goto label_33c1c4;
        case 0x33c1c8u: goto label_33c1c8;
        case 0x33c1ccu: goto label_33c1cc;
        case 0x33c1d0u: goto label_33c1d0;
        case 0x33c1d4u: goto label_33c1d4;
        case 0x33c1d8u: goto label_33c1d8;
        case 0x33c1dcu: goto label_33c1dc;
        case 0x33c1e0u: goto label_33c1e0;
        case 0x33c1e4u: goto label_33c1e4;
        case 0x33c1e8u: goto label_33c1e8;
        case 0x33c1ecu: goto label_33c1ec;
        case 0x33c1f0u: goto label_33c1f0;
        case 0x33c1f4u: goto label_33c1f4;
        case 0x33c1f8u: goto label_33c1f8;
        case 0x33c1fcu: goto label_33c1fc;
        case 0x33c200u: goto label_33c200;
        case 0x33c204u: goto label_33c204;
        case 0x33c208u: goto label_33c208;
        case 0x33c20cu: goto label_33c20c;
        case 0x33c210u: goto label_33c210;
        case 0x33c214u: goto label_33c214;
        case 0x33c218u: goto label_33c218;
        case 0x33c21cu: goto label_33c21c;
        case 0x33c220u: goto label_33c220;
        case 0x33c224u: goto label_33c224;
        case 0x33c228u: goto label_33c228;
        case 0x33c22cu: goto label_33c22c;
        case 0x33c230u: goto label_33c230;
        case 0x33c234u: goto label_33c234;
        case 0x33c238u: goto label_33c238;
        case 0x33c23cu: goto label_33c23c;
        case 0x33c240u: goto label_33c240;
        case 0x33c244u: goto label_33c244;
        case 0x33c248u: goto label_33c248;
        case 0x33c24cu: goto label_33c24c;
        case 0x33c250u: goto label_33c250;
        case 0x33c254u: goto label_33c254;
        case 0x33c258u: goto label_33c258;
        case 0x33c25cu: goto label_33c25c;
        case 0x33c260u: goto label_33c260;
        case 0x33c264u: goto label_33c264;
        case 0x33c268u: goto label_33c268;
        case 0x33c26cu: goto label_33c26c;
        case 0x33c270u: goto label_33c270;
        case 0x33c274u: goto label_33c274;
        case 0x33c278u: goto label_33c278;
        case 0x33c27cu: goto label_33c27c;
        case 0x33c280u: goto label_33c280;
        case 0x33c284u: goto label_33c284;
        default: break;
    }

    ctx->pc = 0x33c198u;

label_33c198:
    // 0x33c198: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33c198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_33c19c:
    // 0x33c19c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x33c19cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33c1a0:
    // 0x33c1a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33c1a4:
    // 0x33c1a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33c1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33c1a8:
    // 0x33c1a8: 0x2e22fff0  sltiu       $v0, $s1, -0x10
    ctx->pc = 0x33c1a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4294967280) ? 1 : 0);
label_33c1ac:
    // 0x33c1ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33c1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33c1b0:
    // 0x33c1b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33c1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_33c1b4:
    // 0x33c1b4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x33c1b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_33c1b8:
    // 0x33c1b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33c1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_33c1bc:
    // 0x33c1bc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x33c1bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_33c1c0:
    // 0x33c1c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x33c1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_33c1c4:
    // 0x33c1c4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x33c1c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_33c1c8:
    // 0x33c1c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33c1cc:
    // 0x33c1cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33c1ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33c1d0:
    // 0x33c1d0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_33c1d4:
    if (ctx->pc == 0x33C1D4u) {
        ctx->pc = 0x33C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1D0u;
        // 0x33c1d4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1D8u;
        goto label_33c1d8;
    }
    ctx->pc = 0x33C1D0u;
    {
        const bool branch_taken_0x33c1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1D0u;
        // 0x33c1d4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c1d0) {
            ctx->pc = 0x33C260u;
            goto label_33c260;
        }
    }
    ctx->pc = 0x33C1D8u;
label_33c1d8:
    // 0x33c1d8: 0xc0cf0ec  jal         func_33C3B0
label_33c1dc:
    if (ctx->pc == 0x33C1DCu) {
        ctx->pc = 0x33C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1D8u;
        // 0x33c1dc: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1E0u;
        goto label_33c1e0;
    }
    ctx->pc = 0x33C1D8u;
    SET_GPR_U32(ctx, 31, 0x33C1E0u);
    ctx->pc = 0x33C1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C1D8u;
    // 0x33c1dc: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C3B0u, 0x33C1D8u, 0x33C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C1E0u;
label_33c1e0:
    // 0x33c1e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33c1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c1e4:
    // 0x33c1e4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x33c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33c1e8:
    // 0x33c1e8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_33c1ec:
    // 0x33c1ec: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33c1ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33c1f0:
    // 0x33c1f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33c1f4:
    // 0x33c1f4: 0x40f809  jalr        $v0
label_33c1f8:
    if (ctx->pc == 0x33C1F8u) {
        ctx->pc = 0x33C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1F4u;
        // 0x33c1f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1FCu;
        goto label_33c1fc;
    }
    ctx->pc = 0x33C1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33C1FCu);
        ctx->pc = 0x33C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1F4u;
        // 0x33c1f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C1F4u, 0x33C1FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C1FCu;
label_33c1fc:
    // 0x33c1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c200:
    // 0x33c200: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x33c200u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c204:
    // 0x33c204: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x33c204u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c208:
    // 0x33c208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c20c:
    // 0x33c20c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33c210:
    // 0x33c210: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33c210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33c214:
    // 0x33c214: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x33c214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33c218:
    // 0x33c218: 0x16a20005  bne         $s5, $v0, . + 4 + (0x5 << 2)
label_33c21c:
    if (ctx->pc == 0x33C21Cu) {
        ctx->pc = 0x33C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C218u;
        // 0x33c21c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C220u;
        goto label_33c220;
    }
    ctx->pc = 0x33C218u;
    {
        const bool branch_taken_0x33c218 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x33C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C218u;
        // 0x33c21c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c218) {
            ctx->pc = 0x33C230u;
            goto label_33c230;
        }
    }
    ctx->pc = 0x33C220u;
label_33c220:
    // 0x33c220: 0xc0c77ac  jal         func_31DEB0
label_33c224:
    if (ctx->pc == 0x33C224u) {
        ctx->pc = 0x33C228u;
        goto label_33c228;
    }
    ctx->pc = 0x33C220u;
    SET_GPR_U32(ctx, 31, 0x33C228u);
    ctx->pc = 0x31DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DEB0u, 0x33C220u, 0x33C228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C228u;
label_33c228:
    // 0x33c228: 0x10000004  b           . + 4 + (0x4 << 2)
label_33c22c:
    if (ctx->pc == 0x33C22Cu) {
        ctx->pc = 0x33C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C228u;
        // 0x33c22c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C230u;
        goto label_33c230;
    }
    ctx->pc = 0x33C228u;
    {
        const bool branch_taken_0x33c228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C228u;
        // 0x33c22c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c228) {
            ctx->pc = 0x33C23Cu;
            goto label_33c23c;
        }
    }
    ctx->pc = 0x33C230u;
label_33c230:
    // 0x33c230: 0xc0cf8c6  jal         func_33E318
label_33c234:
    if (ctx->pc == 0x33C234u) {
        ctx->pc = 0x33C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C230u;
        // 0x33c234: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C238u;
        goto label_33c238;
    }
    ctx->pc = 0x33C230u;
    SET_GPR_U32(ctx, 31, 0x33C238u);
    ctx->pc = 0x33C234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C230u;
    // 0x33c234: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E318u, 0x33C230u, 0x33C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C238u;
label_33c238:
    // 0x33c238: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33c238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c23c:
    // 0x33c23c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c23cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c240:
    // 0x33c240: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33c244:
    // 0x33c244: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33c244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33c248:
    // 0x33c248: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33c248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33c24c:
    // 0x33c24c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33c24cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33c250:
    // 0x33c250: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x33c250u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_33c254:
    // 0x33c254: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33c254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33c258:
    // 0x33c258: 0x3e00008  jr          $ra
label_33c25c:
    if (ctx->pc == 0x33C25Cu) {
        ctx->pc = 0x33C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C258u;
        // 0x33c25c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C260u;
        goto label_33c260;
    }
    ctx->pc = 0x33C258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C258u;
        // 0x33c25c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C260u;
label_33c260:
    // 0x33c260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c264:
    // 0x33c264: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33c268:
    // 0x33c268: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33c268u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33c26c:
    // 0x33c26c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33c26cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33c270:
    // 0x33c270: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33c270u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33c274:
    // 0x33c274: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x33c274u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_33c278:
    // 0x33c278: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33c278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33c27c:
    // 0x33c27c: 0x80cf026  j           func_33C098
label_33c280:
    if (ctx->pc == 0x33C280u) {
        ctx->pc = 0x33C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C27Cu;
        // 0x33c280: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C284u;
        goto label_33c284;
    }
    ctx->pc = 0x33C27Cu;
    ctx->pc = 0x33C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C27Cu;
    // 0x33c280: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C098u;
    sub_0033C098_0x33c098(rdram, ctx, runtime); return;
    ctx->pc = 0x33C284u;
label_33c284:
    // 0x33c284: 0x0  nop
    ctx->pc = 0x33c284u;
    // NOP
    ctx->pc = 0x33c288u;
}
