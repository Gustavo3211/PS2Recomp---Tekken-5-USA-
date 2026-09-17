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

// Function: sub_001F3248
// Address: 0x1f3248 - 0x1f3858
void sub_001F3248_0x1f3248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3248_0x1f3248");
#endif

    switch (ctx->pc) {
        case 0x1f3284u: goto label_1f3284;
        case 0x1f328cu: goto label_1f328c;
        case 0x1f32a0u: goto label_1f32a0;
        case 0x1f32b0u: goto label_1f32b0;
        case 0x1f32bcu: goto label_1f32bc;
        case 0x1f32e8u: goto label_1f32e8;
        case 0x1f32f8u: goto label_1f32f8;
        case 0x1f3300u: goto label_1f3300;
        case 0x1f3340u: goto label_1f3340;
        case 0x1f3348u: goto label_1f3348;
        case 0x1f3380u: goto label_1f3380;
        case 0x1f3394u: goto label_1f3394;
        case 0x1f33a0u: goto label_1f33a0;
        case 0x1f33a8u: goto label_1f33a8;
        case 0x1f33b8u: goto label_1f33b8;
        case 0x1f33c0u: goto label_1f33c0;
        case 0x1f346cu: goto label_1f346c;
        case 0x1f3484u: goto label_1f3484;
        case 0x1f3498u: goto label_1f3498;
        case 0x1f36c8u: goto label_1f36c8;
        case 0x1f3728u: goto label_1f3728;
        case 0x1f3748u: goto label_1f3748;
        case 0x1f37acu: goto label_1f37ac;
        case 0x1f37bcu: goto label_1f37bc;
        case 0x1f37c4u: goto label_1f37c4;
        case 0x1f37ccu: goto label_1f37cc;
        case 0x1f37d4u: goto label_1f37d4;
        case 0x1f37e4u: goto label_1f37e4;
        case 0x1f3814u: goto label_1f3814;
        default: break;
    }

    ctx->pc = 0x1f3248u;

    // 0x1f3248: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f3248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f324c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f324cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f3250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f3250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3254: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f3254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f3258: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f3258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f325c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f325cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f3260: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f3260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3264: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f3264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f3268: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f3268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1f326c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1f3270: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f3270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f3274: 0xae12005c  sw          $s2, 0x5C($s0)
    ctx->pc = 0x1f3274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 18));
    // 0x1f3278: 0xae120064  sw          $s2, 0x64($s0)
    ctx->pc = 0x1f3278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 18));
    // 0x1f327c: 0xc07d1a8  jal         func_1F46A0
    ctx->pc = 0x1F327Cu;
    SET_GPR_U32(ctx, 31, 0x1F3284u);
    ctx->pc = 0x1F3280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F327Cu;
    // 0x1f3280: 0x9615003c  lhu         $s5, 0x3C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F46A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F46A0u, 0x1F327Cu, 0x1F3284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3284u;
label_1f3284:
    // 0x1f3284: 0xc0802be  jal         func_200AF8
    ctx->pc = 0x1F3284u;
    SET_GPR_U32(ctx, 31, 0x1F328Cu);
    ctx->pc = 0x1F3288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3284u;
    // 0x1f3288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AF8u, 0x1F3284u, 0x1F328Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F328Cu;
label_1f328c:
    // 0x1f328c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1f328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f3290: 0x56220005  bnel        $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3290u;
    {
        const bool branch_taken_0x1f3290 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3290) {
            ctx->pc = 0x1F3294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3290u;
            // 0x1f3294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F32A8u;
            goto label_1f32a8;
        }
    }
    ctx->pc = 0x1F3298u;
    // 0x1f3298: 0xc07dadc  jal         func_1F6B70
    ctx->pc = 0x1F3298u;
    SET_GPR_U32(ctx, 31, 0x1F32A0u);
    ctx->pc = 0x1F329Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3298u;
    // 0x1f329c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6B70u, 0x1F3298u, 0x1F32A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F32A0u;
label_1f32a0:
    // 0x1f32a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F32A0u;
    {
        const bool branch_taken_0x1f32a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F32A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32A0u;
        // 0x1f32a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f32a0) {
            ctx->pc = 0x1F32B4u;
            goto label_1f32b4;
        }
    }
    ctx->pc = 0x1F32A8u;
label_1f32a8:
    // 0x1f32a8: 0xc07daaa  jal         func_1F6AA8
    ctx->pc = 0x1F32A8u;
    SET_GPR_U32(ctx, 31, 0x1F32B0u);
    ctx->pc = 0x1F32ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F32A8u;
    // 0x1f32ac: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6AA8u, 0x1F32A8u, 0x1F32B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F32B0u;
label_1f32b0:
    // 0x1f32b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f32b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f32b4:
    // 0x1f32b4: 0xc09fca6  jal         func_27F298
    ctx->pc = 0x1F32B4u;
    SET_GPR_U32(ctx, 31, 0x1F32BCu);
    ctx->pc = 0x1F32B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F32B4u;
    // 0x1f32b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F298u, 0x1F32B4u, 0x1F32BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F32BCu;
label_1f32bc:
    // 0x1f32bc: 0x2622fffe  addiu       $v0, $s1, -0x2
    ctx->pc = 0x1f32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x1f32c0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1f32c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f32c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F32C4u;
    {
        const bool branch_taken_0x1f32c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32C4u;
        // 0x1f32c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f32c4) {
            ctx->pc = 0x1F32E0u;
            goto label_1f32e0;
        }
    }
    ctx->pc = 0x1F32CCu;
    // 0x1f32cc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1f32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1f32d0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F32D0u;
    {
        const bool branch_taken_0x1f32d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32D0u;
        // 0x1f32d4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f32d0) {
            ctx->pc = 0x1F32E0u;
            goto label_1f32e0;
        }
    }
    ctx->pc = 0x1F32D8u;
    // 0x1f32d8: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F32D8u;
    {
        const bool branch_taken_0x1f32d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f32d8) {
            ctx->pc = 0x1F32F0u;
            goto label_1f32f0;
        }
    }
    ctx->pc = 0x1F32E0u;
