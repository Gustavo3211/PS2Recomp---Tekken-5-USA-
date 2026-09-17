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

// Function: sub_003400A8
// Address: 0x3400a8 - 0x3405d8
void sub_003400A8_0x3400a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003400A8_0x3400a8");
#endif

    switch (ctx->pc) {
        case 0x3400f8u: goto label_3400f8;
        case 0x340114u: goto label_340114;
        case 0x34013cu: goto label_34013c;
        case 0x340164u: goto label_340164;
        case 0x34018cu: goto label_34018c;
        case 0x34031cu: goto label_34031c;
        case 0x3403c4u: goto label_3403c4;
        case 0x34045cu: goto label_34045c;
        case 0x3404acu: goto label_3404ac;
        case 0x3404d8u: goto label_3404d8;
        case 0x340560u: goto label_340560;
        default: break;
    }

    ctx->pc = 0x3400a8u;

    // 0x3400a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3400a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3400ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3400acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3400b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3400b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3400b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3400b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3400b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3400b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3400bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3400bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3400c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3400c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3400c4: 0x24740d00  addiu       $s4, $v1, 0xD00
    ctx->pc = 0x3400c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 3328));
    // 0x3400c8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3400c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3400cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3400ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3400d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3400d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3400d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3400d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3400d8: 0x8cf30064  lw          $s3, 0x64($a3)
    ctx->pc = 0x3400d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 100)));
    // 0x3400dc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x3400dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x3400e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3400E0u;
    {
        const bool branch_taken_0x3400e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3400E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3400E0u;
        // 0x3400e4: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3400e0) {
            ctx->pc = 0x3400FCu;
            goto label_3400fc;
        }
    }
    ctx->pc = 0x3400E8u;
    // 0x3400e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3400e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3400ec: 0x26840068  addiu       $a0, $s4, 0x68
    ctx->pc = 0x3400ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 104));
    // 0x3400f0: 0xc0c8916  jal         func_322458
    ctx->pc = 0x3400F0u;
    SET_GPR_U32(ctx, 31, 0x3400F8u);
    ctx->pc = 0x3400F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3400F0u;
    // 0x3400f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322458u, 0x3400F0u, 0x3400F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3400F8u;
label_3400f8:
    // 0x3400f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3400f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3400fc:
    // 0x3400fc: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x3400fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x340100: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x340100u;
    {
        const bool branch_taken_0x340100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340100u;
        // 0x340104: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340100) {
            ctx->pc = 0x340118u;
            goto label_340118;
        }
    }
    ctx->pc = 0x340108u;
    // 0x340108: 0x26840068  addiu       $a0, $s4, 0x68
    ctx->pc = 0x340108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 104));
    // 0x34010c: 0xc0c88e6  jal         func_322398
    ctx->pc = 0x34010Cu;
    SET_GPR_U32(ctx, 31, 0x340114u);
    ctx->pc = 0x340110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34010Cu;
    // 0x340110: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322398u, 0x34010Cu, 0x340114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340114u;
label_340114:
    // 0x340114: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x340114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_340118:
    // 0x340118: 0x3262000c  andi        $v0, $s3, 0xC
    ctx->pc = 0x340118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)12);
    // 0x34011c: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x34011Cu;
    {
        const bool branch_taken_0x34011c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34011Cu;
        // 0x340120: 0x26900040  addiu       $s0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34011c) {
            ctx->pc = 0x3402E8u;
            goto label_3402e8;
        }
    }
    ctx->pc = 0x340124u;
    // 0x340124: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x340124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x340128: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x340128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x34012c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x34012Cu;
    {
        const bool branch_taken_0x34012c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34012c) {
            ctx->pc = 0x340130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34012Cu;
            // 0x340130: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x340154u;
            goto label_340154;
        }
    }
    ctx->pc = 0x340134u;
    // 0x340134: 0xc0c8c36  jal         func_3230D8
    ctx->pc = 0x340134u;
    SET_GPR_U32(ctx, 31, 0x34013Cu);
    ctx->pc = 0x340138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340134u;
    // 0x340138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3230D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3230D8u, 0x340134u, 0x34013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34013Cu;
