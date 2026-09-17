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

// Function: sub_004FB0D8
// Address: 0x4fb0d8 - 0x4fb670
void sub_004FB0D8_0x4fb0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FB0D8_0x4fb0d8");
#endif

    switch (ctx->pc) {
        case 0x4fb150u: goto label_4fb150;
        case 0x4fb188u: goto label_4fb188;
        case 0x4fb19cu: goto label_4fb19c;
        case 0x4fb1acu: goto label_4fb1ac;
        case 0x4fb1d0u: goto label_4fb1d0;
        case 0x4fb1e4u: goto label_4fb1e4;
        case 0x4fb200u: goto label_4fb200;
        case 0x4fb248u: goto label_4fb248;
        case 0x4fb260u: goto label_4fb260;
        case 0x4fb298u: goto label_4fb298;
        case 0x4fb2b0u: goto label_4fb2b0;
        case 0x4fb3d4u: goto label_4fb3d4;
        case 0x4fb3f0u: goto label_4fb3f0;
        case 0x4fb450u: goto label_4fb450;
        case 0x4fb4dcu: goto label_4fb4dc;
        case 0x4fb508u: goto label_4fb508;
        case 0x4fb520u: goto label_4fb520;
        case 0x4fb544u: goto label_4fb544;
        case 0x4fb568u: goto label_4fb568;
        case 0x4fb59cu: goto label_4fb59c;
        case 0x4fb62cu: goto label_4fb62c;
        case 0x4fb638u: goto label_4fb638;
        case 0x4fb640u: goto label_4fb640;
        default: break;
    }

    ctx->pc = 0x4fb0d8u;

    // 0x4fb0d8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4fb0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x4fb0dc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4fb0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4fb0e0: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x4fb0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x4fb0e4: 0x3c110084  lui         $s1, 0x84
    ctx->pc = 0x4fb0e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)132 << 16));
    // 0x4fb0e8: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x4fb0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x4fb0ec: 0x2442bc80  addiu       $v0, $v0, -0x4380
    ctx->pc = 0x4fb0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950016));
    // 0x4fb0f0: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x4fb0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x4fb0f4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x4fb0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x4fb0f8: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x4fb0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x4fb0fc: 0x26263748  addiu       $a2, $s1, 0x3748
    ctx->pc = 0x4fb0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 14152));
    // 0x4fb100: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x4fb100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x4fb104: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4fb104u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fb108: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x4fb108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x4fb10c: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x4fb10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x4fb110: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x4fb110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x4fb114: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x4fb114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x4fb118: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x4fb118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x4fb11c: 0x8c83ce98  lw          $v1, -0x3168($a0)
    ctx->pc = 0x4fb11cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x56CE98u));
    // 0x4fb120: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x4fb120u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x72BC80u));
    // 0x4fb124: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x4fb124u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x72BC88u));
    // 0x4fb128: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x4fb128u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4fb12c: 0xffa50060  sd          $a1, 0x60($sp)
    ctx->pc = 0x4fb12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 5));
    // 0x4fb130: 0xffa40068  sd          $a0, 0x68($sp)
    ctx->pc = 0x4fb130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 4));
    // 0x4fb134: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4fb134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fb138: 0x90c60014  lbu         $a2, 0x14($a2)
    ctx->pc = 0x4fb138u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4fb13c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4FB13Cu;
    {
        const bool branch_taken_0x4fb13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB13Cu;
        // 0x4fb140: 0xafa60088  sw          $a2, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb13c) {
            ctx->pc = 0x4FB178u;
            goto label_4fb178;
        }
    }
    ctx->pc = 0x4FB144u;
    // 0x4fb144: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4FB144u;
    {
        const bool branch_taken_0x4fb144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB144u;
        // 0x4fb148: 0x96830000  lhu         $v1, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb144) {
            ctx->pc = 0x4FB168u;
            goto label_4fb168;
        }
    }
    ctx->pc = 0x4FB14Cu;
    // 0x4fb14c: 0x0  nop
    ctx->pc = 0x4fb14cu;
    // NOP