label_1f32e0:
    // 0x1f32e0: 0xc080406  jal         func_201018
    ctx->pc = 0x1F32E0u;
    SET_GPR_U32(ctx, 31, 0x1F32E8u);
    ctx->pc = 0x1F32E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F32E0u;
    // 0x1f32e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201018u, 0x1F32E0u, 0x1F32E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F32E8u;
label_1f32e8:
    // 0x1f32e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F32E8u;
    {
        const bool branch_taken_0x1f32e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f32e8) {
            ctx->pc = 0x1F32F8u;
            goto label_1f32f8;
        }
    }
    ctx->pc = 0x1F32F0u;
label_1f32f0:
    // 0x1f32f0: 0xc080406  jal         func_201018
    ctx->pc = 0x1F32F0u;
    SET_GPR_U32(ctx, 31, 0x1F32F8u);
    ctx->pc = 0x1F32F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F32F0u;
    // 0x1f32f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201018u, 0x1F32F0u, 0x1F32F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F32F8u;
label_1f32f8:
    // 0x1f32f8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x1F32F8u;
    SET_GPR_U32(ctx, 31, 0x1F3300u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x1F32F8u, 0x1F3300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3300u;
label_1f3300:
    // 0x1f3300: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1f3300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1f3304: 0xa6020176  sh          $v0, 0x176($s0)
    ctx->pc = 0x1f3304u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 374), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f3308: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f3308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f330c: 0x7a020750  lq          $v0, 0x750($s0)
    ctx->pc = 0x1f330cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 1872)));
    // 0x1f3310: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f3310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3314: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x1f3314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
    // 0x1f3318: 0xa6040178  sh          $a0, 0x178($s0)
    ctx->pc = 0x1f3318u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 376), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f331c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f331cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3320: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x1f3320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x1f3324: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1f3324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x1f3328: 0xa60002c4  sh          $zero, 0x2C4($s0)
    ctx->pc = 0x1f3328u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 708), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f332c: 0xa2000191  sb          $zero, 0x191($s0)
    ctx->pc = 0x1f332cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 401), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3330: 0x8614000e  lh          $s4, 0xE($s0)
    ctx->pc = 0x1f3330u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1f3334: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1f3334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1f3338: 0xc09dbc2  jal         func_276F08
    ctx->pc = 0x1F3338u;
    SET_GPR_U32(ctx, 31, 0x1F3340u);
    ctx->pc = 0x1F333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3338u;
    // 0x1f333c: 0x8613007a  lh          $s3, 0x7A($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276F08u, 0x1F3338u, 0x1F3340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3340u;
label_1f3340:
    // 0x1f3340: 0xc09e690  jal         func_279A40
    ctx->pc = 0x1F3340u;
    SET_GPR_U32(ctx, 31, 0x1F3348u);
    ctx->pc = 0x1F3344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3340u;
    // 0x1f3344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279A40u, 0x1F3340u, 0x1F3348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3348u;
label_1f3348:
    // 0x1f3348: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1f3348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f334c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F334Cu;
    {
        const bool branch_taken_0x1f334c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f334c) {
            ctx->pc = 0x1F3350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F334Cu;
            // 0x1f3350: 0x920201bc  lbu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3370u;
            goto label_1f3370;
        }
    }
    ctx->pc = 0x1F3354u;
    // 0x1f3354: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x1f3354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f3358: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F3358u;
    {
        const bool branch_taken_0x1f3358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3358u;
        // 0x1f335c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3358) {
            ctx->pc = 0x1F3384u;
            goto label_1f3384;
        }
    }
    ctx->pc = 0x1F3360u;
    // 0x1f3360: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1f3360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f3364: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3364u;
    {
        const bool branch_taken_0x1f3364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3364u;
        // 0x1f3368: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3364) {
            ctx->pc = 0x1F3384u;
            goto label_1f3384;
        }
    }
    ctx->pc = 0x1F336Cu;
    // 0x1f336c: 0x920201bc  lbu         $v0, 0x1BC($s0)
    ctx->pc = 0x1f336cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
label_1f3370:
    // 0x1f3370: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3370u;
    {
        const bool branch_taken_0x1f3370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3370) {
            ctx->pc = 0x1F3374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3370u;
            // 0x1f3374: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3384u;
            goto label_1f3384;
        }
    }
    ctx->pc = 0x1F3378u;
    // 0x1f3378: 0xc09e6cc  jal         func_279B30
    ctx->pc = 0x1F3378u;
    SET_GPR_U32(ctx, 31, 0x1F3380u);
    ctx->pc = 0x1F337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3378u;
    // 0x1f337c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B30u, 0x1F3378u, 0x1F3380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3380u;
label_1f3380:
    // 0x1f3380: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1f3380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1f3384:
    // 0x1f3384: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F3384u;
    {
        const bool branch_taken_0x1f3384 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F3388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3384u;
        // 0x1f3388: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3384) {
            ctx->pc = 0x1F33B0u;
            goto label_1f33b0;
        }
    }
    ctx->pc = 0x1F338Cu;
    // 0x1f338c: 0xc07e57c  jal         func_1F95F0
    ctx->pc = 0x1F338Cu;
    SET_GPR_U32(ctx, 31, 0x1F3394u);
    ctx->pc = 0x1F3390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F338Cu;
    // 0x1f3390: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95F0u, 0x1F338Cu, 0x1F3394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3394u;
label_1f3394:
    // 0x1f3394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3398: 0xc09ece2  jal         func_27B388
    ctx->pc = 0x1F3398u;
    SET_GPR_U32(ctx, 31, 0x1F33A0u);
    ctx->pc = 0x1F339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3398u;
    // 0x1f339c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B388u, 0x1F3398u, 0x1F33A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33A0u;