label_34013c:
    // 0x34013c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x34013cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x340140: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x340140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x340144: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x340144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x340148: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x340148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x34014c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x34014cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340150: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x340150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_340154:
    // 0x340154: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x340154u;
    {
        const bool branch_taken_0x340154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340154) {
            ctx->pc = 0x340158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340154u;
            // 0x340158: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34017Cu;
            goto label_34017c;
        }
    }
    ctx->pc = 0x34015Cu;
    // 0x34015c: 0xc0c8c7e  jal         func_3231F8
    ctx->pc = 0x34015Cu;
    SET_GPR_U32(ctx, 31, 0x340164u);
    ctx->pc = 0x340160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34015Cu;
    // 0x340160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3231F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3231F8u, 0x34015Cu, 0x340164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340164u;
label_340164:
    // 0x340164: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x340164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x340168: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x340168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x34016c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34016cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x340170: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x340170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x340174: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x340174u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340178: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x340178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_34017c:
    // 0x34017c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x34017Cu;
    {
        const bool branch_taken_0x34017c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34017c) {
            ctx->pc = 0x340180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34017Cu;
            // 0x340180: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3401A0u;
            goto label_3401a0;
        }
    }
    ctx->pc = 0x340184u;
    // 0x340184: 0xc0c8b60  jal         func_322D80
    ctx->pc = 0x340184u;
    SET_GPR_U32(ctx, 31, 0x34018Cu);
    ctx->pc = 0x340188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340184u;
    // 0x340188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322D80u, 0x340184u, 0x34018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34018Cu;
label_34018c:
    // 0x34018c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x34018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x340190: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x340190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x340194: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x340194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x340198: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x340198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x34019c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x34019cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3401a0:
    // 0x3401a0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3401a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x3401a4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x3401a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3401a8: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3401A8u;
    {
        const bool branch_taken_0x3401a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3401a8) {
            ctx->pc = 0x3401ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3401A8u;
            // 0x3401ac: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3401C8u;
            goto label_3401c8;
        }
    }
    ctx->pc = 0x3401B0u;
    // 0x3401b0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3401b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x3401b4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3401b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3401b8: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x3401b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x3401bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3401BCu;
    {
        const bool branch_taken_0x3401bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3401C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3401BCu;
        // 0x3401c0: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3401bc) {
            ctx->pc = 0x3401D8u;
            goto label_3401d8;
        }
    }
    ctx->pc = 0x3401C4u;
    // 0x3401c4: 0x0  nop
    ctx->pc = 0x3401c4u;
    // NOP
label_3401c8:
    // 0x3401c8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3401c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3401cc: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x3401ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x3401d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3401d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3401d4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3401d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3401d8:
    // 0x3401d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3401d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3401dc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3401dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3401e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3401e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3401e4: 0x3c026808  lui         $v0, 0x6808
    ctx->pc = 0x3401e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26632 << 16));
    // 0x3401e8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3401e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3401ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3401ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3401f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3401f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3401f4: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x3401f4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3401f8: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x3401f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x3401fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3401fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x340200: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x340200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x340204: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x340204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x340208: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x340208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x34020c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x34020cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x340210: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x340210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x340214: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x340214u;
    {
        const bool branch_taken_0x340214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x340218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340214u;
        // 0x340218: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340214) {
            ctx->pc = 0x340230u;
            goto label_340230;
        }
    }
    ctx->pc = 0x34021Cu;
    // 0x34021c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x34021cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x340220: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x340220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x340224: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x340224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x340228: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x340228u;
    {
        const bool branch_taken_0x340228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340228u;
        // 0x34022c: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340228) {
            ctx->pc = 0x340244u;
            goto label_340244;
        }
    }
    ctx->pc = 0x340230u;