label_4fb150:
    // 0x4fb150: 0x26940024  addiu       $s4, $s4, 0x24
    ctx->pc = 0x4fb150u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x4fb154: 0x8ca2ce98  lw          $v0, -0x3168($a1)
    ctx->pc = 0x4fb154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954648)));
    // 0x4fb158: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x4fb158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4fb15c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4FB15Cu;
    {
        const bool branch_taken_0x4fb15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb15c) {
            ctx->pc = 0x4FB178u;
            goto label_4fb178;
        }
    }
    ctx->pc = 0x4FB164u;
    // 0x4fb164: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4fb164u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4fb168:
    // 0x4fb168: 0x240203f5  addiu       $v0, $zero, 0x3F5
    ctx->pc = 0x4fb168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1013));
    // 0x4fb16c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4FB16Cu;
    {
        const bool branch_taken_0x4fb16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4FB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB16Cu;
        // 0x4fb170: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb16c) {
            ctx->pc = 0x4FB150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fb150;
        }
    }
    ctx->pc = 0x4FB174u;
    // 0x4fb174: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4fb174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fb178:
    // 0x4fb178: 0x10800132  beqz        $a0, . + 4 + (0x132 << 2)
    ctx->pc = 0x4FB178u;
    {
        const bool branch_taken_0x4fb178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB178u;
        // 0x4fb17c: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb178) {
            ctx->pc = 0x4FB644u;
            goto label_4fb644;
        }
    }
    ctx->pc = 0x4FB180u;
    // 0x4fb180: 0xc13ea1e  jal         func_4FA878
    ctx->pc = 0x4FB180u;
    SET_GPR_U32(ctx, 31, 0x4FB188u);
    ctx->pc = 0x4FA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA878u, 0x4FB180u, 0x4FB188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB188u;
label_4fb188:
    // 0x4fb188: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x4fb188u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    // 0x4fb18c: 0x24f0ceb4  addiu       $s0, $a3, -0x314C
    ctx->pc = 0x4fb18cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954676));
    // 0x4fb190: 0x7ba50060  lq          $a1, 0x60($sp)
    ctx->pc = 0x4fb190u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4fb194: 0xc042d60  jal         func_10B580
    ctx->pc = 0x4FB194u;
    SET_GPR_U32(ctx, 31, 0x4FB19Cu);
    ctx->pc = 0x4FB198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB194u;
    // 0x4fb198: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B580u, 0x4FB194u, 0x4FB19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB19Cu;
label_4fb19c:
    // 0x4fb19c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb1a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fb1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fb1a4: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB1A4u;
    SET_GPR_U32(ctx, 31, 0x4FB1ACu);
    ctx->pc = 0x4FB1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB1A4u;
    // 0x4fb1a8: 0x24060156  addiu       $a2, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB1A4u, 0x4FB1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB1ACu;
label_4fb1ac:
    // 0x4fb1ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4fb1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4fb1b0: 0x8c625b00  lw          $v0, 0x5B00($v1)
    ctx->pc = 0x4fb1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x515B00u));
    // 0x4fb1b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4FB1B4u;
    {
        const bool branch_taken_0x4fb1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB1B4u;
        // 0x4fb1b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb1b4) {
            ctx->pc = 0x4FB1F0u;
            goto label_4fb1f0;
        }
    }
    ctx->pc = 0x4FB1BCu;
    // 0x4fb1bc: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x4fb1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x4fb1c0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4fb1c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4fb1c4: 0x34c60061  ori         $a2, $a2, 0x61
    ctx->pc = 0x4fb1c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)97);
    // 0x4fb1c8: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB1C8u;
    SET_GPR_U32(ctx, 31, 0x4FB1D0u);
    ctx->pc = 0x4FB1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB1C8u;
    // 0x4fb1cc: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB1C8u, 0x4FB1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB1D0u;
label_4fb1d0:
    // 0x4fb1d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb1d4: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x4fb1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x4fb1d8: 0x34c60c05  ori         $a2, $a2, 0xC05
    ctx->pc = 0x4fb1d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3077);
    // 0x4fb1dc: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB1DCu;
    SET_GPR_U32(ctx, 31, 0x4FB1E4u);
    ctx->pc = 0x4FB1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB1DCu;
    // 0x4fb1e0: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB1DCu, 0x4FB1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB1E4u;
label_4fb1e4:
    // 0x4fb1e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4FB1E4u;
    {
        const bool branch_taken_0x4fb1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB1E4u;
        // 0x4fb1e8: 0x26223748  addiu       $v0, $s1, 0x3748 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 14152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb1e4) {
            ctx->pc = 0x4FB204u;
            goto label_4fb204;
        }
    }
    ctx->pc = 0x4FB1ECu;
    // 0x4fb1ec: 0x0  nop
    ctx->pc = 0x4fb1ecu;
    // NOP