label_1f33a0:
    // 0x1f33a0: 0xc07e57c  jal         func_1F95F0
    ctx->pc = 0x1F33A0u;
    SET_GPR_U32(ctx, 31, 0x1F33A8u);
    ctx->pc = 0x1F33A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F33A0u;
    // 0x1f33a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95F0u, 0x1F33A0u, 0x1F33A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33A8u;
label_1f33a8:
    // 0x1f33a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F33A8u;
    {
        const bool branch_taken_0x1f33a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f33a8) {
            ctx->pc = 0x1F33B8u;
            goto label_1f33b8;
        }
    }
    ctx->pc = 0x1F33B0u;
label_1f33b0:
    // 0x1f33b0: 0xc09ece2  jal         func_27B388
    ctx->pc = 0x1F33B0u;
    SET_GPR_U32(ctx, 31, 0x1F33B8u);
    ctx->pc = 0x1F33B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F33B0u;
    // 0x1f33b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B388u, 0x1F33B0u, 0x1F33B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33B8u;
label_1f33b8:
    // 0x1f33b8: 0xc09e690  jal         func_279A40
    ctx->pc = 0x1F33B8u;
    SET_GPR_U32(ctx, 31, 0x1F33C0u);
    ctx->pc = 0x1F33BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F33B8u;
    // 0x1f33bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279A40u, 0x1F33B8u, 0x1F33C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33C0u;
label_1f33c0:
    // 0x1f33c0: 0x2622fff9  addiu       $v0, $s1, -0x7
    ctx->pc = 0x1f33c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967289));
    // 0x1f33c4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1f33c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f33c8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f33c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f33cc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1f33ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f33d0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1f33d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1f33d4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1f33d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1f33d8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1f33d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1f33dc: 0xe6000750  swc1        $f0, 0x750($s0)
    ctx->pc = 0x1f33dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1872), bits); }
    // 0x1f33e0: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x1f33e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1f33e4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F33E4u;
    {
        const bool branch_taken_0x1f33e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33E4u;
        // 0x1f33e8: 0xe6010758  swc1        $f1, 0x758($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33e4) {
            ctx->pc = 0x1F3438u;
            goto label_1f3438;
        }
    }
    ctx->pc = 0x1F33ECu;
    // 0x1f33ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f33f0: 0x12220011  beq         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F33F0u;
    {
        const bool branch_taken_0x1f33f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F33F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33F0u;
        // 0x1f33f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33f0) {
            ctx->pc = 0x1F3438u;
            goto label_1f3438;
        }
    }
    ctx->pc = 0x1F33F8u;
    // 0x1f33f8: 0x12220010  beq         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F33F8u;
    {
        const bool branch_taken_0x1f33f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33F8u;
        // 0x1f33fc: 0x8e030048  lw          $v1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33f8) {
            ctx->pc = 0x1F343Cu;
            goto label_1f343c;
        }
    }
    ctx->pc = 0x1F3400u;
    // 0x1f3400: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F3400u;
    {
        const bool branch_taken_0x1f3400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3400u;
        // 0x1f3404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3400) {
            ctx->pc = 0x1F3424u;
            goto label_1f3424;
        }
    }
    ctx->pc = 0x1F3408u;
    // 0x1f3408: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x1f3408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f340c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F340Cu;
    {
        const bool branch_taken_0x1f340c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F340Cu;
        // 0x1f3410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f340c) {
            ctx->pc = 0x1F3424u;
            goto label_1f3424;
        }
    }
    ctx->pc = 0x1F3414u;
    // 0x1f3414: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1f3414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f3418: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3418u;
    {
        const bool branch_taken_0x1f3418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3418) {
            ctx->pc = 0x1F341Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3418u;
            // 0x1f341c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3424u;
            goto label_1f3424;
        }
    }
    ctx->pc = 0x1F3420u;
    // 0x1f3420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f3420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3424:
    // 0x1f3424: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3424u;
    {
        const bool branch_taken_0x1f3424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3424) {
            ctx->pc = 0x1F3444u;
            goto label_1f3444;
        }
    }
    ctx->pc = 0x1F342Cu;
    // 0x1f342c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F342Cu;
    {
        const bool branch_taken_0x1f342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F342Cu;
        // 0x1f3430: 0xa614000e  sh          $s4, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f342c) {
            ctx->pc = 0x1F3440u;
            goto label_1f3440;
        }
    }
    ctx->pc = 0x1F3434u;
    // 0x1f3434: 0x0  nop
    ctx->pc = 0x1f3434u;
    // NOP
label_1f3438:
    // 0x1f3438: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1f3438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1f343c:
    // 0x1f343c: 0xa614000e  sh          $s4, 0xE($s0)
    ctx->pc = 0x1f343cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 20));
label_1f3440:
    // 0x1f3440: 0xa613007a  sh          $s3, 0x7A($s0)
    ctx->pc = 0x1f3440u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 19));
label_1f3444:
    // 0x1f3444: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3444u;
    {
        const bool branch_taken_0x1f3444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3444u;
        // 0x1f3448: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3444) {
            ctx->pc = 0x1F3464u;
            goto label_1f3464;
        }
    }
    ctx->pc = 0x1F344Cu;
    // 0x1f344c: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F344Cu;
    {
        const bool branch_taken_0x1f344c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F344Cu;
        // 0x1f3450: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f344c) {
            ctx->pc = 0x1F346Cu;
            goto label_1f346c;
        }
    }
    ctx->pc = 0x1F3454u;
    // 0x1f3454: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3454u;
    {
        const bool branch_taken_0x1f3454 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3454u;
        // 0x1f3458: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3454) {
            ctx->pc = 0x1F346Cu;
            goto label_1f346c;
        }
    }
    ctx->pc = 0x1F345Cu;
    // 0x1f345c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F345Cu;
    {
        const bool branch_taken_0x1f345c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F345Cu;
        // 0x1f3460: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f345c) {
            ctx->pc = 0x1F3470u;
            goto label_1f3470;
        }
    }
    ctx->pc = 0x1F3464u;
