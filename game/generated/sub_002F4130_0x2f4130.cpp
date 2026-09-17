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

// Function: sub_002F4130
// Address: 0x2f4130 - 0x2f4238
void sub_002F4130_0x2f4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4130_0x2f4130");
#endif

    switch (ctx->pc) {
        case 0x2f4130u: goto label_2f4130;
        case 0x2f4134u: goto label_2f4134;
        case 0x2f4138u: goto label_2f4138;
        case 0x2f413cu: goto label_2f413c;
        case 0x2f4140u: goto label_2f4140;
        case 0x2f4144u: goto label_2f4144;
        case 0x2f4148u: goto label_2f4148;
        case 0x2f414cu: goto label_2f414c;
        case 0x2f4150u: goto label_2f4150;
        case 0x2f4154u: goto label_2f4154;
        case 0x2f4158u: goto label_2f4158;
        case 0x2f415cu: goto label_2f415c;
        case 0x2f4160u: goto label_2f4160;
        case 0x2f4164u: goto label_2f4164;
        case 0x2f4168u: goto label_2f4168;
        case 0x2f416cu: goto label_2f416c;
        case 0x2f4170u: goto label_2f4170;
        case 0x2f4174u: goto label_2f4174;
        case 0x2f4178u: goto label_2f4178;
        case 0x2f417cu: goto label_2f417c;
        case 0x2f4180u: goto label_2f4180;
        case 0x2f4184u: goto label_2f4184;
        case 0x2f4188u: goto label_2f4188;
        case 0x2f418cu: goto label_2f418c;
        case 0x2f4190u: goto label_2f4190;
        case 0x2f4194u: goto label_2f4194;
        case 0x2f4198u: goto label_2f4198;
        case 0x2f419cu: goto label_2f419c;
        case 0x2f41a0u: goto label_2f41a0;
        case 0x2f41a4u: goto label_2f41a4;
        case 0x2f41a8u: goto label_2f41a8;
        case 0x2f41acu: goto label_2f41ac;
        case 0x2f41b0u: goto label_2f41b0;
        case 0x2f41b4u: goto label_2f41b4;
        case 0x2f41b8u: goto label_2f41b8;
        case 0x2f41bcu: goto label_2f41bc;
        case 0x2f41c0u: goto label_2f41c0;
        case 0x2f41c4u: goto label_2f41c4;
        case 0x2f41c8u: goto label_2f41c8;
        case 0x2f41ccu: goto label_2f41cc;
        case 0x2f41d0u: goto label_2f41d0;
        case 0x2f41d4u: goto label_2f41d4;
        case 0x2f41d8u: goto label_2f41d8;
        case 0x2f41dcu: goto label_2f41dc;
        case 0x2f41e0u: goto label_2f41e0;
        case 0x2f41e4u: goto label_2f41e4;
        case 0x2f41e8u: goto label_2f41e8;
        case 0x2f41ecu: goto label_2f41ec;
        case 0x2f41f0u: goto label_2f41f0;
        case 0x2f41f4u: goto label_2f41f4;
        case 0x2f41f8u: goto label_2f41f8;
        case 0x2f41fcu: goto label_2f41fc;
        case 0x2f4200u: goto label_2f4200;
        case 0x2f4204u: goto label_2f4204;
        case 0x2f4208u: goto label_2f4208;
        case 0x2f420cu: goto label_2f420c;
        case 0x2f4210u: goto label_2f4210;
        case 0x2f4214u: goto label_2f4214;
        case 0x2f4218u: goto label_2f4218;
        case 0x2f421cu: goto label_2f421c;
        case 0x2f4220u: goto label_2f4220;
        case 0x2f4224u: goto label_2f4224;
        case 0x2f4228u: goto label_2f4228;
        case 0x2f422cu: goto label_2f422c;
        case 0x2f4230u: goto label_2f4230;
        case 0x2f4234u: goto label_2f4234;
        default: break;
    }

    ctx->pc = 0x2f4130u;

label_2f4130:
    // 0x2f4130: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f4130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2f4134:
    // 0x2f4134: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2f4134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_2f4138:
    // 0x2f4138: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2f4138u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f413c:
    // 0x2f413c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f413cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f4140:
    // 0x2f4140: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2f4140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2f4144:
    // 0x2f4144: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f4144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2f4148:
    // 0x2f4148: 0x2412fffe  addiu       $s2, $zero, -0x2
    ctx->pc = 0x2f4148u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2f414c:
    // 0x2f414c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2f414cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2f4150:
    // 0x2f4150: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x2f4150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2f4154:
    // 0x2f4154: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f4154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2f4158:
    // 0x2f4158: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2f4158u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2f415c:
    // 0x2f415c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2f415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_2f4160:
    // 0x2f4160: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2f4160u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2f4164:
    // 0x2f4164: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2f4164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_2f4168:
    // 0x2f4168: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2f4168u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f416c:
    // 0x2f416c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f416cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2f4170:
    // 0x2f4170: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f4170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2f4174:
    // 0x2f4174: 0xc0bcf2c  jal         func_2F3CB0
label_2f4178:
    if (ctx->pc == 0x2F4178u) {
        ctx->pc = 0x2F4178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4174u;
        // 0x2f4178: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F417Cu;
        goto label_2f417c;
    }
    ctx->pc = 0x2F4174u;
    SET_GPR_U32(ctx, 31, 0x2F417Cu);
    ctx->pc = 0x2F4178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4174u;
    // 0x2f4178: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3CB0u, 0x2F4174u, 0x2F417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F417Cu;
