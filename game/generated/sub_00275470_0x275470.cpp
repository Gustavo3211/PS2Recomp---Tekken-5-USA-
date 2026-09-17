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

// Function: sub_00275470
// Address: 0x275470 - 0x275860
void sub_00275470_0x275470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275470_0x275470");
#endif

    switch (ctx->pc) {
        case 0x2754c4u: goto label_2754c4;
        case 0x2754e0u: goto label_2754e0;
        case 0x2754ecu: goto label_2754ec;
        case 0x275510u: goto label_275510;
        case 0x275518u: goto label_275518;
        case 0x275534u: goto label_275534;
        case 0x275568u: goto label_275568;
        case 0x275574u: goto label_275574;
        case 0x2755b0u: goto label_2755b0;
        case 0x2755c8u: goto label_2755c8;
        case 0x2755d8u: goto label_2755d8;
        case 0x2755e8u: goto label_2755e8;
        case 0x275708u: goto label_275708;
        case 0x275770u: goto label_275770;
        case 0x27577cu: goto label_27577c;
        case 0x2757a0u: goto label_2757a0;
        case 0x2757a8u: goto label_2757a8;
        case 0x2757c4u: goto label_2757c4;
        case 0x275818u: goto label_275818;
        default: break;
    }

    ctx->pc = 0x275470u;

    // 0x275470: 0x27bdf2b0  addiu       $sp, $sp, -0xD50
    ctx->pc = 0x275470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963888));
    // 0x275474: 0xffb50cf8  sd          $s5, 0xCF8($sp)
    ctx->pc = 0x275474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3320), GPR_U64(ctx, 21));
    // 0x275478: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x275478u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27547c: 0xffb30ce8  sd          $s3, 0xCE8($sp)
    ctx->pc = 0x27547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3304), GPR_U64(ctx, 19));
    // 0x275480: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x275480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275484: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x275484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275488: 0xffb60d00  sd          $s6, 0xD00($sp)
    ctx->pc = 0x275488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3328), GPR_U64(ctx, 22));
    // 0x27548c: 0xffb70d08  sd          $s7, 0xD08($sp)
    ctx->pc = 0x27548cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3336), GPR_U64(ctx, 23));
    // 0x275490: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x275490u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275494: 0xffb00cd0  sd          $s0, 0xCD0($sp)
    ctx->pc = 0x275494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3280), GPR_U64(ctx, 16));
    // 0x275498: 0xffb10cd8  sd          $s1, 0xCD8($sp)
    ctx->pc = 0x275498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3288), GPR_U64(ctx, 17));
    // 0x27549c: 0xffb20ce0  sd          $s2, 0xCE0($sp)
    ctx->pc = 0x27549cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3296), GPR_U64(ctx, 18));
    // 0x2754a0: 0xffb40cf0  sd          $s4, 0xCF0($sp)
    ctx->pc = 0x2754a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3312), GPR_U64(ctx, 20));
    // 0x2754a4: 0xffbe0d10  sd          $fp, 0xD10($sp)
    ctx->pc = 0x2754a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3344), GPR_U64(ctx, 30));
    // 0x2754a8: 0xffbf0d18  sd          $ra, 0xD18($sp)
    ctx->pc = 0x2754a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3352), GPR_U64(ctx, 31));
    // 0x2754ac: 0xe7b80d40  swc1        $f24, 0xD40($sp)
    ctx->pc = 0x2754acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3392), bits); }
    // 0x2754b0: 0xe7b70d38  swc1        $f23, 0xD38($sp)
    ctx->pc = 0x2754b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3384), bits); }
    // 0x2754b4: 0xe7b60d30  swc1        $f22, 0xD30($sp)
    ctx->pc = 0x2754b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3376), bits); }
    // 0x2754b8: 0xe7b50d28  swc1        $f21, 0xD28($sp)
    ctx->pc = 0x2754b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3368), bits); }
    // 0x2754bc: 0xc097d14  jal         func_25F450
    ctx->pc = 0x2754BCu;
    SET_GPR_U32(ctx, 31, 0x2754C4u);
    ctx->pc = 0x2754C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2754BCu;
    // 0x2754c0: 0xe7b40d20  swc1        $f20, 0xD20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3360), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F450u, 0x2754BCu, 0x2754C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2754C4u;