label_4fb1f0:
    // 0x4fb1f0: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x4fb1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x4fb1f4: 0x34c60807  ori         $a2, $a2, 0x807
    ctx->pc = 0x4fb1f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2055);
    // 0x4fb1f8: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB1F8u;
    SET_GPR_U32(ctx, 31, 0x4FB200u);
    ctx->pc = 0x4FB1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB1F8u;
    // 0x4fb1fc: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB1F8u, 0x4FB200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB200u;
label_4fb200:
    // 0x4fb200: 0x26223748  addiu       $v0, $s1, 0x3748
    ctx->pc = 0x4fb200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 14152));
label_4fb204:
    // 0x4fb204: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x4fb204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x4fb208: 0x90460014  lbu         $a2, 0x14($v0)
    ctx->pc = 0x4fb208u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4fb20c: 0x2490ceb4  addiu       $s0, $a0, -0x314C
    ctx->pc = 0x4fb20cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954676));
    // 0x4fb210: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x4fb210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x4fb214: 0x3463000e  ori         $v1, $v1, 0xE
    ctx->pc = 0x4fb214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14);
    // 0x4fb218: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4fb218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4fb21c: 0x34636532  ori         $v1, $v1, 0x6532
    ctx->pc = 0x4fb21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25906);
    // 0x4fb220: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4fb220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4fb224: 0x34632c80  ori         $v1, $v1, 0x2C80
    ctx->pc = 0x4fb224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11392);
    // 0x4fb228: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb22c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4fb22cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4fb230: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4fb230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4fb234: 0x24c62e00  addiu       $a2, $a2, 0x2E00
    ctx->pc = 0x4fb234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11776));
    // 0x4fb238: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4fb238u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fb23c: 0x6317c  dsll32      $a2, $a2, 5
    ctx->pc = 0x4fb23cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 5));
    // 0x4fb240: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB240u;
    SET_GPR_U32(ctx, 31, 0x4FB248u);
    ctx->pc = 0x4FB244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB240u;
    // 0x4fb244: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB240u, 0x4FB248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB248u;
label_4fb248:
    // 0x4fb248: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb24c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x4fb24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4fb250: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4fb250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4fb254: 0x34c60044  ori         $a2, $a2, 0x44
    ctx->pc = 0x4fb254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)68);
    // 0x4fb258: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB258u;
    SET_GPR_U32(ctx, 31, 0x4FB260u);
    ctx->pc = 0x4FB25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB258u;
    // 0x4fb25c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB258u, 0x4FB260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB260u;
label_4fb260:
    // 0x4fb260: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fb260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fb264: 0x8c43ce90  lw          $v1, -0x3170($v0)
    ctx->pc = 0x4fb264u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x56CE90u));
    // 0x4fb268: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x4fb268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4fb26c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb270: 0x3406e200  ori         $a2, $zero, 0xE200
    ctx->pc = 0x4fb270u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57856);
    // 0x4fb274: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x4fb274u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x4fb278: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x4fb278u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4fb27c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x4fb27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4fb280: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4fb280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4fb284: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x4fb284u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x4fb288: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x4fb288u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4fb28c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x4fb28cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x4fb290: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB290u;
    SET_GPR_U32(ctx, 31, 0x4FB298u);
    ctx->pc = 0x4FB294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB290u;
    // 0x4fb294: 0xe63025  or          $a2, $a3, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB290u, 0x4FB298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB298u;
