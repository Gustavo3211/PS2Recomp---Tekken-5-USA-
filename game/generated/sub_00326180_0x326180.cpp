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

// Function: sub_00326180
// Address: 0x326180 - 0x3262b8
void sub_00326180_0x326180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326180_0x326180");
#endif

    switch (ctx->pc) {
        case 0x326180u: goto label_326180;
        case 0x326184u: goto label_326184;
        case 0x326188u: goto label_326188;
        case 0x32618cu: goto label_32618c;
        case 0x326190u: goto label_326190;
        case 0x326194u: goto label_326194;
        case 0x326198u: goto label_326198;
        case 0x32619cu: goto label_32619c;
        case 0x3261a0u: goto label_3261a0;
        case 0x3261a4u: goto label_3261a4;
        case 0x3261a8u: goto label_3261a8;
        case 0x3261acu: goto label_3261ac;
        case 0x3261b0u: goto label_3261b0;
        case 0x3261b4u: goto label_3261b4;
        case 0x3261b8u: goto label_3261b8;
        case 0x3261bcu: goto label_3261bc;
        case 0x3261c0u: goto label_3261c0;
        case 0x3261c4u: goto label_3261c4;
        case 0x3261c8u: goto label_3261c8;
        case 0x3261ccu: goto label_3261cc;
        case 0x3261d0u: goto label_3261d0;
        case 0x3261d4u: goto label_3261d4;
        case 0x3261d8u: goto label_3261d8;
        case 0x3261dcu: goto label_3261dc;
        case 0x3261e0u: goto label_3261e0;
        case 0x3261e4u: goto label_3261e4;
        case 0x3261e8u: goto label_3261e8;
        case 0x3261ecu: goto label_3261ec;
        case 0x3261f0u: goto label_3261f0;
        case 0x3261f4u: goto label_3261f4;
        case 0x3261f8u: goto label_3261f8;
        case 0x3261fcu: goto label_3261fc;
        case 0x326200u: goto label_326200;
        case 0x326204u: goto label_326204;
        case 0x326208u: goto label_326208;
        case 0x32620cu: goto label_32620c;
        case 0x326210u: goto label_326210;
        case 0x326214u: goto label_326214;
        case 0x326218u: goto label_326218;
        case 0x32621cu: goto label_32621c;
        case 0x326220u: goto label_326220;
        case 0x326224u: goto label_326224;
        case 0x326228u: goto label_326228;
        case 0x32622cu: goto label_32622c;
        case 0x326230u: goto label_326230;
        case 0x326234u: goto label_326234;
        case 0x326238u: goto label_326238;
        case 0x32623cu: goto label_32623c;
        case 0x326240u: goto label_326240;
        case 0x326244u: goto label_326244;
        case 0x326248u: goto label_326248;
        case 0x32624cu: goto label_32624c;
        case 0x326250u: goto label_326250;
        case 0x326254u: goto label_326254;
        case 0x326258u: goto label_326258;
        case 0x32625cu: goto label_32625c;
        case 0x326260u: goto label_326260;
        case 0x326264u: goto label_326264;
        case 0x326268u: goto label_326268;
        case 0x32626cu: goto label_32626c;
        case 0x326270u: goto label_326270;
        case 0x326274u: goto label_326274;
        case 0x326278u: goto label_326278;
        case 0x32627cu: goto label_32627c;
        case 0x326280u: goto label_326280;
        case 0x326284u: goto label_326284;
        case 0x326288u: goto label_326288;
        case 0x32628cu: goto label_32628c;
        case 0x326290u: goto label_326290;
        case 0x326294u: goto label_326294;
        case 0x326298u: goto label_326298;
        case 0x32629cu: goto label_32629c;
        case 0x3262a0u: goto label_3262a0;
        case 0x3262a4u: goto label_3262a4;
        case 0x3262a8u: goto label_3262a8;
        case 0x3262acu: goto label_3262ac;
        case 0x3262b0u: goto label_3262b0;
        case 0x3262b4u: goto label_3262b4;
        default: break;
    }

    ctx->pc = 0x326180u;