label_2754c4:
    // 0x2754c4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2754c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2754c8: 0x126000a3  beqz        $s3, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2754C8u;
    {
        const bool branch_taken_0x2754c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754C8u;
        // 0x2754cc: 0xaf96ca40  sw          $s6, -0x35C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953536), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754c8) {
            ctx->pc = 0x275758u;
            goto label_275758;
        }
    }
    ctx->pc = 0x2754D0u;
    // 0x2754d0: 0x1ac0001c  blez        $s6, . + 4 + (0x1C << 2)
    ctx->pc = 0x2754D0u;
    {
        const bool branch_taken_0x2754d0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2754D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754D0u;
        // 0x2754d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754d0) {
            ctx->pc = 0x275544u;
            goto label_275544;
        }
    }
    ctx->pc = 0x2754D8u;
    // 0x2754d8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2754d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x2754dc: 0x245eff88  addiu       $fp, $v0, -0x78
    ctx->pc = 0x2754dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
label_2754e0:
    // 0x2754e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2754e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2754e4: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2754E4u;
    SET_GPR_U32(ctx, 31, 0x2754ECu);
    ctx->pc = 0x2754E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2754E4u;
    // 0x2754e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2754E4u, 0x2754ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2754ECu;
label_2754ec:
    // 0x2754ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2754ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2754f0: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x2754f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2754f4: 0x27a30200  addiu       $v1, $sp, 0x200
    ctx->pc = 0x2754f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2754f8: 0x3b08821  addu        $s1, $sp, $s0
    ctx->pc = 0x2754f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x2754fc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2754fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275500: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x275500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x275504: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x275504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275508: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x275508u;
    SET_GPR_U32(ctx, 31, 0x275510u);
    ctx->pc = 0x27550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275508u;
    // 0x27550c: 0x21e8021  addu        $s0, $s0, $fp (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x275508u, 0x275510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275510u;
label_275510:
    // 0x275510: 0xc0404da  jal         func_101368
    ctx->pc = 0x275510u;
    SET_GPR_U32(ctx, 31, 0x275518u);
    ctx->pc = 0x275514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275510u;
    // 0x275514: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101368u, 0x275510u, 0x275518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275518u;
label_275518:
    // 0x275518: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x275518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27551c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x27551cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x275520: 0x26850002  addiu       $a1, $s4, 0x2
    ctx->pc = 0x275520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x275524: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x275524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x275528: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x275528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27552c: 0xc098d78  jal         func_2635E0
    ctx->pc = 0x27552Cu;
    SET_GPR_U32(ctx, 31, 0x275534u);
    ctx->pc = 0x275530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27552Cu;
    // 0x275530: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2635E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2635E0u, 0x27552Cu, 0x275534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275534u;
label_275534:
    // 0x275534: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x275534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x275538: 0x296182a  slt         $v1, $s4, $s6
    ctx->pc = 0x275538u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x27553c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x27553Cu;
    {
        const bool branch_taken_0x27553c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x275540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27553Cu;
        // 0x275540: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27553c) {
            ctx->pc = 0x2754E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2754e0;
        }
    }
    ctx->pc = 0x275544u;
label_275544:
    // 0x275544: 0x8f82ae90  lw          $v0, -0x5170($gp)
    ctx->pc = 0x275544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x275548: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x275548u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27554c: 0x184000a1  blez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x27554Cu;
    {
        const bool branch_taken_0x27554c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x275550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27554Cu;
        // 0x275550: 0xaf80ae94  sw          $zero, -0x516C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27554c) {
            ctx->pc = 0x2757D4u;
            goto label_2757d4;
        }
    }
    ctx->pc = 0x275554u;
    // 0x275554: 0xc7988c14  lwc1        $f24, -0x73EC($gp)
    ctx->pc = 0x275554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x275558: 0xc7948c18  lwc1        $f20, -0x73E8($gp)
    ctx->pc = 0x275558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27555c: 0xc7978c1c  lwc1        $f23, -0x73E4($gp)
    ctx->pc = 0x27555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x275560: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x275560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x275564: 0xc7958c20  lwc1        $f21, -0x73E0($gp)
    ctx->pc = 0x275564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_275568:
    // 0x275568: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x275568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27556c: 0xc09187a  jal         func_2461E8
    ctx->pc = 0x27556Cu;
    SET_GPR_U32(ctx, 31, 0x275574u);
    ctx->pc = 0x275570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27556Cu;
    // 0x275570: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2461E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2461E8u, 0x27556Cu, 0x275574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275574u;