label_1f3464:
    // 0x1f3464: 0xc07deac  jal         func_1F7AB0
    ctx->pc = 0x1F3464u;
    SET_GPR_U32(ctx, 31, 0x1F346Cu);
    ctx->pc = 0x1F3468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3464u;
    // 0x1f3468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7AB0u, 0x1F3464u, 0x1F346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F346Cu;
label_1f346c:
    // 0x1f346c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1f346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1f3470:
    // 0x1f3470: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x1f3470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1f3474: 0x55180b  movn        $v1, $v0, $s5
    ctx->pc = 0x1f3474u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1f3478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f347c: 0xc07cc70  jal         func_1F31C0
    ctx->pc = 0x1F347Cu;
    SET_GPR_U32(ctx, 31, 0x1F3484u);
    ctx->pc = 0x1F3480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F347Cu;
    // 0x1f3480: 0xae0306b8  sw          $v1, 0x6B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1720), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F31C0u, 0x1F347Cu, 0x1F3484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3484u;
label_1f3484:
    // 0x1f3484: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1f3484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f3488: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3488u;
    {
        const bool branch_taken_0x1f3488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3488) {
            ctx->pc = 0x1F348Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3488u;
            // 0x1f348c: 0x3c020050  lui         $v0, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F34A0u;
            goto label_1f34a0;
        }
    }
    ctx->pc = 0x1F3490u;
    // 0x1f3490: 0xc07c67e  jal         func_1F19F8
    ctx->pc = 0x1F3490u;
    SET_GPR_U32(ctx, 31, 0x1F3498u);
    ctx->pc = 0x1F3494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3490u;
    // 0x1f3494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F19F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F19F8u, 0x1F3490u, 0x1F3498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3498u;
label_1f3498:
    // 0x1f3498: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3498u;
    {
        const bool branch_taken_0x1f3498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3498u;
        // 0x1f349c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3498) {
            ctx->pc = 0x1F34ACu;
            goto label_1f34ac;
        }
    }
    ctx->pc = 0x1F34A0u;
label_1f34a0:
    // 0x1f34a0: 0xae02069c  sw          $v0, 0x69C($s0)
    ctx->pc = 0x1f34a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1692), GPR_U32(ctx, 2));
    // 0x1f34a4: 0xae0206a0  sw          $v0, 0x6A0($s0)
    ctx->pc = 0x1f34a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 2));
    // 0x1f34a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f34ac:
    // 0x1f34ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f34acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f34b0: 0xa6020144  sh          $v0, 0x144($s0)
    ctx->pc = 0x1f34b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 324), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f34b4: 0xa2000186  sb          $zero, 0x186($s0)
    ctx->pc = 0x1f34b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 390), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f34b8: 0xa6000156  sh          $zero, 0x156($s0)
    ctx->pc = 0x1f34b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 342), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f34bc: 0xa2000197  sb          $zero, 0x197($s0)
    ctx->pc = 0x1f34bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 407), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f34c0: 0xa2000187  sb          $zero, 0x187($s0)
    ctx->pc = 0x1f34c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 391), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f34c4: 0xa2000189  sb          $zero, 0x189($s0)
    ctx->pc = 0x1f34c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 393), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f34c8: 0xa200018b  sb          $zero, 0x18B($s0)
    ctx->pc = 0x1f34c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 395), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f34cc: 0xa2000199  sb          $zero, 0x199($s0)
    ctx->pc = 0x1f34ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f34d0: 0xa200019c  sb          $zero, 0x19C($s0)
    ctx->pc = 0x1f34d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 412), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f34d4: 0xa200019d  sb          $zero, 0x19D($s0)
    ctx->pc = 0x1f34d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 413), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f34d8: 0xa20001a0  sb          $zero, 0x1A0($s0)
    ctx->pc = 0x1f34d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 416), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f34dc: 0xa200019a  sb          $zero, 0x19A($s0)
    ctx->pc = 0x1f34dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 410), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f34e0: 0xa20001ab  sb          $zero, 0x1AB($s0)
    ctx->pc = 0x1f34e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 427), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f34e4: 0xa6000154  sh          $zero, 0x154($s0)
    ctx->pc = 0x1f34e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 340), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f34e8: 0x1223000c  beq         $s1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F34E8u;
    {
        const bool branch_taken_0x1f34e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34E8u;
        // 0x1f34ec: 0xa20001b2  sb          $zero, 0x1B2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f34e8) {
            ctx->pc = 0x1F351Cu;
            goto label_1f351c;
        }
    }
    ctx->pc = 0x1F34F0u;
    // 0x1f34f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f34f4: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F34F4u;
    {
        const bool branch_taken_0x1f34f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34F4u;
        // 0x1f34f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f34f4) {
            ctx->pc = 0x1F351Cu;
            goto label_1f351c;
        }
    }
    ctx->pc = 0x1F34FCu;
    // 0x1f34fc: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F34FCu;
    {
        const bool branch_taken_0x1f34fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34FCu;
        // 0x1f3500: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f34fc) {
            ctx->pc = 0x1F351Cu;
            goto label_1f351c;
        }
    }
    ctx->pc = 0x1F3504u;
    // 0x1f3504: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3504u;
    {
        const bool branch_taken_0x1f3504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3504u;
        // 0x1f3508: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3504) {
            ctx->pc = 0x1F351Cu;
            goto label_1f351c;
        }
    }
    ctx->pc = 0x1F350Cu;
    // 0x1f350c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F350Cu;
    {
        const bool branch_taken_0x1f350c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F350Cu;
        // 0x1f3510: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f350c) {
            ctx->pc = 0x1F351Cu;
            goto label_1f351c;
        }
    }
    ctx->pc = 0x1F3514u;
    // 0x1f3514: 0x56220005  bnel        $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3514u;
    {
        const bool branch_taken_0x1f3514 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3514) {
            ctx->pc = 0x1F3518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3514u;
            // 0x1f3518: 0x8603003e  lh          $v1, 0x3E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F352Cu;
            goto label_1f352c;
        }
    }
    ctx->pc = 0x1F351Cu;
