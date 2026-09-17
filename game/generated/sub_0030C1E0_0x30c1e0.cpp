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

// Function: sub_0030C1E0
// Address: 0x30c1e0 - 0x30c338
void sub_0030C1E0_0x30c1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C1E0_0x30c1e0");
#endif

    switch (ctx->pc) {
        case 0x30c210u: goto label_30c210;
        case 0x30c248u: goto label_30c248;
        case 0x30c258u: goto label_30c258;
        case 0x30c274u: goto label_30c274;
        case 0x30c288u: goto label_30c288;
        case 0x30c2a0u: goto label_30c2a0;
        case 0x30c304u: goto label_30c304;
        case 0x30c310u: goto label_30c310;
        case 0x30c318u: goto label_30c318;
        default: break;
    }

    ctx->pc = 0x30c1e0u;

    // 0x30c1e0: 0x8f83c538  lw          $v1, -0x3AC8($gp)
    ctx->pc = 0x30c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952248)));
    // 0x30c1e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c1e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30c1e8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x30c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x30c1ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30c1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30c1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c1f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30c1f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c1f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30c1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30c1fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c200: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30C200u;
    {
        const bool branch_taken_0x30c200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C200u;
        // 0x30c204: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c200) {
            ctx->pc = 0x30C258u;
            goto label_30c258;
        }
    }
    ctx->pc = 0x30C208u;
    // 0x30c208: 0xc0cbfb6  jal         func_32FED8
    ctx->pc = 0x30C208u;
    SET_GPR_U32(ctx, 31, 0x30C210u);
    ctx->pc = 0x32FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FED8u, 0x30C208u, 0x30C210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C210u;
label_30c210:
    // 0x30c210: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30c210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30c214: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30c214u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c21c: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x30c21cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x30c220: 0x2484cda8  addiu       $a0, $a0, -0x3258
    ctx->pc = 0x30c220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954408));
    // 0x30c224: 0x24c80008  addiu       $t0, $a2, 0x8
    ctx->pc = 0x30c224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x30c228: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x30c228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x30c22c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30c22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c230: 0x460003a  bltz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x30C230u;
    {
        const bool branch_taken_0x30c230 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x30C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C230u;
        // 0x30c234: 0xaf83c538  sw          $v1, -0x3AC8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c230) {
            ctx->pc = 0x30C31Cu;
            goto label_30c31c;
        }
    }
    ctx->pc = 0x30C238u;
    // 0x30c238: 0xaf87cb94  sw          $a3, -0x346C($gp)
    ctx->pc = 0x30c238u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953876), GPR_U32(ctx, 7));
    // 0x30c23c: 0xaf88cb98  sw          $t0, -0x3468($gp)
    ctx->pc = 0x30c23cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953880), GPR_U32(ctx, 8));
    // 0x30c240: 0xc0cc02a  jal         func_3300A8
    ctx->pc = 0x30C240u;
    SET_GPR_U32(ctx, 31, 0x30C248u);
    ctx->pc = 0x30C244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C240u;
    // 0x30c244: 0xaf86cb90  sw          $a2, -0x3470($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953872), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3300A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3300A8u, 0x30C240u, 0x30C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C248u;
label_30c248:
    // 0x30c248: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30c248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30c24c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30c24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c250: 0xc0cc02a  jal         func_3300A8
    ctx->pc = 0x30C250u;
    SET_GPR_U32(ctx, 31, 0x30C258u);
    ctx->pc = 0x30C254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C250u;
    // 0x30c254: 0x24843388  addiu       $a0, $a0, 0x3388 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3300A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3300A8u, 0x30C250u, 0x30C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C258u;
label_30c258:
    // 0x30c258: 0x3c10001b  lui         $s0, 0x1B
    ctx->pc = 0x30c258u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)27 << 16));
    // 0x30c25c: 0x240648b0  addiu       $a2, $zero, 0x48B0
    ctx->pc = 0x30c25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18608));
    // 0x30c260: 0x26101450  addiu       $s0, $s0, 0x1450
    ctx->pc = 0x30c260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5200));
    // 0x30c264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30c264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30c268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c26c: 0xc04a151  jal         func_128544
    ctx->pc = 0x30C26Cu;
    SET_GPR_U32(ctx, 31, 0x30C274u);
    ctx->pc = 0x30C270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C26Cu;
    // 0x30c270: 0x3c11001b  lui         $s1, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)27 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x30C26Cu, 0x30C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C274u;