label_326180:
    // 0x326180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x326180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_326184:
    // 0x326184: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x326184u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_326188:
    // 0x326188: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x326188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_32618c:
    // 0x32618c: 0x24f00d00  addiu       $s0, $a3, 0xD00
    ctx->pc = 0x32618cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 3328));
label_326190:
    // 0x326190: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x326190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_326194:
    // 0x326194: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x326194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_326198:
    // 0x326198: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x326198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_32619c:
    // 0x32619c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32619cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3261a0:
    // 0x3261a0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3261a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_3261a4:
    // 0x3261a4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3261a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3261a8:
    // 0x3261a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3261a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3261ac:
    // 0x3261ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3261acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3261b0:
    // 0x3261b0: 0x4824e000  qmfc2.ni    $a0, $vf28
    ctx->pc = 0x3261b0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[28]));
label_3261b4:
    // 0x3261b4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x3261b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3261b8:
    // 0x3261b8: 0x708310a8  pceqw       $v0, $a0, $v1
    ctx->pc = 0x3261b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_3261bc:
    // 0x3261bc: 0x4824e800  qmfc2.ni    $a0, $vf29
    ctx->pc = 0x3261bcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[29]));
label_3261c0:
    // 0x3261c0: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x3261c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3261c4:
    // 0x3261c4: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x3261c4u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_3261c8:
    // 0x3261c8: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3261c8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_3261cc:
    // 0x3261cc: 0x4824f000  qmfc2.ni    $a0, $vf30
    ctx->pc = 0x3261ccu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[30]));
label_3261d0:
    // 0x3261d0: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x3261d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_3261d4:
    // 0x3261d4: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x3261d4u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_3261d8:
    // 0x3261d8: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3261d8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_3261dc:
    // 0x3261dc: 0x4824f800  qmfc2.ni    $a0, $vf31
    ctx->pc = 0x3261dcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[31]));
label_3261e0:
    // 0x3261e0: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x3261e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_3261e4:
    // 0x3261e4: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x3261e4u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_3261e8:
    // 0x3261e8: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3261e8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_3261ec:
    // 0x3261ec: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x3261ecu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_3261f0:
    // 0x3261f0: 0x70422ec8  ppacb       $a1, $v0, $v0
    ctx->pc = 0x3261f0u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_3261f4:
    // 0x3261f4: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x3261f4u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
label_3261f8:
    // 0x3261f8: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_3261fc:
    if (ctx->pc == 0x3261FCu) {
        ctx->pc = 0x3261FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3261F8u;
        // 0x3261fc: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326200u;
        goto label_326200;
    }
    ctx->pc = 0x3261F8u;
    {
        const bool branch_taken_0x3261f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3261f8) {
            ctx->pc = 0x3261FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3261F8u;
            // 0x3261fc: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32622Cu;
            goto label_32622c;
        }
    }
    ctx->pc = 0x326200u;
label_326200:
    // 0x326200: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x326200u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
label_326204:
    // 0x326204: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x326204u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
label_326208:
    // 0x326208: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x326208u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
label_32620c:
    // 0x32620c: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x32620cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
label_326210:
    // 0x326210: 0xc0c88a2  jal         func_322288
label_326214:
    if (ctx->pc == 0x326214u) {
        ctx->pc = 0x326214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326210u;
        // 0x326214: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326218u;
        goto label_326218;
    }
    ctx->pc = 0x326210u;
    SET_GPR_U32(ctx, 31, 0x326218u);
    ctx->pc = 0x326214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326210u;
    // 0x326214: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322288u, 0x326210u, 0x326218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326218u;