label_275574:
    // 0x275574: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x275574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275578: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x275578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27557c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x27557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x275580: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x275580u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x275584: 0x1012  mflo        $v0
    ctx->pc = 0x275584u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x275588: 0x56182a  slt         $v1, $v0, $s6
    ctx->pc = 0x275588u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x27558c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x27558cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x275590: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x275590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x275594: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x275594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x275598: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x275598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27559c: 0xae700054  sw          $s0, 0x54($s3)
    ctx->pc = 0x27559cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 16));
    // 0x2755a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2755a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755a4: 0xae7000bc  sw          $s0, 0xBC($s3)
    ctx->pc = 0x2755a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 16));
    // 0x2755a8: 0xc07ce16  jal         func_1F3858
    ctx->pc = 0x2755A8u;
    SET_GPR_U32(ctx, 31, 0x2755B0u);
    ctx->pc = 0x2755ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2755A8u;
    // 0x2755ac: 0xae700050  sw          $s0, 0x50($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3858u, 0x2755A8u, 0x2755B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755B0u;
label_2755b0:
    // 0x2755b0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2755b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2755b4: 0xae71004c  sw          $s1, 0x4C($s3)
    ctx->pc = 0x2755b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 17));
    // 0x2755b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2755b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2755bc: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x2755bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x2755c0: 0xc09175c  jal         func_245D70
    ctx->pc = 0x2755C0u;
    SET_GPR_U32(ctx, 31, 0x2755C8u);
    ctx->pc = 0x2755C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2755C0u;
    // 0x2755c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D70u, 0x2755C0u, 0x2755C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755C8u;
label_2755c8:
    // 0x2755c8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2755c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2755cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2755ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755d0: 0xc0917c0  jal         func_245F00
    ctx->pc = 0x2755D0u;
    SET_GPR_U32(ctx, 31, 0x2755D8u);
    ctx->pc = 0x2755D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2755D0u;
    // 0x2755d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245F00u, 0x2755D0u, 0x2755D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755D8u;
label_2755d8:
    // 0x2755d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2755d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2755dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755e0: 0xc0b160a  jal         func_2C5828
    ctx->pc = 0x2755E0u;
    SET_GPR_U32(ctx, 31, 0x2755E8u);
    ctx->pc = 0x2755E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2755E0u;
    // 0x2755e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5828u, 0x2755E0u, 0x2755E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755E8u;
label_2755e8:
    // 0x2755e8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2755e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2755ec: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x2755ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2755f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2755F0u;
    {
        const bool branch_taken_0x2755f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2755F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755F0u;
        // 0x2755f4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2755f0) {
            ctx->pc = 0x275600u;
            goto label_275600;
        }
    }
    ctx->pc = 0x2755F8u;
    // 0x2755f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2755F8u;
    {
        const bool branch_taken_0x2755f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2755FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755F8u;
        // 0x2755fc: 0x46140041  sub.s       $f1, $f0, $f20 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2755f8) {
            ctx->pc = 0x27560Cu;
            goto label_27560c;
        }
    }
    ctx->pc = 0x275600u;
label_275600:
    // 0x275600: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x275600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275604: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x275604u;
    {
        const bool branch_taken_0x275604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275604) {
            ctx->pc = 0x275608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275604u;
            // 0x275608: 0x46140040  add.s       $f1, $f0, $f20 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27560Cu;
            goto label_27560c;
        }
    }
    ctx->pc = 0x27560Cu;
label_27560c:
    // 0x27560c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x27560cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x275610: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x275610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275614: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x275614u;
    {
        const bool branch_taken_0x275614 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275614) {
            ctx->pc = 0x275618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275614u;
            // 0x275618: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27561Cu;
            goto label_27561c;
        }
    }
    ctx->pc = 0x27561Cu;