label_4fb298:
    // 0x4fb298: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x4fb298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x4fb29c: 0x8ca2ce98  lw          $v0, -0x3168($a1)
    ctx->pc = 0x4fb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x56CE98u));
    // 0x4fb2a0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x4fb2a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4fb2a4: 0x104000d0  beqz        $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x4FB2A4u;
    {
        const bool branch_taken_0x4fb2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB2A4u;
        // 0x4fb2a8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb2a4) {
            ctx->pc = 0x4FB5E8u;
            goto label_4fb5e8;
        }
    }
    ctx->pc = 0x4FB2ACu;
    // 0x4fb2ac: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4fb2acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4fb2b0:
    // 0x4fb2b0: 0x240203f5  addiu       $v0, $zero, 0x3F5
    ctx->pc = 0x4fb2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1013));
    // 0x4fb2b4: 0x146200c6  bne         $v1, $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x4FB2B4u;
    {
        const bool branch_taken_0x4fb2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4FB2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB2B4u;
        // 0x4fb2b8: 0x3c070057  lui         $a3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb2b4) {
            ctx->pc = 0x4FB5D0u;
            goto label_4fb5d0;
        }
    }
    ctx->pc = 0x4FB2BCu;
    // 0x4fb2bc: 0x9684000e  lhu         $a0, 0xE($s4)
    ctx->pc = 0x4fb2bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x4fb2c0: 0x26880010  addiu       $t0, $s4, 0x10
    ctx->pc = 0x4fb2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4fb2c4: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4fb2c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4fb2c8: 0x308503ff  andi        $a1, $a0, 0x3FF
    ctx->pc = 0x4fb2c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x4fb2cc: 0x8e9e0004  lw          $fp, 0x4($s4)
    ctx->pc = 0x4fb2ccu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4fb2d0: 0x10a000bf  beqz        $a1, . + 4 + (0xBF << 2)
    ctx->pc = 0x4FB2D0u;
    {
        const bool branch_taken_0x4fb2d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB2D0u;
        // 0x4fb2d4: 0x304603ff  andi        $a2, $v0, 0x3FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb2d0) {
            ctx->pc = 0x4FB5D0u;
            goto label_4fb5d0;
        }
    }
    ctx->pc = 0x4FB2D8u;
    // 0x4fb2d8: 0x10c000bc  beqz        $a2, . + 4 + (0xBC << 2)
    ctx->pc = 0x4FB2D8u;
    {
        const bool branch_taken_0x4fb2d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB2D8u;
        // 0x4fb2dc: 0x26870008  addiu       $a3, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb2d8) {
            ctx->pc = 0x4FB5CCu;
            goto label_4fb5cc;
        }
    }
    ctx->pc = 0x4FB2E0u;
    // 0x4fb2e0: 0x26820009  addiu       $v0, $s4, 0x9
    ctx->pc = 0x4fb2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 9));
    // 0x4fb2e4: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x4fb2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x4fb2e8: 0x30848000  andi        $a0, $a0, 0x8000
    ctx->pc = 0x4fb2e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x4fb2ec: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x4fb2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x4fb2f0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x4fb2f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4fb2f4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x4fb2f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4fb2f8: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x4fb2f8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4fb2fc: 0x70c2001a  div1        $zero, $a2, $v0
    ctx->pc = 0x4fb2fcu;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 6); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x4fb300: 0x1812  mflo        $v1
    ctx->pc = 0x4fb300u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x4fb304: 0x70003812  mflo1       $a3
    ctx->pc = 0x4fb304u;
    SET_GPR_U64(ctx, 7, ctx->lo1);
    // 0x4fb308: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4FB308u;
    {
        const bool branch_taken_0x4fb308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB308u;
        // 0x4fb30c: 0x8682000a  lh          $v0, 0xA($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb308) {
            ctx->pc = 0x4FB330u;
            goto label_4fb330;
        }
    }
    ctx->pc = 0x4FB310u;
    // 0x4fb310: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4fb310u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4fb314: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x4fb314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x4fb318: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x4fb318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x4fb31c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4fb31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4fb320: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x4fb320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x4fb324: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4FB324u;
    {
        const bool branch_taken_0x4fb324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB324u;
        // 0x4fb328: 0x24420800  addiu       $v0, $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb324) {
            ctx->pc = 0x4FB340u;
            goto label_4fb340;
        }
    }
    ctx->pc = 0x4FB32Cu;
    // 0x4fb32c: 0x0  nop
    ctx->pc = 0x4fb32cu;
    // NOP