label_340230:
    // 0x340230: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x340230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x340234: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x340234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x340238: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x340238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x34023c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34023cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x340240: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x340240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_340244:
    // 0x340244: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x340244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x340248: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x340248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34024c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x34024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x340250: 0x3c026801  lui         $v0, 0x6801
    ctx->pc = 0x340250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26625 << 16));
    // 0x340254: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x340254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x340258: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x340258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34025c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x34025cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x340260: 0x70663389  pcpyld      $a2, $v1, $a2
    ctx->pc = 0x340260u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x340264: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x340264u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x340268: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x340268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34026c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34026cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x340270: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x340270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x340274: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x340274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x340278: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x340278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x34027c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x34027cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x340280: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x340280u;
    {
        const bool branch_taken_0x340280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x340284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340280u;
        // 0x340284: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340280) {
            ctx->pc = 0x3402A0u;
            goto label_3402a0;
        }
    }
    ctx->pc = 0x340288u;
    // 0x340288: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x340288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x34028c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34028cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x340290: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x340290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x340294: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x340294u;
    {
        const bool branch_taken_0x340294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340294u;
        // 0x340298: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340294) {
            ctx->pc = 0x3402B4u;
            goto label_3402b4;
        }
    }
    ctx->pc = 0x34029Cu;
    // 0x34029c: 0x0  nop
    ctx->pc = 0x34029cu;
    // NOP
label_3402a0:
    // 0x3402a0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x3402a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x3402a4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3402a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3402a8: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x3402a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x3402ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3402acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3402b0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3402b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3402b4:
    // 0x3402b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3402b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3402b8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3402b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3402bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3402bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3402c0: 0x3c036c06  lui         $v1, 0x6C06
    ctx->pc = 0x3402c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27654 << 16));
    // 0x3402c4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3402c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3402c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3402c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3402cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3402ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3402d0: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x3402d0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3402d4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x3402d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x3402d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3402d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3402dc: 0x24b10010  addiu       $s1, $a1, 0x10
    ctx->pc = 0x3402dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3402e0: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x3402e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x3402e4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3402e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3402e8:
    // 0x3402e8: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x3402e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
    // 0x3402ec: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3402ECu;
    {
        const bool branch_taken_0x3402ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3402F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3402ECu;
        // 0x3402f0: 0x26900040  addiu       $s0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3402ec) {
            ctx->pc = 0x3403A0u;
            goto label_3403a0;
        }
    }
    ctx->pc = 0x3402F4u;
    // 0x3402f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3402f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3402f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3402f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3402fc: 0x14430027  bne         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3402FCu;
    {
        const bool branch_taken_0x3402fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x340300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3402FCu;
        // 0x340300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3402fc) {
            ctx->pc = 0x34039Cu;
            goto label_34039c;
        }
    }
    ctx->pc = 0x340304u;
    // 0x340304: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x340304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x340308: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x340308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x34030c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x34030Cu;
    {
        const bool branch_taken_0x34030c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34030c) {
            ctx->pc = 0x340310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34030Cu;
            // 0x340310: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340330u;
            goto label_340330;
        }
    }
    ctx->pc = 0x340314u;
    // 0x340314: 0xc0c8cda  jal         func_323368
    ctx->pc = 0x340314u;
    SET_GPR_U32(ctx, 31, 0x34031Cu);
    ctx->pc = 0x340318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340314u;
    // 0x340318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323368u, 0x340314u, 0x34031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34031Cu;
label_34031c:
    // 0x34031c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x34031cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x340320: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x340320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x340324: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x340324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x340328: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x340328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x34032c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x34032cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_340330:
    // 0x340330: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x340330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x340334: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x340334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x340338: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x340338u;
    {
        const bool branch_taken_0x340338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x340338) {
            ctx->pc = 0x34033Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340338u;
            // 0x34033c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340358u;
            goto label_340358;
        }
    }
    ctx->pc = 0x340340u;
    // 0x340340: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x340340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x340344: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x340344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x340348: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x340348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x34034c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34034Cu;
    {
        const bool branch_taken_0x34034c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34034Cu;
        // 0x340350: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34034c) {
            ctx->pc = 0x340368u;
            goto label_340368;
        }
    }
    ctx->pc = 0x340354u;
    // 0x340354: 0x0  nop
    ctx->pc = 0x340354u;
    // NOP