label_27561c:
    // 0x27561c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27561cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x275620: 0xc7828c24  lwc1        $f2, -0x73DC($gp)
    ctx->pc = 0x275620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275624: 0x0  nop
    ctx->pc = 0x275624u;
    // NOP
    // 0x275628: 0x0  nop
    ctx->pc = 0x275628u;
    // NOP
    // 0x27562c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x27562cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x275630: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x275630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x275634: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x275634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x275638: 0xa662000c  sh          $v0, 0xC($s3)
    ctx->pc = 0x275638u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x27563c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x27563cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275640: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x275640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275644: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x275644u;
    {
        const bool branch_taken_0x275644 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275644u;
        // 0x275648: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275644) {
            ctx->pc = 0x275658u;
            goto label_275658;
        }
    }
    ctx->pc = 0x27564Cu;
    // 0x27564c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27564Cu;
    {
        const bool branch_taken_0x27564c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27564Cu;
        // 0x275650: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27564c) {
            ctx->pc = 0x275664u;
            goto label_275664;
        }
    }
    ctx->pc = 0x275654u;
    // 0x275654: 0x0  nop
    ctx->pc = 0x275654u;
    // NOP
label_275658:
    // 0x275658: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x275658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27565c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27565Cu;
    {
        const bool branch_taken_0x27565c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27565c) {
            ctx->pc = 0x275660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27565Cu;
            // 0x275660: 0x46020040  add.s       $f1, $f0, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x275664u;
            goto label_275664;
        }
    }
    ctx->pc = 0x275664u;
label_275664:
    // 0x275664: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x275664u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x275668: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x275668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27566c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27566Cu;
    {
        const bool branch_taken_0x27566c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27566c) {
            ctx->pc = 0x275670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27566Cu;
            // 0x275670: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x275674u;
            goto label_275674;
        }
    }
    ctx->pc = 0x275674u;
label_275674:
    // 0x275674: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x275674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x275678: 0xc7828c28  lwc1        $f2, -0x73D8($gp)
    ctx->pc = 0x275678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27567c: 0x0  nop
    ctx->pc = 0x27567cu;
    // NOP
    // 0x275680: 0x0  nop
    ctx->pc = 0x275680u;
    // NOP
    // 0x275684: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x275684u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x275688: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x275688u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27568c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27568cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x275690: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x275690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x275694: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x275694u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x275698: 0xa662000e  sh          $v0, 0xE($s3)
    ctx->pc = 0x275698u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x27569c: 0xa662007a  sh          $v0, 0x7A($s3)
    ctx->pc = 0x27569cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x2756a0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2756a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2756a4: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x2756a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2756a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2756A8u;
    {
        const bool branch_taken_0x2756a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2756ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756A8u;
        // 0x2756ac: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2756a8) {
            ctx->pc = 0x2756B8u;
            goto label_2756b8;
        }
    }
    ctx->pc = 0x2756B0u;
    // 0x2756b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2756B0u;
    {
        const bool branch_taken_0x2756b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2756B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756B0u;
        // 0x2756b4: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2756b0) {
            ctx->pc = 0x2756C4u;
            goto label_2756c4;
        }
    }
    ctx->pc = 0x2756B8u;
label_2756b8:
    // 0x2756b8: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x2756b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2756bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2756BCu;
    {
        const bool branch_taken_0x2756bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2756bc) {
            ctx->pc = 0x2756C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2756BCu;
            // 0x2756c0: 0x46020040  add.s       $f1, $f0, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2756C4u;
            goto label_2756c4;
        }
    }
    ctx->pc = 0x2756C4u;
label_2756c4:
    // 0x2756c4: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2756c4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x2756c8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2756c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2756cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2756CCu;
    {
        const bool branch_taken_0x2756cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2756cc) {
            ctx->pc = 0x2756D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2756CCu;
            // 0x2756d0: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2756D4u;
            goto label_2756d4;
        }
    }
    ctx->pc = 0x2756D4u;
label_2756d4:
    // 0x2756d4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2756d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2756d8: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x2756d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2756dc: 0xc66d0008  lwc1        $f13, 0x8($s3)
    ctx->pc = 0x2756dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2756e0: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2756e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2756e4: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2756e4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2756e8: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x2756e8u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x2756ec: 0x0  nop
    ctx->pc = 0x2756ecu;
    // NOP
    // 0x2756f0: 0x0  nop
    ctx->pc = 0x2756f0u;
    // NOP
    // 0x2756f4: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2756f4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2756f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2756f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2756fc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2756fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x275700: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x275700u;
    SET_GPR_U32(ctx, 31, 0x275708u);
    ctx->pc = 0x275704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275700u;
    // 0x275704: 0xa6620010  sh          $v0, 0x10($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x275700u, 0x275708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275708u;