label_1f351c:
    // 0x1f351c: 0xa60002d0  sh          $zero, 0x2D0($s0)
    ctx->pc = 0x1f351cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 720), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3520: 0xa6000092  sh          $zero, 0x92($s0)
    ctx->pc = 0x1f3520u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3524: 0xa6000094  sh          $zero, 0x94($s0)
    ctx->pc = 0x1f3524u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3528: 0x8603003e  lh          $v1, 0x3E($s0)
    ctx->pc = 0x1f3528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
label_1f352c:
    // 0x1f352c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1f352cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1f3530: 0xa60002ba  sh          $zero, 0x2BA($s0)
    ctx->pc = 0x1f3530u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 698), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3534: 0xa60002a2  sh          $zero, 0x2A2($s0)
    ctx->pc = 0x1f3534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 674), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3538: 0xa60002a4  sh          $zero, 0x2A4($s0)
    ctx->pc = 0x1f3538u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 676), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f353c: 0xa60002a6  sh          $zero, 0x2A6($s0)
    ctx->pc = 0x1f353cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 678), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3540: 0xa60002b2  sh          $zero, 0x2B2($s0)
    ctx->pc = 0x1f3540u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 690), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3544: 0xa60002b4  sh          $zero, 0x2B4($s0)
    ctx->pc = 0x1f3544u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 692), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3548: 0xa60002b6  sh          $zero, 0x2B6($s0)
    ctx->pc = 0x1f3548u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 694), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f354c: 0xa60002b8  sh          $zero, 0x2B8($s0)
    ctx->pc = 0x1f354cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 696), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3550: 0xa60002c0  sh          $zero, 0x2C0($s0)
    ctx->pc = 0x1f3550u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 704), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3554: 0xa60002c2  sh          $zero, 0x2C2($s0)
    ctx->pc = 0x1f3554u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 706), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3558: 0xa60002bc  sh          $zero, 0x2BC($s0)
    ctx->pc = 0x1f3558u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 700), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f355c: 0xa60002be  sh          $zero, 0x2BE($s0)
    ctx->pc = 0x1f355cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 702), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3560: 0xa60002c8  sh          $zero, 0x2C8($s0)
    ctx->pc = 0x1f3560u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 712), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3564: 0xa60002ca  sh          $zero, 0x2CA($s0)
    ctx->pc = 0x1f3564u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 714), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3568: 0xa60002cc  sh          $zero, 0x2CC($s0)
    ctx->pc = 0x1f3568u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 716), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f356c: 0xa60002ce  sh          $zero, 0x2CE($s0)
    ctx->pc = 0x1f356cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 718), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3570: 0xa60002d2  sh          $zero, 0x2D2($s0)
    ctx->pc = 0x1f3570u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 722), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3574: 0xa60002d4  sh          $zero, 0x2D4($s0)
    ctx->pc = 0x1f3574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 724), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3578: 0xa60002b0  sh          $zero, 0x2B0($s0)
    ctx->pc = 0x1f3578u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 688), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f357c: 0xa2000205  sb          $zero, 0x205($s0)
    ctx->pc = 0x1f357cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 517), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3580: 0xa2000206  sb          $zero, 0x206($s0)
    ctx->pc = 0x1f3580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 518), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3584: 0xa2000207  sb          $zero, 0x207($s0)
    ctx->pc = 0x1f3584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 519), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3588: 0xa2000208  sb          $zero, 0x208($s0)
    ctx->pc = 0x1f3588u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 520), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f358c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F358Cu;
    {
        const bool branch_taken_0x1f358c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F3590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F358Cu;
        // 0x1f3590: 0xa2000209  sb          $zero, 0x209($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f358c) {
            ctx->pc = 0x1F35C8u;
            goto label_1f35c8;
        }
    }
    ctx->pc = 0x1F3594u;
    // 0x1f3594: 0x9603003c  lhu         $v1, 0x3C($s0)
    ctx->pc = 0x1f3594u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1f3598: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f3598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f359c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f359cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f35a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f35a4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1f35a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1f35a8: 0x2421a540  addiu       $at, $at, -0x5AC0
    ctx->pc = 0x1f35a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294944064));
    // 0x1f35ac: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1f35acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1f35b0: 0xa440004a  sh          $zero, 0x4A($v0)
    ctx->pc = 0x1f35b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f35b4: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1f35b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1f35b8: 0xa4400044  sh          $zero, 0x44($v0)
    ctx->pc = 0x1f35b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f35bc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F35BCu;
    {
        const bool branch_taken_0x1f35bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35BCu;
        // 0x1f35c0: 0xa4400046  sh          $zero, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f35bc) {
            ctx->pc = 0x1F35FCu;
            goto label_1f35fc;
        }
    }
    ctx->pc = 0x1F35C4u;
    // 0x1f35c4: 0x0  nop
    ctx->pc = 0x1f35c4u;
    // NOP