label_4fb330:
    // 0x4fb330: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4fb330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4fb334: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x4fb334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x4fb338: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x4fb338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x4fb33c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x4fb33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_4fb340:
    // 0x4fb340: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x4fb340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x4fb344: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4fb344u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4fb348: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x4fb348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x4fb34c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4FB34Cu;
    {
        const bool branch_taken_0x4fb34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB34Cu;
        // 0x4fb350: 0x2405fff8  addiu       $a1, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb34c) {
            ctx->pc = 0x4FB370u;
            goto label_4fb370;
        }
    }
    ctx->pc = 0x4FB354u;
    // 0x4fb354: 0x8682000c  lh          $v0, 0xC($s4)
    ctx->pc = 0x4fb354u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x4fb358: 0x73823  negu        $a3, $a3
    ctx->pc = 0x4fb358u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x4fb35c: 0xafa70084  sw          $a3, 0x84($sp)
    ctx->pc = 0x4fb35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 7));
    // 0x4fb360: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4fb360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4fb364: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x4fb364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x4fb368: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4FB368u;
    {
        const bool branch_taken_0x4fb368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB368u;
        // 0x4fb36c: 0x24420800  addiu       $v0, $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb368) {
            ctx->pc = 0x4FB384u;
            goto label_4fb384;
        }
    }
    ctx->pc = 0x4FB370u;
label_4fb370:
    // 0x4fb370: 0x8682000c  lh          $v0, 0xC($s4)
    ctx->pc = 0x4fb370u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x4fb374: 0xafa70084  sw          $a3, 0x84($sp)
    ctx->pc = 0x4fb374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 7));
    // 0x4fb378: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x4fb378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4fb37c: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x4fb37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x4fb380: 0xafa7007c  sw          $a3, 0x7C($sp)
    ctx->pc = 0x4fb380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 7));
label_4fb384:
    // 0x4fb384: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x4fb384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x4fb388: 0x26900014  addiu       $s0, $s4, 0x14
    ctx->pc = 0x4fb388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x4fb38c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x4fb38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x4fb390: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x4fb390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb394: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4FB394u;
    {
        const bool branch_taken_0x4fb394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4FB398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB394u;
        // 0x4fb398: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb394) {
            ctx->pc = 0x4FB3DCu;
            goto label_4fb3dc;
        }
    }
    ctx->pc = 0x4FB39Cu;
    // 0x4fb39c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4fb39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fb3a0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x4fb3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x4fb3a4: 0x3442000e  ori         $v0, $v0, 0xE
    ctx->pc = 0x4fb3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14);
    // 0x4fb3a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4fb3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4fb3ac: 0x34426532  ori         $v0, $v0, 0x6532
    ctx->pc = 0x4fb3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25906);
    // 0x4fb3b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4fb3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4fb3b4: 0x34422c80  ori         $v0, $v0, 0x2C80
    ctx->pc = 0x4fb3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11392);
    // 0x4fb3b8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4fb3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4fb3bc: 0x24c62e00  addiu       $a2, $a2, 0x2E00
    ctx->pc = 0x4fb3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11776));
    // 0x4fb3c0: 0x8ca4ceb4  lw          $a0, -0x314C($a1)
    ctx->pc = 0x4fb3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954676)));
    // 0x4fb3c4: 0x6317c  dsll32      $a2, $a2, 5
    ctx->pc = 0x4fb3c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 5));
    // 0x4fb3c8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4fb3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4fb3cc: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB3CCu;
    SET_GPR_U32(ctx, 31, 0x4FB3D4u);
    ctx->pc = 0x4FB3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB3CCu;
    // 0x4fb3d0: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB3CCu, 0x4FB3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB3D4u;
label_4fb3d4:
    // 0x4fb3d4: 0x92100000  lbu         $s0, 0x0($s0)
    ctx->pc = 0x4fb3d4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb3d8: 0xafb00088  sw          $s0, 0x88($sp)
    ctx->pc = 0x4fb3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 16));
label_4fb3dc:
    // 0x4fb3dc: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x4fb3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x4fb3e0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x4fb3e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4fb3e4: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x4FB3E4u;
    {
        const bool branch_taken_0x4fb3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB3E4u;
        // 0x4fb3e8: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb3e4) {
            ctx->pc = 0x4FB5CCu;
            goto label_4fb5cc;
        }
    }
    ctx->pc = 0x4FB3ECu;
    // 0x4fb3ec: 0x0  nop
    ctx->pc = 0x4fb3ecu;
    // NOP