label_275708:
    // 0x275708: 0x8e620898  lw          $v0, 0x898($s3)
    ctx->pc = 0x275708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2200)));
    // 0x27570c: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x27570cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x275710: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x275710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x275714: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x275714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x275718: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275718u;
    {
        const bool branch_taken_0x275718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275718u;
        // 0x27571c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275718) {
            ctx->pc = 0x27572Cu;
            goto label_27572c;
        }
    }
    ctx->pc = 0x275720u;
    // 0x275720: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x275720u;
    {
        const bool branch_taken_0x275720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x275724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275720u;
        // 0x275724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275720) {
            ctx->pc = 0x27572Cu;
            goto label_27572c;
        }
    }
    ctx->pc = 0x275728u;
    // 0x275728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27572c:
    // 0x27572c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27572Cu;
    {
        const bool branch_taken_0x27572c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27572Cu;
        // 0x275730: 0x8f82ae94  lw          $v0, -0x516C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27572c) {
            ctx->pc = 0x27573Cu;
            goto label_27573c;
        }
    }
    ctx->pc = 0x275734u;
    // 0x275734: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x275734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x275738: 0xaf82ae94  sw          $v0, -0x516C($gp)
    ctx->pc = 0x275738u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946452), GPR_U32(ctx, 2));
label_27573c:
    // 0x27573c: 0x8f82ae90  lw          $v0, -0x5170($gp)
    ctx->pc = 0x27573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x275740: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x275740u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x275744: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x275744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x275748: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x275748u;
    {
        const bool branch_taken_0x275748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275748u;
        // 0x27574c: 0x267308d0  addiu       $s3, $s3, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275748) {
            ctx->pc = 0x275568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275568;
        }
    }
    ctx->pc = 0x275750u;
    // 0x275750: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x275750u;
    {
        const bool branch_taken_0x275750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275750u;
        // 0x275754: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275750) {
            ctx->pc = 0x2757D8u;
            goto label_2757d8;
        }
    }
    ctx->pc = 0x275758u;
label_275758:
    // 0x275758: 0x1ac0001e  blez        $s6, . + 4 + (0x1E << 2)
    ctx->pc = 0x275758u;
    {
        const bool branch_taken_0x275758 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x27575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275758u;
        // 0x27575c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275758) {
            ctx->pc = 0x2757D4u;
            goto label_2757d4;
        }
    }
    ctx->pc = 0x275760u;
    // 0x275760: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x275760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x275764: 0x27b30400  addiu       $s3, $sp, 0x400
    ctx->pc = 0x275764u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x275768: 0x245eff88  addiu       $fp, $v0, -0x78
    ctx->pc = 0x275768u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x27576c: 0x0  nop
    ctx->pc = 0x27576cu;
    // NOP
label_275770:
    // 0x275770: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x275770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275774: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x275774u;
    SET_GPR_U32(ctx, 31, 0x27577Cu);
    ctx->pc = 0x275778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275774u;
    // 0x275778: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x275774u, 0x27577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27577Cu;
label_27577c:
    // 0x27577c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27577cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275780: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x275780u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x275784: 0x27a30200  addiu       $v1, $sp, 0x200
    ctx->pc = 0x275784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x275788: 0x3b08821  addu        $s1, $sp, $s0
    ctx->pc = 0x275788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x27578c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x27578cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275790: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x275790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x275794: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x275794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275798: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x275798u;
    SET_GPR_U32(ctx, 31, 0x2757A0u);
    ctx->pc = 0x27579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275798u;
    // 0x27579c: 0x21e8021  addu        $s0, $s0, $fp (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x275798u, 0x2757A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2757A0u;
label_2757a0:
    // 0x2757a0: 0xc0404da  jal         func_101368
    ctx->pc = 0x2757A0u;
    SET_GPR_U32(ctx, 31, 0x2757A8u);
    ctx->pc = 0x2757A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2757A0u;
    // 0x2757a4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101368u, 0x2757A0u, 0x2757A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2757A8u;
label_2757a8:
    // 0x2757a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2757a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2757ac: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2757acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2757b0: 0x26850002  addiu       $a1, $s4, 0x2
    ctx->pc = 0x2757b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x2757b4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2757b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2757b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2757b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2757bc: 0xc098d78  jal         func_2635E0
    ctx->pc = 0x2757BCu;
    SET_GPR_U32(ctx, 31, 0x2757C4u);
    ctx->pc = 0x2757C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2757BCu;
    // 0x2757c0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2635E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2635E0u, 0x2757BCu, 0x2757C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2757C4u;