label_1f35c8:
    // 0x1f35c8: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x1f35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1f35cc: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F35CCu;
    {
        const bool branch_taken_0x1f35cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f35cc) {
            ctx->pc = 0x1F35D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F35CCu;
            // 0x1f35d0: 0xa20001f2  sb          $zero, 0x1F2($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 498), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3600u;
            goto label_1f3600;
        }
    }
    ctx->pc = 0x1F35D4u;
    // 0x1f35d4: 0x9603003c  lhu         $v1, 0x3C($s0)
    ctx->pc = 0x1f35d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1f35d8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f35dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f35e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f35e4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1f35e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1f35e8: 0x2421a540  addiu       $at, $at, -0x5AC0
    ctx->pc = 0x1f35e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294944064));
    // 0x1f35ec: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1f35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1f35f0: 0xa440006a  sh          $zero, 0x6A($v0)
    ctx->pc = 0x1f35f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f35f4: 0xa4400064  sh          $zero, 0x64($v0)
    ctx->pc = 0x1f35f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f35f8: 0xa4400066  sh          $zero, 0x66($v0)
    ctx->pc = 0x1f35f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 102), (uint16_t)GPR_U32(ctx, 0));
label_1f35fc:
    // 0x1f35fc: 0xa20001f2  sb          $zero, 0x1F2($s0)
    ctx->pc = 0x1f35fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 498), (uint8_t)GPR_U32(ctx, 0));
label_1f3600:
    // 0x1f3600: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f3600u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3604: 0xa20001f3  sb          $zero, 0x1F3($s0)
    ctx->pc = 0x1f3604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 499), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3608: 0x260b0008  addiu       $t3, $s0, 0x8
    ctx->pc = 0x1f3608u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1f360c: 0xa20001ee  sb          $zero, 0x1EE($s0)
    ctx->pc = 0x1f360cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 494), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3610: 0x260a000c  addiu       $t2, $s0, 0xC
    ctx->pc = 0x1f3610u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1f3614: 0xa20001ef  sb          $zero, 0x1EF($s0)
    ctx->pc = 0x1f3614u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 495), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3618: 0x260d0010  addiu       $t5, $s0, 0x10
    ctx->pc = 0x1f3618u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1f361c: 0xa20001fc  sb          $zero, 0x1FC($s0)
    ctx->pc = 0x1f361cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 508), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3620: 0x260c0014  addiu       $t4, $s0, 0x14
    ctx->pc = 0x1f3620u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1f3624: 0xa6000216  sh          $zero, 0x216($s0)
    ctx->pc = 0x1f3624u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 534), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3628: 0xa20001f9  sb          $zero, 0x1F9($s0)
    ctx->pc = 0x1f3628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 505), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f362c: 0xa600021a  sh          $zero, 0x21A($s0)
    ctx->pc = 0x1f362cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 538), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3630: 0xa2000202  sb          $zero, 0x202($s0)
    ctx->pc = 0x1f3630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 514), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3634: 0xa2000203  sb          $zero, 0x203($s0)
    ctx->pc = 0x1f3634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 515), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3638: 0xa6000218  sh          $zero, 0x218($s0)
    ctx->pc = 0x1f3638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 536), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f363c: 0xa20001fd  sb          $zero, 0x1FD($s0)
    ctx->pc = 0x1f363cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 509), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3640: 0xa6000228  sh          $zero, 0x228($s0)
    ctx->pc = 0x1f3640u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 552), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3644: 0xa600022a  sh          $zero, 0x22A($s0)
    ctx->pc = 0x1f3644u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 554), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3648: 0xa600022c  sh          $zero, 0x22C($s0)
    ctx->pc = 0x1f3648u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 556), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f364c: 0xa200020a  sb          $zero, 0x20A($s0)
    ctx->pc = 0x1f364cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 522), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3650: 0xa200020b  sb          $zero, 0x20B($s0)
    ctx->pc = 0x1f3650u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 523), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3654: 0xa200020c  sb          $zero, 0x20C($s0)
    ctx->pc = 0x1f3654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 524), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3658: 0xa200020e  sb          $zero, 0x20E($s0)
    ctx->pc = 0x1f3658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 526), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f365c: 0xa2000200  sb          $zero, 0x200($s0)
    ctx->pc = 0x1f365cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 512), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3660: 0xa600017a  sh          $zero, 0x17A($s0)
    ctx->pc = 0x1f3660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 378), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3664: 0xa60002a8  sh          $zero, 0x2A8($s0)
    ctx->pc = 0x1f3664u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 680), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3668: 0xa60002aa  sh          $zero, 0x2AA($s0)
    ctx->pc = 0x1f3668u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 682), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f366c: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1f366cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x1f3670: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x1f3670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
    // 0x1f3674: 0xae000684  sw          $zero, 0x684($s0)
    ctx->pc = 0x1f3674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1668), GPR_U32(ctx, 0));
    // 0x1f3678: 0xae000688  sw          $zero, 0x688($s0)
    ctx->pc = 0x1f3678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1672), GPR_U32(ctx, 0));
    // 0x1f367c: 0xae00068c  sw          $zero, 0x68C($s0)
    ctx->pc = 0x1f367cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1676), GPR_U32(ctx, 0));
    // 0x1f3680: 0xae0007c0  sw          $zero, 0x7C0($s0)
    ctx->pc = 0x1f3680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 0));
    // 0x1f3684: 0xae0007c4  sw          $zero, 0x7C4($s0)
    ctx->pc = 0x1f3684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1988), GPR_U32(ctx, 0));
    // 0x1f3688: 0xae0007f4  sw          $zero, 0x7F4($s0)
    ctx->pc = 0x1f3688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2036), GPR_U32(ctx, 0));
    // 0x1f368c: 0xae000808  sw          $zero, 0x808($s0)
    ctx->pc = 0x1f368cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 0));
    // 0x1f3690: 0xae00080c  sw          $zero, 0x80C($s0)
    ctx->pc = 0x1f3690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2060), GPR_U32(ctx, 0));
    // 0x1f3694: 0xae000810  sw          $zero, 0x810($s0)
    ctx->pc = 0x1f3694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 0));
    // 0x1f3698: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x1f3698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x1f369c: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x1f369cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f36a0: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x1f36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    // 0x1f36a4: 0xa60002f8  sh          $zero, 0x2F8($s0)
    ctx->pc = 0x1f36a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 760), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f36a8: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x1f36a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
    // 0x1f36ac: 0xae0002ec  sw          $zero, 0x2EC($s0)
    ctx->pc = 0x1f36acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 0));
    // 0x1f36b0: 0xa6000302  sh          $zero, 0x302($s0)
    ctx->pc = 0x1f36b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 770), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f36b4: 0xae000314  sw          $zero, 0x314($s0)
    ctx->pc = 0x1f36b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 0));
    // 0x1f36b8: 0xae000678  sw          $zero, 0x678($s0)
    ctx->pc = 0x1f36b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 0));
    // 0x1f36bc: 0xae00067c  sw          $zero, 0x67C($s0)
    ctx->pc = 0x1f36bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1660), GPR_U32(ctx, 0));
    // 0x1f36c0: 0xae000680  sw          $zero, 0x680($s0)
    ctx->pc = 0x1f36c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 0));
    // 0x1f36c4: 0x0  nop
    ctx->pc = 0x1f36c4u;
    // NOP