label_326218:
    // 0x326218: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x326218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_32621c:
    // 0x32621c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x32621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_326220:
    // 0x326220: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x326220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_326224:
    // 0x326224: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x326224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_326228:
    // 0x326228: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x326228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_32622c:
    // 0x32622c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32622cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_326230:
    // 0x326230: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x326230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_326234:
    // 0x326234: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x326234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_326238:
    // 0x326238: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x326238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32623c:
    // 0x32623c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_326240:
    // 0x326240: 0x40f809  jalr        $v0
label_326244:
    if (ctx->pc == 0x326244u) {
        ctx->pc = 0x326244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326240u;
        // 0x326244: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326248u;
        goto label_326248;
    }
    ctx->pc = 0x326240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326248u);
        ctx->pc = 0x326244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326240u;
        // 0x326244: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326240u, 0x326248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326248u;
label_326248:
    // 0x326248: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x326248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_32624c:
    // 0x32624c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32624cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326250:
    // 0x326250: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x326250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_326254:
    // 0x326254: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x326254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_326258:
    // 0x326258: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x326258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32625c:
    // 0x32625c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_326260:
    // 0x326260: 0x40f809  jalr        $v0
label_326264:
    if (ctx->pc == 0x326264u) {
        ctx->pc = 0x326264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326260u;
        // 0x326264: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326268u;
        goto label_326268;
    }
    ctx->pc = 0x326260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326268u);
        ctx->pc = 0x326264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326260u;
        // 0x326264: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326260u, 0x326268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326268u;
label_326268:
    // 0x326268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32626c:
    // 0x32626c: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x32626cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_326270:
    // 0x326270: 0xc0c98ae  jal         func_3262B8
label_326274:
    if (ctx->pc == 0x326274u) {
        ctx->pc = 0x326274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326270u;
        // 0x326274: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326278u;
        goto label_326278;
    }
    ctx->pc = 0x326270u;
    SET_GPR_U32(ctx, 31, 0x326278u);
    ctx->pc = 0x326274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326270u;
    // 0x326274: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3262B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3262B8u, 0x326270u, 0x326278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326278u;
label_326278:
    // 0x326278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32627c:
    // 0x32627c: 0x8e670040  lw          $a3, 0x40($s3)
    ctx->pc = 0x32627cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_326280:
    // 0x326280: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x326280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_326284:
    // 0x326284: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x326284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_326288:
    // 0x326288: 0xc0d0ba8  jal         func_342EA0
label_32628c:
    if (ctx->pc == 0x32628Cu) {
        ctx->pc = 0x32628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326288u;
        // 0x32628c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326290u;
        goto label_326290;
    }
    ctx->pc = 0x326288u;
    SET_GPR_U32(ctx, 31, 0x326290u);
    ctx->pc = 0x32628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326288u;
    // 0x32628c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342EA0u, 0x326288u, 0x326290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326290u;
label_326290:
    // 0x326290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326294:
    // 0x326294: 0xc0d0b98  jal         func_342E60
label_326298:
    if (ctx->pc == 0x326298u) {
        ctx->pc = 0x326298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326294u;
        // 0x326298: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32629Cu;
        goto label_32629c;
    }
    ctx->pc = 0x326294u;
    SET_GPR_U32(ctx, 31, 0x32629Cu);
    ctx->pc = 0x326298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326294u;
    // 0x326298: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E60u, 0x326294u, 0x32629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32629Cu;
label_32629c:
    // 0x32629c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32629cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3262a0:
    // 0x3262a0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3262a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3262a4:
    // 0x3262a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3262a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3262a8:
    // 0x3262a8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3262a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3262ac:
    // 0x3262ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3262acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3262b0:
    // 0x3262b0: 0x3e00008  jr          $ra
label_3262b4:
    if (ctx->pc == 0x3262B4u) {
        ctx->pc = 0x3262B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3262B0u;
        // 0x3262b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3262B8u;
        goto label_fallthrough_0x3262b0;
    }
    ctx->pc = 0x3262B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3262B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3262B0u;
        // 0x3262b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3262B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3262b0:
    ctx->pc = 0x3262B8u;
}