label_30c274:
    // 0x30c274: 0xaf90cb88  sw          $s0, -0x3478($gp)
    ctx->pc = 0x30c274u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953864), GPR_U32(ctx, 16));
    // 0x30c278: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x30c278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x30c27c: 0x26315d00  addiu       $s1, $s1, 0x5D00
    ctx->pc = 0x30c27cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23808));
    // 0x30c280: 0xc0c465e  jal         func_311978
    ctx->pc = 0x30C280u;
    SET_GPR_U32(ctx, 31, 0x30C288u);
    ctx->pc = 0x30C284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C280u;
    // 0x30c284: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311978u, 0x30C280u, 0x30C288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C288u;
label_30c288:
    // 0x30c288: 0x8f82c534  lw          $v0, -0x3ACC($gp)
    ctx->pc = 0x30c288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952244)));
    // 0x30c28c: 0x2785c548  addiu       $a1, $gp, -0x3AB8
    ctx->pc = 0x30c28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952264));
    // 0x30c290: 0x2784c544  addiu       $a0, $gp, -0x3ABC
    ctx->pc = 0x30c290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952260));
    // 0x30c294: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x30c294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x30c298: 0xc0c46a0  jal         func_311A80
    ctx->pc = 0x30C298u;
    SET_GPR_U32(ctx, 31, 0x30C2A0u);
    ctx->pc = 0x30C29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C298u;
    // 0x30c29c: 0xaf82c540  sw          $v0, -0x3AC0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A80u, 0x30C298u, 0x30C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C2A0u;
label_30c2a0:
    // 0x30c2a0: 0x8f85c544  lw          $a1, -0x3ABC($gp)
    ctx->pc = 0x30c2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x30c2a4: 0x8f83c548  lw          $v1, -0x3AB8($gp)
    ctx->pc = 0x30c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x30c2a8: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x30c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x30c2ac: 0x24a7003f  addiu       $a3, $a1, 0x3F
    ctx->pc = 0x30c2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x30c2b0: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x30c2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x30c2b4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x30c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x30c2b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x30c2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30c2bc: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x30c2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30c2c0: 0xe2280b  movn        $a1, $a3, $v0
    ctx->pc = 0x30c2c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x30c2c4: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x30c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30c2c8: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x30c2c8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x30c2cc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x30c2ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x30c2d0: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x30c2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30c2d4: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x30c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x30c2d8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x30c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30c2dc: 0x24870800  addiu       $a3, $a0, 0x800
    ctx->pc = 0x30c2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    // 0x30c2e0: 0x52983  sra         $a1, $a1, 6
    ctx->pc = 0x30c2e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 6));
    // 0x30c2e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30c2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c2e8: 0xaf82c54c  sw          $v0, -0x3AB4($gp)
    ctx->pc = 0x30c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952268), GPR_U32(ctx, 2));
    // 0x30c2ec: 0xaf86c550  sw          $a2, -0x3AB0($gp)
    ctx->pc = 0x30c2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952272), GPR_U32(ctx, 6));
    // 0x30c2f0: 0xaf87c554  sw          $a3, -0x3AAC($gp)
    ctx->pc = 0x30c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952276), GPR_U32(ctx, 7));
    // 0x30c2f4: 0xaf83c558  sw          $v1, -0x3AA8($gp)
    ctx->pc = 0x30c2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952280), GPR_U32(ctx, 3));
    // 0x30c2f8: 0xaf85c55c  sw          $a1, -0x3AA4($gp)
    ctx->pc = 0x30c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952284), GPR_U32(ctx, 5));
    // 0x30c2fc: 0xc0c3372  jal         func_30CDC8
    ctx->pc = 0x30C2FCu;
    SET_GPR_U32(ctx, 31, 0x30C304u);
    ctx->pc = 0x30C300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C2FCu;
    // 0x30c300: 0xaf92cb8c  sw          $s2, -0x3474($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953868), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CDC8u, 0x30C2FCu, 0x30C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C304u;
label_30c304:
    // 0x30c304: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x30c304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x30c308: 0xc0c337c  jal         func_30CDF0
    ctx->pc = 0x30C308u;
    SET_GPR_U32(ctx, 31, 0x30C310u);
    ctx->pc = 0x30C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C308u;
    // 0x30c30c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CDF0u, 0x30C308u, 0x30C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C310u;
label_30c310:
    // 0x30c310: 0xc0c46aa  jal         func_311AA8
    ctx->pc = 0x30C310u;
    SET_GPR_U32(ctx, 31, 0x30C318u);
    ctx->pc = 0x311AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311AA8u, 0x30C310u, 0x30C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C318u;
label_30c318:
    // 0x30c318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30c318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c31c:
    // 0x30c31c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c31cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30c320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c324: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30c324u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c328: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x30c328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30c32c: 0x3e00008  jr          $ra
    ctx->pc = 0x30C32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C32Cu;
        // 0x30c330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C334u;
    // 0x30c334: 0x0  nop
    ctx->pc = 0x30c334u;
    // NOP
    ctx->pc = 0x30c338u;
}