label_1f36c8:
    // 0x1f36c8: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x1f36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1f36cc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1f36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1f36d0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1f36d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1f36d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f36d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f36d8: 0x29280004  slti        $t0, $t1, 0x4
    ctx->pc = 0x1f36d8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f36dc: 0x24430320  addiu       $v1, $v0, 0x320
    ctx->pc = 0x1f36dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x1f36e0: 0x24420310  addiu       $v0, $v0, 0x310
    ctx->pc = 0x1f36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
    // 0x1f36e4: 0x1823021  addu        $a2, $t4, $v0
    ctx->pc = 0x1f36e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1f36e8: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x1f36e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1f36ec: 0x1622021  addu        $a0, $t3, $v0
    ctx->pc = 0x1f36ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1f36f0: 0x1422821  addu        $a1, $t2, $v0
    ctx->pc = 0x1f36f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1f36f4: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x1f36f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1f36f8: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x1f36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1f36fc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f36fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f3700: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1f3700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1f3704: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f3704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f3708: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1f3708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1f370c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f370cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1f3710: 0x1500ffed  bnez        $t0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1F3710u;
    {
        const bool branch_taken_0x1f3710 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3710u;
        // 0x1f3714: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3710) {
            ctx->pc = 0x1F36C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f36c8;
        }
    }
    ctx->pc = 0x1F3718u;
    // 0x1f3718: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x1f3718u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f371c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f371cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3720: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1f3720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1f3724: 0x0  nop
    ctx->pc = 0x1f3724u;
    // NOP
label_1f3728:
    // 0x1f3728: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1f3728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f372c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f372cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f3730: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f3730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f3734: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x1f3734u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f3738: 0x0  nop
    ctx->pc = 0x1f3738u;
    // NOP
    // 0x1f373c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F373Cu;
    {
        const bool branch_taken_0x1f373c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F373Cu;
        // 0x1f3740: 0xa4400220  sh          $zero, 0x220($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 544), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f373c) {
            ctx->pc = 0x1F3728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3728;
        }
    }
    ctx->pc = 0x1F3744u;
    // 0x1f3744: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f3744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3748:
    // 0x1f3748: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1f3748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1f374c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f374cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f3750: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x1f3750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f3754: 0x28e50006  slti        $a1, $a3, 0x6
    ctx->pc = 0x1f3754u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f3758: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1f3758u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f375c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f375cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3760: 0xac600240  sw          $zero, 0x240($v1)
    ctx->pc = 0x1f3760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 576), GPR_U32(ctx, 0));
    // 0x1f3764: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f3764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3768: 0xac800244  sw          $zero, 0x244($a0)
    ctx->pc = 0x1f3768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 580), GPR_U32(ctx, 0));
    // 0x1f376c: 0xac400248  sw          $zero, 0x248($v0)
    ctx->pc = 0x1f376cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 0));
    // 0x1f3770: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F3770u;
    {
        const bool branch_taken_0x1f3770 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3770u;
        // 0x1f3774: 0xacc0024c  sw          $zero, 0x24C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3770) {
            ctx->pc = 0x1F3748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3748;
        }
    }
    ctx->pc = 0x1F3778u;
    // 0x1f3778: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1f3778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f377c: 0xa20001b8  sb          $zero, 0x1B8($s0)
    ctx->pc = 0x1f377cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 440), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3780: 0xa20001b9  sb          $zero, 0x1B9($s0)
    ctx->pc = 0x1f3780u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 441), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3788: 0xa21101bb  sb          $s1, 0x1BB($s0)
    ctx->pc = 0x1f3788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 443), (uint8_t)GPR_U32(ctx, 17));
    // 0x1f378c: 0xae0002f0  sw          $zero, 0x2F0($s0)
    ctx->pc = 0x1f378cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 0));
    // 0x1f3790: 0xae0007f8  sw          $zero, 0x7F8($s0)
    ctx->pc = 0x1f3790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2040), GPR_U32(ctx, 0));
    // 0x1f3794: 0xae000800  sw          $zero, 0x800($s0)
    ctx->pc = 0x1f3794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2048), GPR_U32(ctx, 0));
    // 0x1f3798: 0xae0007f0  sw          $zero, 0x7F0($s0)
    ctx->pc = 0x1f3798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2032), GPR_U32(ctx, 0));
    // 0x1f379c: 0xae0007e0  sw          $zero, 0x7E0($s0)
    ctx->pc = 0x1f379cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2016), GPR_U32(ctx, 0));
    // 0x1f37a0: 0xae0007e4  sw          $zero, 0x7E4($s0)
    ctx->pc = 0x1f37a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2020), GPR_U32(ctx, 0));
    // 0x1f37a4: 0xc07d4e8  jal         func_1F53A0
    ctx->pc = 0x1F37A4u;
    SET_GPR_U32(ctx, 31, 0x1F37ACu);
    ctx->pc = 0x1F37A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37A4u;
    // 0x1f37a8: 0xae0007e8  sw          $zero, 0x7E8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2024), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F53A0u, 0x1F37A4u, 0x1F37ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37ACu;