label_2f417c:
    // 0x2f417c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2f417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f4180:
    // 0x2f4180: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_2f4184:
    if (ctx->pc == 0x2F4184u) {
        ctx->pc = 0x2F4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4180u;
        // 0x2f4184: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4188u;
        goto label_2f4188;
    }
    ctx->pc = 0x2F4180u;
    {
        const bool branch_taken_0x2f4180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4180u;
        // 0x2f4184: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4180) {
            ctx->pc = 0x2F4210u;
            goto label_2f4210;
        }
    }
    ctx->pc = 0x2F4188u;
label_2f4188:
    // 0x2f4188: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2f4188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2f418c:
    // 0x2f418c: 0x3a58021  addu        $s0, $sp, $a1
    ctx->pc = 0x2f418cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_2f4190:
    // 0x2f4190: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x2f4190u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f4194:
    // 0x2f4194: 0x8d420054  lw          $v0, 0x54($t2)
    ctx->pc = 0x2f4194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
label_2f4198:
    // 0x2f4198: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_2f419c:
    if (ctx->pc == 0x2F419Cu) {
        ctx->pc = 0x2F419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4198u;
        // 0x2f419c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F41A0u;
        goto label_2f41a0;
    }
    ctx->pc = 0x2F4198u;
    {
        const bool branch_taken_0x2f4198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4198) {
            ctx->pc = 0x2F419Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4198u;
            // 0x2f419c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F41F0u;
            goto label_2f41f0;
        }
    }
    ctx->pc = 0x2F41A0u;
label_2f41a0:
    // 0x2f41a0: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x2f41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_2f41a4:
    // 0x2f41a4: 0x2d23021  addu        $a2, $s6, $s2
    ctx->pc = 0x2f41a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_2f41a8:
    // 0x2f41a8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2f41a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f41ac:
    // 0x2f41ac: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2f41acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f41b0:
    // 0x2f41b0: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x2f41b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_2f41b4:
    // 0x2f41b4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2f41b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f41b8:
    // 0x2f41b8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2f41b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2f41bc:
    // 0x2f41bc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2f41bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f41c0:
    // 0x2f41c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2f41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2f41c4:
    // 0x2f41c4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2f41c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2f41c8:
    // 0x2f41c8: 0x40f809  jalr        $v0
label_2f41cc:
    if (ctx->pc == 0x2F41CCu) {
        ctx->pc = 0x2F41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41C8u;
        // 0x2f41cc: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F41D0u;
        goto label_2f41d0;
    }
    ctx->pc = 0x2F41C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F41D0u);
        ctx->pc = 0x2F41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41C8u;
        // 0x2f41cc: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F41C8u, 0x2F41D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F41D0u;
label_2f41d0:
    // 0x2f41d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2f41d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f41d4:
    // 0x2f41d4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2f41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2f41d8:
    // 0x2f41d8: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x2f41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_2f41dc:
    // 0x2f41dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f41dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f41e0:
    // 0x2f41e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f41e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f41e4:
    // 0x2f41e4: 0x60f809  jalr        $v1
label_2f41e8:
    if (ctx->pc == 0x2F41E8u) {
        ctx->pc = 0x2F41E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41E4u;
        // 0x2f41e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F41ECu;
        goto label_2f41ec;
    }
    ctx->pc = 0x2F41E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F41ECu);
        ctx->pc = 0x2F41E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41E4u;
        // 0x2f41e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F41E4u, 0x2F41ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F41ECu;
label_2f41ec:
    // 0x2f41ec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2f41ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2f41f0:
    // 0x2f41f0: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_2f41f4:
    if (ctx->pc == 0x2F41F4u) {
        ctx->pc = 0x2F41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41F0u;
        // 0x2f41f4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F41F8u;
        goto label_2f41f8;
    }
    ctx->pc = 0x2F41F0u;
    {
        const bool branch_taken_0x2f41f0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2F41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41F0u;
        // 0x2f41f4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41f0) {
            ctx->pc = 0x2F420Cu;
            goto label_2f420c;
        }
    }
    ctx->pc = 0x2F41F8u;
label_2f41f8:
    // 0x2f41f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f41f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f41fc:
    // 0x2f41fc: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x2f41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_2f4200:
    // 0x2f4200: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f4200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f4204:
    // 0x2f4204: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_2f4208:
    if (ctx->pc == 0x2F4208u) {
        ctx->pc = 0x2F4208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4204u;
        // 0x2f4208: 0x3a58021  addu        $s0, $sp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F420Cu;
        goto label_2f420c;
    }
    ctx->pc = 0x2F4204u;
    {
        const bool branch_taken_0x2f4204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4204u;
        // 0x2f4208: 0x3a58021  addu        $s0, $sp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4204) {
            ctx->pc = 0x2F4190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4190;
        }
    }
    ctx->pc = 0x2F420Cu;
label_2f420c:
    // 0x2f420c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f420cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f4210:
    // 0x2f4210: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2f4210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f4214:
    // 0x2f4214: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f4214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f4218:
    // 0x2f4218: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2f4218u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2f421c:
    // 0x2f421c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f421cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f4220:
    // 0x2f4220: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2f4220u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2f4224:
    // 0x2f4224: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2f4224u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f4228:
    // 0x2f4228: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2f4228u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2f422c:
    // 0x2f422c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f422cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f4230:
    // 0x2f4230: 0x3e00008  jr          $ra
label_2f4234:
    if (ctx->pc == 0x2F4234u) {
        ctx->pc = 0x2F4234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4230u;
        // 0x2f4234: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4238u;
        goto label_fallthrough_0x2f4230;
    }
    ctx->pc = 0x2F4230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4230u;
        // 0x2f4234: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f4230:
    ctx->pc = 0x2F4238u;
}
