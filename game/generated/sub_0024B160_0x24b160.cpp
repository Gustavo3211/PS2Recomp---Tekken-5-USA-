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

// Function: sub_0024B160
// Address: 0x24b160 - 0x24b3e0
void sub_0024B160_0x24b160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B160_0x24b160");
#endif

    switch (ctx->pc) {
        case 0x24b1c0u: goto label_24b1c0;
        case 0x24b230u: goto label_24b230;
        case 0x24b24cu: goto label_24b24c;
        case 0x24b298u: goto label_24b298;
        case 0x24b2b4u: goto label_24b2b4;
        case 0x24b2c8u: goto label_24b2c8;
        case 0x24b2d8u: goto label_24b2d8;
        case 0x24b30cu: goto label_24b30c;
        case 0x24b324u: goto label_24b324;
        case 0x24b344u: goto label_24b344;
        case 0x24b374u: goto label_24b374;
        case 0x24b390u: goto label_24b390;
        default: break;
    }

    ctx->pc = 0x24b160u;

    // 0x24b160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24b160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24b164: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x24b164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x24b168: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x24b168u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b16c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24b16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24b170: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x24b170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b174: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24b174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24b178: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x24b178u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b17c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24b17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24b180: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x24b180u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b184: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24b184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24b188: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x24b188u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b18c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x24b18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x24b190: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x24b190u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b198: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24b198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24b19c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x24b19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x24b1a0: 0x12c00083  beqz        $s6, . + 4 + (0x83 << 2)
    ctx->pc = 0x24B1A0u;
    {
        const bool branch_taken_0x24b1a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1A0u;
        // 0x24b1a4: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b1a0) {
            ctx->pc = 0x24B3B0u;
            goto label_24b3b0;
        }
    }
    ctx->pc = 0x24B1A8u;
    // 0x24b1a8: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x24b1a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x24b1ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24b1b0: 0x1062007f  beq         $v1, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x24B1B0u;
    {
        const bool branch_taken_0x24b1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1B0u;
        // 0x24b1b4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b1b0) {
            ctx->pc = 0x24B3B0u;
            goto label_24b3b0;
        }
    }
    ctx->pc = 0x24B1B8u;
    // 0x24b1b8: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x24b1b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x24b1bc: 0x0  nop
    ctx->pc = 0x24b1bcu;
    // NOP
label_24b1c0:
    // 0x24b1c0: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x24b1c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x24b1c4: 0x32302  srl         $a0, $v1, 12
    ctx->pc = 0x24b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x24b1c8: 0x2c82000c  sltiu       $v0, $a0, 0xC
    ctx->pc = 0x24b1c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x24b1cc: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x24B1CCu;
    {
        const bool branch_taken_0x24b1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1CCu;
        // 0x24b1d0: 0x30710fff  andi        $s1, $v1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b1cc) {
            ctx->pc = 0x24B390u;
            goto label_24b390;
        }
    }
    ctx->pc = 0x24B1D4u;
    // 0x24b1d4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x24b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24b1d8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x24b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x24b1dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24b1e0: 0x8c6317d0  lw          $v1, 0x17D0($v1)
    ctx->pc = 0x24b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6096)));
    // 0x24b1e4: 0x600008  jr          $v1
    ctx->pc = 0x24B1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24B1F0u: goto label_24b1f0;
            case 0x24B258u: goto label_24b258;
            case 0x24B2E0u: goto label_24b2e0;
            case 0x24B330u: goto label_24b330;
            case 0x24B350u: goto label_24b350;
            case 0x24B380u: goto label_24b380;
            case 0x24B390u: goto label_24b390;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B1E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24B1ECu;
    // 0x24b1ec: 0x0  nop
    ctx->pc = 0x24b1ecu;
    // NOP