label_4fb3f0:
    // 0x4fb3f0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x4fb3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4fb3f4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4fb3f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fb3f8: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x4FB3F8u;
    {
        const bool branch_taken_0x4fb3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB3F8u;
        // 0x4fb3fc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb3f8) {
            ctx->pc = 0x4FB5B0u;
            goto label_4fb5b0;
        }
    }
    ctx->pc = 0x4FB400u;
    // 0x4fb400: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x4fb400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x4fb404: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x4fb404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x4fb408: 0x400013  mtlo        $v0
    ctx->pc = 0x4fb408u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x4fb40c: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x4fb40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x4fb410: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x4fb410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x4fb414: 0x70441800  madd        $v1, $v0, $a0
    ctx->pc = 0x4fb414u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fb418: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fb418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fb41c: 0x2453ceb4  addiu       $s3, $v0, -0x314C
    ctx->pc = 0x4fb41cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954676));
    // 0x4fb420: 0x8fa7007c  lw          $a3, 0x7C($sp)
    ctx->pc = 0x4fb420u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x4fb424: 0x26840012  addiu       $a0, $s4, 0x12
    ctx->pc = 0x4fb424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 18));
    // 0x4fb428: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x4fb428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x4fb42c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x4fb42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4fb430: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fb430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4fb434: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fb434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fb438: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4fb438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4fb43c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4fb43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4fb440: 0xffa30098  sd          $v1, 0x98($sp)
    ctx->pc = 0x4fb440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 3));
    // 0x4fb444: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4fb444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4fb448: 0xffa200a0  sd          $v0, 0xA0($sp)
    ctx->pc = 0x4fb448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 2));
    // 0x4fb44c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x4fb44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_4fb450:
    // 0x4fb450: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4fb450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4fb454: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4fb454u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fb458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fb458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fb45c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4fb45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4fb460: 0x3403e444  ori         $v1, $zero, 0xE444
    ctx->pc = 0x4fb460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58436);
    // 0x4fb464: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4fb464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4fb468: 0x2c422000  sltiu       $v0, $v0, 0x2000
    ctx->pc = 0x4fb468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
    // 0x4fb46c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4FB46Cu;
    {
        const bool branch_taken_0x4fb46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB46Cu;
        // 0x4fb470: 0x27de0002  addiu       $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb46c) {
            ctx->pc = 0x4FB480u;
            goto label_4fb480;
        }
    }
    ctx->pc = 0x4FB474u;
    // 0x4fb474: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4FB474u;
    {
        const bool branch_taken_0x4fb474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB474u;
        // 0x4fb478: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb474) {
            ctx->pc = 0x4FB484u;
            goto label_4fb484;
        }
    }
    ctx->pc = 0x4FB47Cu;
    // 0x4fb47c: 0x0  nop
    ctx->pc = 0x4fb47cu;
    // NOP
label_4fb480:
    // 0x4fb480: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4fb480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fb484:
    // 0x4fb484: 0x29142  srl         $s2, $v0, 5
    ctx->pc = 0x4fb484u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x4fb488: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x4fb488u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x4fb48c: 0x3051001f  andi        $s1, $v0, 0x1F
    ctx->pc = 0x4fb48cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4fb490: 0x12b900  sll         $s7, $s2, 4
    ctx->pc = 0x4fb490u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x4fb494: 0x11b100  sll         $s6, $s1, 4
    ctx->pc = 0x4fb494u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x4fb498: 0x8ce55b00  lw          $a1, 0x5B00($a3)
    ctx->pc = 0x4fb498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 23296)));
    // 0x4fb49c: 0x26e4000f  addiu       $a0, $s7, 0xF
    ctx->pc = 0x4fb49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 15));
    // 0x4fb4a0: 0x26c2000f  addiu       $v0, $s6, 0xF
    ctx->pc = 0x4fb4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 15));
    // 0x4fb4a4: 0x420bc  dsll32      $a0, $a0, 2
    ctx->pc = 0x4fb4a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
    // 0x4fb4a8: 0x161938  dsll        $v1, $s6, 4
    ctx->pc = 0x4fb4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << 4);
    // 0x4fb4ac: 0x173e38  dsll        $a3, $s7, 24
    ctx->pc = 0x4fb4acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) << 24);
    // 0x4fb4b0: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x4fb4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x4fb4b4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4FB4B4u;
    {
        const bool branch_taken_0x4fb4b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB4B4u;
        // 0x4fb4b8: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb4b4) {
            ctx->pc = 0x4FB4DCu;
            goto label_4fb4dc;
        }
    }
    ctx->pc = 0x4FB4BCu;
    // 0x4fb4bc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x4fb4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4fb4c0: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x4fb4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x4fb4c4: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x4fb4c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4fb4c8: 0x8ca4ceb4  lw          $a0, -0x314C($a1)
    ctx->pc = 0x4fb4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CEB4u));
    // 0x4fb4cc: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x4fb4ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4fb4d0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4fb4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4fb4d4: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB4D4u;
    SET_GPR_U32(ctx, 31, 0x4FB4DCu);
    ctx->pc = 0x4FB4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB4D4u;
    // 0x4fb4d8: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB4D4u, 0x4FB4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB4DCu;