label_2757c4:
    // 0x2757c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2757c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2757c8: 0x296182a  slt         $v1, $s4, $s6
    ctx->pc = 0x2757c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2757cc: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2757CCu;
    {
        const bool branch_taken_0x2757cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2757D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757CCu;
        // 0x2757d0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2757cc) {
            ctx->pc = 0x275770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275770;
        }
    }
    ctx->pc = 0x2757D4u;
label_2757d4:
    // 0x2757d4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2757d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2757d8:
    // 0x2757d8: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x2757d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936704)));
    // 0x2757dc: 0x2c44001e  sltiu       $a0, $v0, 0x1E
    ctx->pc = 0x2757dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x2757e0: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x2757e0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2757e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2757e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2757e8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2757e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2757ec: 0x24213180  addiu       $at, $at, 0x3180
    ctx->pc = 0x2757ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 12672));
    // 0x2757f0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2757f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2757f4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2757f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2757f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2757f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2757fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2757fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x275800: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x275800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275804: 0xaf83ae9c  sw          $v1, -0x5164($gp)
    ctx->pc = 0x275804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946460), GPR_U32(ctx, 3));
    // 0x275808: 0xaf84aea0  sw          $a0, -0x5160($gp)
    ctx->pc = 0x275808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946464), GPR_U32(ctx, 4));
    // 0x27580c: 0xe780ca38  swc1        $f0, -0x35C8($gp)
    ctx->pc = 0x27580cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294953528), bits); }
    // 0x275810: 0xc0b12ee  jal         func_2C4BB8
    ctx->pc = 0x275810u;
    SET_GPR_U32(ctx, 31, 0x275818u);
    ctx->pc = 0x275814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275810u;
    // 0x275814: 0xe781ca3c  swc1        $f1, -0x35C4($gp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294953532), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4BB8u, 0x275810u, 0x275818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275818u;
label_275818:
    // 0x275818: 0xdfb00cd0  ld          $s0, 0xCD0($sp)
    ctx->pc = 0x275818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 3280)));
    // 0x27581c: 0xdfb10cd8  ld          $s1, 0xCD8($sp)
    ctx->pc = 0x27581cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 3288)));
    // 0x275820: 0xdfb20ce0  ld          $s2, 0xCE0($sp)
    ctx->pc = 0x275820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 3296)));
    // 0x275824: 0xdfb30ce8  ld          $s3, 0xCE8($sp)
    ctx->pc = 0x275824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 3304)));
    // 0x275828: 0xdfb40cf0  ld          $s4, 0xCF0($sp)
    ctx->pc = 0x275828u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 3312)));
    // 0x27582c: 0xdfb50cf8  ld          $s5, 0xCF8($sp)
    ctx->pc = 0x27582cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 3320)));
    // 0x275830: 0xdfb60d00  ld          $s6, 0xD00($sp)
    ctx->pc = 0x275830u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 3328)));
    // 0x275834: 0xdfb70d08  ld          $s7, 0xD08($sp)
    ctx->pc = 0x275834u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 3336)));
    // 0x275838: 0xdfbe0d10  ld          $fp, 0xD10($sp)
    ctx->pc = 0x275838u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 3344)));
    // 0x27583c: 0xdfbf0d18  ld          $ra, 0xD18($sp)
    ctx->pc = 0x27583cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3352)));
    // 0x275840: 0xc7b80d40  lwc1        $f24, 0xD40($sp)
    ctx->pc = 0x275840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x275844: 0xc7b70d38  lwc1        $f23, 0xD38($sp)
    ctx->pc = 0x275844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x275848: 0xc7b60d30  lwc1        $f22, 0xD30($sp)
    ctx->pc = 0x275848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27584c: 0xc7b50d28  lwc1        $f21, 0xD28($sp)
    ctx->pc = 0x27584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x275850: 0xc7b40d20  lwc1        $f20, 0xD20($sp)
    ctx->pc = 0x275850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x275854: 0x3e00008  jr          $ra
    ctx->pc = 0x275854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275854u;
        // 0x275858: 0x27bd0d50  addiu       $sp, $sp, 0xD50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3408));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27585Cu;
    // 0x27585c: 0x0  nop
    ctx->pc = 0x27585cu;
    // NOP
    ctx->pc = 0x275860u;
}