label_24b1f0:
    // 0x24b1f0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x24b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24b1f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b1f8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x24b1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x24b1fc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x24b1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x24b200: 0x86430096  lh          $v1, 0x96($s2)
    ctx->pc = 0x24b200u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x24b204: 0x54640063  bnel        $v1, $a0, . + 4 + (0x63 << 2)
    ctx->pc = 0x24B204u;
    {
        const bool branch_taken_0x24b204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24b204) {
            ctx->pc = 0x24B208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B204u;
            // 0x24b208: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B20Cu;
    // 0x24b20c: 0x924201fe  lbu         $v0, 0x1FE($s2)
    ctx->pc = 0x24b20cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 510)));
    // 0x24b210: 0x50400060  beql        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x24B210u;
    {
        const bool branch_taken_0x24b210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b210) {
            ctx->pc = 0x24B214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B210u;
            // 0x24b214: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B218u;
    // 0x24b218: 0x8e42069c  lw          $v0, 0x69C($s2)
    ctx->pc = 0x24b218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1692)));
    // 0x24b21c: 0x5840005d  blezl       $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x24B21Cu;
    {
        const bool branch_taken_0x24b21c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x24b21c) {
            ctx->pc = 0x24B220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B21Cu;
            // 0x24b220: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B224u;
    // 0x24b224: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24b224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b228: 0xc091b20  jal         func_246C80
    ctx->pc = 0x24B228u;
    SET_GPR_U32(ctx, 31, 0x24B230u);
    ctx->pc = 0x24B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B228u;
    // 0x24b22c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C80u, 0x24B228u, 0x24B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B230u;
label_24b230:
    // 0x24b230: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x24b230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24b234: 0x50400057  beql        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x24B234u;
    {
        const bool branch_taken_0x24b234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b234) {
            ctx->pc = 0x24B238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B234u;
            // 0x24b238: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B23Cu;
    // 0x24b23c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x24b23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24b240: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24b240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b244: 0xc091b34  jal         func_246CD0
    ctx->pc = 0x24B244u;
    SET_GPR_U32(ctx, 31, 0x24B24Cu);
    ctx->pc = 0x24B248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B244u;
    // 0x24b248: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246CD0u, 0x24B244u, 0x24B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B24Cu;
label_24b24c:
    // 0x24b24c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24b24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b250: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x24B250u;
    {
        const bool branch_taken_0x24b250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B250u;
        // 0x24b254: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b250) {
            ctx->pc = 0x24B2BCu;
            goto label_24b2bc;
        }
    }
    ctx->pc = 0x24B258u;
label_24b258:
    // 0x24b258: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x24b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24b25c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b260: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x24b260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x24b264: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x24b264u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x24b268: 0x86430096  lh          $v1, 0x96($s2)
    ctx->pc = 0x24b268u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x24b26c: 0x54640049  bnel        $v1, $a0, . + 4 + (0x49 << 2)
    ctx->pc = 0x24B26Cu;
    {
        const bool branch_taken_0x24b26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24b26c) {
            ctx->pc = 0x24B270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B26Cu;
            // 0x24b270: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B274u;
    // 0x24b274: 0x924201fe  lbu         $v0, 0x1FE($s2)
    ctx->pc = 0x24b274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 510)));
    // 0x24b278: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x24B278u;
    {
        const bool branch_taken_0x24b278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b278) {
            ctx->pc = 0x24B27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B278u;
            // 0x24b27c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B280u;
    // 0x24b280: 0x8e42069c  lw          $v0, 0x69C($s2)
    ctx->pc = 0x24b280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1692)));
    // 0x24b284: 0x58400043  blezl       $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x24B284u;
    {
        const bool branch_taken_0x24b284 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x24b284) {
            ctx->pc = 0x24B288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B284u;
            // 0x24b288: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B28Cu;
    // 0x24b28c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24b28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b290: 0xc091b20  jal         func_246C80
    ctx->pc = 0x24B290u;
    SET_GPR_U32(ctx, 31, 0x24B298u);
    ctx->pc = 0x24B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B290u;
    // 0x24b294: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C80u, 0x24B290u, 0x24B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B298u;
label_24b298:
    // 0x24b298: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x24b298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24b29c: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x24B29Cu;
    {
        const bool branch_taken_0x24b29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b29c) {
            ctx->pc = 0x24B2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B29Cu;
            // 0x24b2a0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B2A4u;
    // 0x24b2a4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x24b2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24b2a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24b2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b2ac: 0xc091b34  jal         func_246CD0
    ctx->pc = 0x24B2ACu;
    SET_GPR_U32(ctx, 31, 0x24B2B4u);
    ctx->pc = 0x24B2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B2ACu;
    // 0x24b2b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246CD0u, 0x24B2ACu, 0x24B2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B2B4u;
label_24b2b4:
    // 0x24b2b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24b2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b2b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x24b2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24b2bc:
    // 0x24b2bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24b2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b2c0: 0xc091b56  jal         func_246D58
    ctx->pc = 0x24B2C0u;
    SET_GPR_U32(ctx, 31, 0x24B2C8u);
    ctx->pc = 0x24B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B2C0u;
    // 0x24b2c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246D58u, 0x24B2C0u, 0x24B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B2C8u;
label_24b2c8:
    // 0x24b2c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24b2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b2cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b2d0: 0xc0929c2  jal         func_24A708
    ctx->pc = 0x24B2D0u;
    SET_GPR_U32(ctx, 31, 0x24B2D8u);
    ctx->pc = 0x24B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B2D0u;
    // 0x24b2d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A708u, 0x24B2D0u, 0x24B2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B2D8u;
label_24b2d8:
    // 0x24b2d8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x24B2D8u;
    {
        const bool branch_taken_0x24b2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2D8u;
        // 0x24b2dc: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b2d8) {
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B2E0u;
label_24b2e0:
    // 0x24b2e0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x24b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24b2e4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x24b2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x24b2e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x24b2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x24b2ec: 0x924301f0  lbu         $v1, 0x1F0($s2)
    ctx->pc = 0x24b2ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x24b2f0: 0x50600028  beql        $v1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x24B2F0u;
    {
        const bool branch_taken_0x24b2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b2f0) {
            ctx->pc = 0x24B2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B2F0u;
            // 0x24b2f4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B2F8u;
    // 0x24b2f8: 0x92a201ee  lbu         $v0, 0x1EE($s5)
    ctx->pc = 0x24b2f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 494)));
    // 0x24b2fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B2FCu;
    {
        const bool branch_taken_0x24b2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2FCu;
        // 0x24b300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b2fc) {
            ctx->pc = 0x24B318u;
            goto label_24b318;
        }
    }
    ctx->pc = 0x24B304u;
    // 0x24b304: 0xc092bea  jal         func_24AFA8
    ctx->pc = 0x24B304u;
    SET_GPR_U32(ctx, 31, 0x24B30Cu);
    ctx->pc = 0x24B308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B304u;
    // 0x24b308: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AFA8u, 0x24B304u, 0x24B30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B30Cu;