label_4fb4dc:
    // 0x4fb4dc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x4fb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4fb4e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4fb4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fb4e4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4fb4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4fb4e8: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x4fb4e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x4fb4ec: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fb4ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fb4f0: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x4fb4f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x4fb4f4: 0x400013  mtlo        $v0
    ctx->pc = 0x4fb4f4u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x4fb4f8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x4fb4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4fb4fc: 0x72a28000  madd        $s0, $s5, $v0
    ctx->pc = 0x4fb4fcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x4fb500: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB500u;
    SET_GPR_U32(ctx, 31, 0x4FB508u);
    ctx->pc = 0x4FB504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB500u;
    // 0x4fb504: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB500u, 0x4FB508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB508u;
label_4fb508:
    // 0x4fb508: 0x111238  dsll        $v0, $s1, 8
    ctx->pc = 0x4fb508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 8);
    // 0x4fb50c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4fb50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4fb510: 0x123638  dsll        $a2, $s2, 24
    ctx->pc = 0x4fb510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << 24);
    // 0x4fb514: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x4fb514u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4fb518: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB518u;
    SET_GPR_U32(ctx, 31, 0x4FB520u);
    ctx->pc = 0x4FB51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB518u;
    // 0x4fb51c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB518u, 0x4FB520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB520u;
label_4fb520:
    // 0x4fb520: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x4fb520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x4fb524: 0xdfa30098  ld          $v1, 0x98($sp)
    ctx->pc = 0x4fb524u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x4fb528: 0x3405fff8  ori         $a1, $zero, 0xFFF8
    ctx->pc = 0x4fb528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x4fb52c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4fb52cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4fb530: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4fb530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4fb534: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x4fb534u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4fb538: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x4fb538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x4fb53c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB53Cu;
    SET_GPR_U32(ctx, 31, 0x4FB544u);
    ctx->pc = 0x4FB540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB53Cu;
    // 0x4fb540: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB53Cu, 0x4FB544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB544u;
label_4fb544:
    // 0x4fb544: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x4fb544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x4fb548: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x4fb548u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x4fb54c: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x4fb54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x4fb550: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x4fb550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x4fb554: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4fb554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4fb558: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fb558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fb55c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4fb55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4fb560: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB560u;
    SET_GPR_U32(ctx, 31, 0x4FB568u);
    ctx->pc = 0x4FB564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB560u;
    // 0x4fb564: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB560u, 0x4FB568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB568u;
label_4fb568:
    // 0x4fb568: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4fb568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4fb56c: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x4fb56cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4fb570: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4fb570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fb574: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x4fb574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4fb578: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x4fb578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x4fb57c: 0x3407fff8  ori         $a3, $zero, 0xFFF8
    ctx->pc = 0x4fb57cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x4fb580: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x4fb580u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x4fb584: 0xdfa300a0  ld          $v1, 0xA0($sp)
    ctx->pc = 0x4fb584u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4fb588: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x4fb588u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x4fb58c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x4fb58cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4fb590: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x4fb590u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x4fb594: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB594u;
    SET_GPR_U32(ctx, 31, 0x4FB59Cu);
    ctx->pc = 0x4FB598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB594u;
    // 0x4fb598: 0x2073025  or          $a2, $s0, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB594u, 0x4FB59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB59Cu;
label_4fb59c:
    // 0x4fb59c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x4fb59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4fb5a0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4fb5a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fb5a4: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x4fb5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4fb5a8: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x4FB5A8u;
    {
        const bool branch_taken_0x4fb5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FB5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB5A8u;
        // 0x4fb5ac: 0x8fa400a8  lw          $a0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb5a8) {
            ctx->pc = 0x4FB450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fb450;
        }
    }
    ctx->pc = 0x4FB5B0u;