label_340358:
    // 0x340358: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x340358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x34035c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34035cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x340360: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x340360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x340364: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x340364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_340368:
    // 0x340368: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x340368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34036c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x34036cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340370: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x340370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x340374: 0x3c03600a  lui         $v1, 0x600A
    ctx->pc = 0x340374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24586 << 16));
    // 0x340378: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x340378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x34037c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34037cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340380: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x340380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x340384: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x340384u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x340388: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x340388u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x34038c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x34038cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x340390: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x340390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x340394: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x340394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x340398: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x340398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_34039c:
    // 0x34039c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34039cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3403a0:
    // 0x3403a0: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x3403a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
    // 0x3403a4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3403A4u;
    {
        const bool branch_taken_0x3403a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3403A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403A4u;
        // 0x3403a8: 0x26900040  addiu       $s0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3403a4) {
            ctx->pc = 0x340444u;
            goto label_340444;
        }
    }
    ctx->pc = 0x3403ACu;
    // 0x3403ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3403acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3403b0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3403b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3403b4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3403B4u;
    {
        const bool branch_taken_0x3403b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3403b4) {
            ctx->pc = 0x3403B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3403B4u;
            // 0x3403b8: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3403D8u;
            goto label_3403d8;
        }
    }
    ctx->pc = 0x3403BCu;
    // 0x3403bc: 0xc0c8c92  jal         func_323248
    ctx->pc = 0x3403BCu;
    SET_GPR_U32(ctx, 31, 0x3403C4u);
    ctx->pc = 0x3403C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3403BCu;
    // 0x3403c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323248u, 0x3403BCu, 0x3403C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3403C4u;
label_3403c4:
    // 0x3403c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3403c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3403c8: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x3403c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x3403cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3403ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3403d0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3403d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x3403d4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x3403d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3403d8:
    // 0x3403d8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3403d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x3403dc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x3403dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3403e0: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3403E0u;
    {
        const bool branch_taken_0x3403e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3403e0) {
            ctx->pc = 0x3403E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3403E0u;
            // 0x3403e4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340400u;
            goto label_340400;
        }
    }
    ctx->pc = 0x3403E8u;
    // 0x3403e8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3403e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x3403ec: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3403ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3403f0: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x3403f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x3403f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3403F4u;
    {
        const bool branch_taken_0x3403f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3403F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403F4u;
        // 0x3403f8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3403f4) {
            ctx->pc = 0x340410u;
            goto label_340410;
        }
    }
    ctx->pc = 0x3403FCu;
    // 0x3403fc: 0x0  nop
    ctx->pc = 0x3403fcu;
    // NOP
label_340400:
    // 0x340400: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x340400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x340404: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x340404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x340408: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x340408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x34040c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x34040cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_340410:
    // 0x340410: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x340410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x340414: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x340414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340418: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x340418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34041c: 0x3c036808  lui         $v1, 0x6808
    ctx->pc = 0x34041cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26632 << 16));
    // 0x340420: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x340420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x340424: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x340424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340428: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x340428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34042c: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x34042cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x340430: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x340430u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x340434: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x340434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x340438: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x340438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x34043c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x34043cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x340440: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x340440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_340444:
    // 0x340444: 0x32620020  andi        $v0, $s3, 0x20
    ctx->pc = 0x340444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
    // 0x340448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x340448u;
    {
        const bool branch_taken_0x340448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340448u;
        // 0x34044c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340448) {
            ctx->pc = 0x340460u;
            goto label_340460;
        }
    }
    ctx->pc = 0x340450u;
    // 0x340450: 0x26840068  addiu       $a0, $s4, 0x68
    ctx->pc = 0x340450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 104));
    // 0x340454: 0xc0c8946  jal         func_322518
    ctx->pc = 0x340454u;
    SET_GPR_U32(ctx, 31, 0x34045Cu);
    ctx->pc = 0x340458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340454u;
    // 0x340458: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322518u, 0x340454u, 0x34045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34045Cu;