label_1f37ac:
    // 0x1f37ac: 0x26020520  addiu       $v0, $s0, 0x520
    ctx->pc = 0x1f37acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x1f37b0: 0xae0205c0  sw          $v0, 0x5C0($s0)
    ctx->pc = 0x1f37b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1472), GPR_U32(ctx, 2));
    // 0x1f37b4: 0xc07f81c  jal         func_1FE070
    ctx->pc = 0x1F37B4u;
    SET_GPR_U32(ctx, 31, 0x1F37BCu);
    ctx->pc = 0x1F37B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37B4u;
    // 0x1f37b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE070u, 0x1F37B4u, 0x1F37BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37BCu;
label_1f37bc:
    // 0x1f37bc: 0xc080210  jal         func_200840
    ctx->pc = 0x1F37BCu;
    SET_GPR_U32(ctx, 31, 0x1F37C4u);
    ctx->pc = 0x1F37C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37BCu;
    // 0x1f37c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200840u, 0x1F37BCu, 0x1F37C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37C4u;
label_1f37c4:
    // 0x1f37c4: 0xc081dea  jal         func_2077A8
    ctx->pc = 0x1F37C4u;
    SET_GPR_U32(ctx, 31, 0x1F37CCu);
    ctx->pc = 0x1F37C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37C4u;
    // 0x1f37c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2077A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2077A8u, 0x1F37C4u, 0x1F37CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37CCu;
label_1f37cc:
    // 0x1f37cc: 0xc09d940  jal         func_276500
    ctx->pc = 0x1F37CCu;
    SET_GPR_U32(ctx, 31, 0x1F37D4u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x1F37CCu, 0x1F37D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37D4u;
label_1f37d4:
    // 0x1f37d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F37D4u;
    {
        const bool branch_taken_0x1f37d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f37d4) {
            ctx->pc = 0x1F37D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F37D4u;
            // 0x1f37d8: 0xa21101c0  sb          $s1, 0x1C0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 448), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F37E8u;
            goto label_1f37e8;
        }
    }
    ctx->pc = 0x1F37DCu;
    // 0x1f37dc: 0xc09dc34  jal         func_2770D0
    ctx->pc = 0x1F37DCu;
    SET_GPR_U32(ctx, 31, 0x1F37E4u);
    ctx->pc = 0x2770D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2770D0u, 0x1F37DCu, 0x1F37E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37E4u;
label_1f37e4:
    // 0x1f37e4: 0xa20201c0  sb          $v0, 0x1C0($s0)
    ctx->pc = 0x1f37e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 448), (uint8_t)GPR_U32(ctx, 2));
label_1f37e8:
    // 0x1f37e8: 0x920301bc  lbu         $v1, 0x1BC($s0)
    ctx->pc = 0x1f37e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1f37ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f37f0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F37F0u;
    {
        const bool branch_taken_0x1f37f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F37F0u;
        // 0x1f37f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f37f0) {
            ctx->pc = 0x1F3820u;
            goto label_1f3820;
        }
    }
    ctx->pc = 0x1F37F8u;
    // 0x1f37f8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f37f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1f37fc: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x1f37fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1f3800: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1f3800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1f3804: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3804u;
    {
        const bool branch_taken_0x1f3804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3804) {
            ctx->pc = 0x1F3808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3804u;
            // 0x1f3808: 0xa20001c0  sb          $zero, 0x1C0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 448), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F382Cu;
            goto label_1f382c;
        }
    }
    ctx->pc = 0x1F380Cu;
    // 0x1f380c: 0xc07ec0a  jal         func_1FB028
    ctx->pc = 0x1F380Cu;
    SET_GPR_U32(ctx, 31, 0x1F3814u);
    ctx->pc = 0x1FB028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB028u, 0x1F380Cu, 0x1F3814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3814u;
label_1f3814:
    // 0x1f3814: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3814u;
    {
        const bool branch_taken_0x1f3814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3814u;
        // 0x1f3818: 0xa20201c0  sb          $v0, 0x1C0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 448), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3814) {
            ctx->pc = 0x1F382Cu;
            goto label_1f382c;
        }
    }
    ctx->pc = 0x1F381Cu;
    // 0x1f381c: 0x0  nop
    ctx->pc = 0x1f381cu;
    // NOP
label_1f3820:
    // 0x1f3820: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3820u;
    {
        const bool branch_taken_0x1f3820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3820) {
            ctx->pc = 0x1F3824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3820u;
            // 0x1f3824: 0xae0008a0  sw          $zero, 0x8A0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2208), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3830u;
            goto label_1f3830;
        }
    }
    ctx->pc = 0x1F3828u;
    // 0x1f3828: 0xa20001c0  sb          $zero, 0x1C0($s0)
    ctx->pc = 0x1f3828u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 448), (uint8_t)GPR_U32(ctx, 0));
label_1f382c:
    // 0x1f382c: 0xae0008a0  sw          $zero, 0x8A0($s0)
    ctx->pc = 0x1f382cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2208), GPR_U32(ctx, 0));
label_1f3830:
    // 0x1f3830: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f3830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f3834: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f3834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3838: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f3838u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f383c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f383cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f3840: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f3840u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3844: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f3844u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3848: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f3848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f384c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F384Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F384Cu;
        // 0x1f3850: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F384Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3854u;
    // 0x1f3854: 0x0  nop
    ctx->pc = 0x1f3854u;
    // NOP
    ctx->pc = 0x1f3858u;
}