label_4fb5b0:
    // 0x4fb5b0: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x4fb5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x4fb5b4: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x4fb5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x4fb5b8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4fb5b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fb5bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4fb5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4fb5c0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x4fb5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4fb5c4: 0x1440ff8a  bnez        $v0, . + 4 + (-0x76 << 2)
    ctx->pc = 0x4FB5C4u;
    {
        const bool branch_taken_0x4fb5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FB5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB5C4u;
        // 0x4fb5c8: 0xafa5008c  sw          $a1, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb5c4) {
            ctx->pc = 0x4FB3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fb3f0;
        }
    }
    ctx->pc = 0x4FB5CCu;
label_4fb5cc:
    // 0x4fb5cc: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x4fb5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
label_4fb5d0:
    // 0x4fb5d0: 0x26940024  addiu       $s4, $s4, 0x24
    ctx->pc = 0x4fb5d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x4fb5d4: 0x8ce2ce98  lw          $v0, -0x3168($a3)
    ctx->pc = 0x4fb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954648)));
    // 0x4fb5d8: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x4fb5d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4fb5dc: 0x5440ff34  bnel        $v0, $zero, . + 4 + (-0xCC << 2)
    ctx->pc = 0x4FB5DCu;
    {
        const bool branch_taken_0x4fb5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fb5dc) {
            ctx->pc = 0x4FB5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FB5DCu;
            // 0x4fb5e0: 0x96830000  lhu         $v1, 0x0($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FB2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fb2b0;
        }
    }
    ctx->pc = 0x4FB5E4u;
    // 0x4fb5e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4fb5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_4fb5e8:
    // 0x4fb5e8: 0x8c625b00  lw          $v0, 0x5B00($v1)
    ctx->pc = 0x4fb5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23296)));
    // 0x4fb5ec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4FB5ECu;
    {
        const bool branch_taken_0x4fb5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB5ECu;
        // 0x4fb5f0: 0x2e0182d  daddu       $v1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb5ec) {
            ctx->pc = 0x4FB62Cu;
            goto label_4fb62c;
        }
    }
    ctx->pc = 0x4FB5F4u;
    // 0x4fb5f4: 0x26c4000f  addiu       $a0, $s6, 0xF
    ctx->pc = 0x4fb5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 15));
    // 0x4fb5f8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4fb5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fb5fc: 0x26e2000f  addiu       $v0, $s7, 0xF
    ctx->pc = 0x4fb5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 15));
    // 0x4fb600: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x4fb600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x4fb604: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x4fb604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x4fb608: 0x63138  dsll        $a2, $a2, 4
    ctx->pc = 0x4fb608u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 4);
    // 0x4fb60c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x4fb60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x4fb610: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x4fb610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x4fb614: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4fb614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4fb618: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4fb618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4fb61c: 0x8ca4ceb4  lw          $a0, -0x314C($a1)
    ctx->pc = 0x4fb61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954676)));
    // 0x4fb620: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x4fb620u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x4fb624: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB624u;
    SET_GPR_U32(ctx, 31, 0x4FB62Cu);
    ctx->pc = 0x4FB628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB624u;
    // 0x4fb628: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB624u, 0x4FB62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB62Cu;
label_4fb62c:
    // 0x4fb62c: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x4fb62cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    // 0x4fb630: 0xc042d66  jal         func_10B598
    ctx->pc = 0x4FB630u;
    SET_GPR_U32(ctx, 31, 0x4FB638u);
    ctx->pc = 0x4FB634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB630u;
    // 0x4fb634: 0x8ce4ceb4  lw          $a0, -0x314C($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954676)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B598u, 0x4FB630u, 0x4FB638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB638u;
label_4fb638:
    // 0x4fb638: 0xc13ea58  jal         func_4FA960
    ctx->pc = 0x4FB638u;
    SET_GPR_U32(ctx, 31, 0x4FB640u);
    ctx->pc = 0x4FA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA960u, 0x4FB638u, 0x4FB640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB640u;
label_4fb640:
    // 0x4fb640: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x4fb640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_4fb644:
    // 0x4fb644: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x4fb644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x4fb648: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x4fb648u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4fb64c: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x4fb64cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x4fb650: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x4fb650u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4fb654: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x4fb654u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x4fb658: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x4fb658u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x4fb65c: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x4fb65cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x4fb660: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x4fb660u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x4fb664: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x4fb664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x4fb668: 0x3e00008  jr          $ra
    ctx->pc = 0x4FB668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB668u;
        // 0x4fb66c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FB668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FB670u;
}