label_34045c:
    // 0x34045c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34045cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_340460:
    // 0x340460: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x340460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
    // 0x340464: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x340464u;
    {
        const bool branch_taken_0x340464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340464u;
        // 0x340468: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340464) {
            ctx->pc = 0x3404B4u;
            goto label_3404b4;
        }
    }
    ctx->pc = 0x34046Cu;
    // 0x34046c: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x34046Cu;
    {
        const bool branch_taken_0x34046c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x340470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34046Cu;
        // 0x340470: 0x26840068  addiu       $a0, $s4, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34046c) {
            ctx->pc = 0x3404A0u;
            goto label_3404a0;
        }
    }
    ctx->pc = 0x340474u;
    // 0x340474: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x340474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x340478: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x340478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x34047c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x34047cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x340480: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x340480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x340484: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x340484u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x340488: 0x48a2a800  qmtc2.ni    $v0, $vf21
    ctx->pc = 0x340488u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34048c: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x34048cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x340490: 0x268300b0  addiu       $v1, $s4, 0xB0
    ctx->pc = 0x340490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x340494: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x340494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x340498: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x340498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x34049c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34049cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3404a0:
    // 0x3404a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3404a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3404a4: 0xc0c8976  jal         func_3225D8
    ctx->pc = 0x3404A4u;
    SET_GPR_U32(ctx, 31, 0x3404ACu);
    ctx->pc = 0x3404A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3404A4u;
    // 0x3404a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3225D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3225D8u, 0x3404A4u, 0x3404ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3404ACu;
label_3404ac:
    // 0x3404ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3404acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3404b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3404b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3404b4:
    // 0x3404b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3404b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3404b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3404b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3404bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3404bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3404c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3404c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3404c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3404c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3404c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3404c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3404cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3404ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3404d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3404D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3404D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3404D0u;
        // 0x3404d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3404D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3404D8u;
label_3404d8:
    // 0x3404d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3404d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3404dc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3404dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3404e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3404e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3404e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3404e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3404e8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3404e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3404ec: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3404ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3404f0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3404f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3404f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3404F4u;
    {
        const bool branch_taken_0x3404f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3404F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3404F4u;
        // 0x3404f8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3404f4) {
            ctx->pc = 0x340520u;
            goto label_340520;
        }
    }
    ctx->pc = 0x3404FCu;
    // 0x3404fc: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x3404fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x340500: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x340500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x340504: 0x2442cb00  addiu       $v0, $v0, -0x3500
    ctx->pc = 0x340504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953728));
    // 0x340508: 0x2508d960  addiu       $t0, $t0, -0x26A0
    ctx->pc = 0x340508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957408));
    // 0x34050c: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x34050cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x340510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x340510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340514: 0x840c3  sra         $t0, $t0, 3
    ctx->pc = 0x340514u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
    // 0x340518: 0x80d014c  j           func_340530
    ctx->pc = 0x340518u;
    ctx->pc = 0x34051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340518u;
    // 0x34051c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340530u;
    goto label_340530;
    ctx->pc = 0x340520u;
label_340520:
    // 0x340520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x340520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340524: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x340524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340528: 0x3e00008  jr          $ra
    ctx->pc = 0x340528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340528u;
        // 0x34052c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340530u;
label_340530:
    // 0x340530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x340534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34053c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34053cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x340540: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x340540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340544: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x340544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x340548: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x340548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x34054c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34054cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x340550: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x340550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340554: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x340554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x340558: 0xc0d0176  jal         func_3405D8
    ctx->pc = 0x340558u;
    SET_GPR_U32(ctx, 31, 0x340560u);
    ctx->pc = 0x34055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340558u;
    // 0x34055c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3405D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3405D8u, 0x340558u, 0x340560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340560u;
label_340560:
    // 0x340560: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x340560u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x340564: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x340564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x340568: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x340568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34056c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x34056cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x340570: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x340570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x340574: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x340574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x340578: 0x53400  sll         $a2, $a1, 16
    ctx->pc = 0x340578u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x34057c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x34057cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x340580: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x340580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x340584: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x340584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x340588: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x340588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x34058c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x34058cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x340590: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x340590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x340594: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x340594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x340598: 0x70852b89  pcpyld      $a1, $a0, $a1
    ctx->pc = 0x340598u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x34059c: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x34059cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
    // 0x3405a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3405a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3405a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3405a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3405a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3405a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3405ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3405acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3405b0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3405b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3405b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3405b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3405b8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3405b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3405bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3405bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3405c0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3405c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3405c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3405c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3405c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3405c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3405cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3405CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3405D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3405CCu;
        // 0x3405d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3405CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3405D4u;
    // 0x3405d4: 0x0  nop
    ctx->pc = 0x3405d4u;
    // NOP
    ctx->pc = 0x3405d8u;
}