label_24b30c:
    // 0x24b30c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x24B30Cu;
    {
        const bool branch_taken_0x24b30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B30Cu;
        // 0x24b310: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b30c) {
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B314u;
    // 0x24b314: 0x0  nop
    ctx->pc = 0x24b314u;
    // NOP
label_24b318:
    // 0x24b318: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x24b318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b31c: 0xc092ba6  jal         func_24AE98
    ctx->pc = 0x24B31Cu;
    SET_GPR_U32(ctx, 31, 0x24B324u);
    ctx->pc = 0x24B320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B31Cu;
    // 0x24b320: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AE98u, 0x24B31Cu, 0x24B324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B324u;
label_24b324:
    // 0x24b324: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24B324u;
    {
        const bool branch_taken_0x24b324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B324u;
        // 0x24b328: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b324) {
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B32Cu;
    // 0x24b32c: 0x0  nop
    ctx->pc = 0x24b32cu;
    // NOP
label_24b330:
    // 0x24b330: 0x924201f0  lbu         $v0, 0x1F0($s2)
    ctx->pc = 0x24b330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x24b334: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x24B334u;
    {
        const bool branch_taken_0x24b334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b334) {
            ctx->pc = 0x24B338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B334u;
            // 0x24b338: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B33Cu;
    // 0x24b33c: 0xc09296c  jal         func_24A5B0
    ctx->pc = 0x24B33Cu;
    SET_GPR_U32(ctx, 31, 0x24B344u);
    ctx->pc = 0x24B340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B33Cu;
    // 0x24b340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A5B0u, 0x24B33Cu, 0x24B344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B344u;
label_24b344:
    // 0x24b344: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x24B344u;
    {
        const bool branch_taken_0x24b344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B344u;
        // 0x24b348: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b344) {
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B34Cu;
    // 0x24b34c: 0x0  nop
    ctx->pc = 0x24b34cu;
    // NOP
label_24b350:
    // 0x24b350: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x24b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24b354: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x24b354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x24b358: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x24b358u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x24b35c: 0x924301f0  lbu         $v1, 0x1F0($s2)
    ctx->pc = 0x24b35cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x24b360: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24B360u;
    {
        const bool branch_taken_0x24b360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B360u;
        // 0x24b364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b360) {
            ctx->pc = 0x24B390u;
            goto label_24b390;
        }
    }
    ctx->pc = 0x24B368u;
    // 0x24b368: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24b368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b36c: 0xc092810  jal         func_24A040
    ctx->pc = 0x24B36Cu;
    SET_GPR_U32(ctx, 31, 0x24B374u);
    ctx->pc = 0x24B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B36Cu;
    // 0x24b370: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A040u, 0x24B36Cu, 0x24B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B374u;
label_24b374:
    // 0x24b374: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24B374u;
    {
        const bool branch_taken_0x24b374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B374u;
        // 0x24b378: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b374) {
            ctx->pc = 0x24B394u;
            goto label_24b394;
        }
    }
    ctx->pc = 0x24B37Cu;
    // 0x24b37c: 0x0  nop
    ctx->pc = 0x24b37cu;
    // NOP
label_24b380:
    // 0x24b380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b384: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24b384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b388: 0xc092810  jal         func_24A040
    ctx->pc = 0x24B388u;
    SET_GPR_U32(ctx, 31, 0x24B390u);
    ctx->pc = 0x24B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B388u;
    // 0x24b38c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A040u, 0x24B388u, 0x24B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B390u;
label_24b390:
    // 0x24b390: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x24b390u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_24b394:
    // 0x24b394: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x24b394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24b398: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B398u;
    {
        const bool branch_taken_0x24b398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B398u;
        // 0x24b39c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b398) {
            ctx->pc = 0x24B3B4u;
            goto label_24b3b4;
        }
    }
    ctx->pc = 0x24B3A0u;
    // 0x24b3a0: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x24b3a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x24b3a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24b3a8: 0x5462ff85  bnel        $v1, $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x24B3A8u;
    {
        const bool branch_taken_0x24b3a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24b3a8) {
            ctx->pc = 0x24B3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B3A8u;
            // 0x24b3ac: 0x96c30000  lhu         $v1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b1c0;
        }
    }
    ctx->pc = 0x24B3B0u;
label_24b3b0:
    // 0x24b3b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b3b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24b3b4:
    // 0x24b3b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24b3b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b3b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24b3b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b3bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24b3bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b3c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24b3c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b3c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24b3c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24b3c8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x24b3c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b3cc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x24b3ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24b3d0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x24b3d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b3d4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x24b3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24b3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x24B3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3D8u;
        // 0x24b3dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B3E0u;
}
