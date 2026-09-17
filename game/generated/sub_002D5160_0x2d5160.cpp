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

// Function: sub_002D5160
// Address: 0x2d5160 - 0x2d53f8
void sub_002D5160_0x2d5160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5160_0x2d5160");
#endif

    switch (ctx->pc) {
        case 0x2d51e4u: goto label_2d51e4;
        case 0x2d5210u: goto label_2d5210;
        case 0x2d5270u: goto label_2d5270;
        case 0x2d5288u: goto label_2d5288;
        case 0x2d52bcu: goto label_2d52bc;
        case 0x2d5318u: goto label_2d5318;
        case 0x2d5338u: goto label_2d5338;
        case 0x2d5350u: goto label_2d5350;
        case 0x2d5380u: goto label_2d5380;
        case 0x2d53b4u: goto label_2d53b4;
        default: break;
    }

    ctx->pc = 0x2d5160u;

    // 0x2d5160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d5160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d5164: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d5164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d5168: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2d5168u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2d516c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d516cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d5170: 0x26228858  addiu       $v0, $s1, -0x77A8
    ctx->pc = 0x2d5170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936664));
    // 0x2d5174: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d5174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d5178: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d5178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d517c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d517cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d5180: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d5180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d5184: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d5184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d5188: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d5188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2d518c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2d518cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2d5190: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d5190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d5194: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2d5194u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A8878u));
    // 0x2d5198: 0x1060008a  beqz        $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x2D5198u;
    {
        const bool branch_taken_0x2d5198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5198u;
        // 0x2d519c: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5198) {
            ctx->pc = 0x2D53C4u;
            goto label_2d53c4;
        }
    }
    ctx->pc = 0x2D51A0u;
    // 0x2d51a0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2d51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d51a4: 0x8ca383c0  lw          $v1, -0x7C40($a1)
    ctx->pc = 0x2d51a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294935488)));
    // 0x2d51a8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D51A8u;
    {
        const bool branch_taken_0x2d51a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51A8u;
        // 0x2d51ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d51a8) {
            ctx->pc = 0x2D51BCu;
            goto label_2d51bc;
        }
    }
    ctx->pc = 0x2D51B0u;
    // 0x2d51b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d51b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d51b4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D51B4u;
    {
        const bool branch_taken_0x2d51b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d51b4) {
            ctx->pc = 0x2D51C0u;
            goto label_2d51c0;
        }
    }
    ctx->pc = 0x2D51BCu;
label_2d51bc:
    // 0x2d51bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d51bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d51c0:
    // 0x2d51c0: 0x14800081  bnez        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2D51C0u;
    {
        const bool branch_taken_0x2d51c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51C0u;
        // 0x2d51c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d51c0) {
            ctx->pc = 0x2D53C8u;
            goto label_2d53c8;
        }
    }
    ctx->pc = 0x2D51C8u;
    // 0x2d51c8: 0x24b083c0  addiu       $s0, $a1, -0x7C40
    ctx->pc = 0x2d51c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935488));
    // 0x2d51cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d51ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d51d0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2d51d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2d51d4: 0x5040007c  beql        $v0, $zero, . + 4 + (0x7C << 2)
    ctx->pc = 0x2D51D4u;
    {
        const bool branch_taken_0x2d51d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d51d4) {
            ctx->pc = 0x2D51D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D51D4u;
            // 0x2d51d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D53C8u;
            goto label_2d53c8;
        }
    }
    ctx->pc = 0x2D51DCu;
    // 0x2d51dc: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x2D51DCu;
    SET_GPR_U32(ctx, 31, 0x2D51E4u);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x2D51DCu, 0x2D51E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D51E4u;
label_2d51e4:
    // 0x2d51e4: 0x54400078  bnel        $v0, $zero, . + 4 + (0x78 << 2)
    ctx->pc = 0x2D51E4u;
    {
        const bool branch_taken_0x2d51e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d51e4) {
            ctx->pc = 0x2D51E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D51E4u;
            // 0x2d51e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D53C8u;
            goto label_2d53c8;
        }
    }
    ctx->pc = 0x2D51ECu;
    // 0x2d51ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d51f0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2d51f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x2d51f4: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2D51F4u;
    {
        const bool branch_taken_0x2d51f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51F4u;
        // 0x2d51f8: 0x26228858  addiu       $v0, $s1, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d51f4) {
            ctx->pc = 0x2D52E8u;
            goto label_2d52e8;
        }
    }
    ctx->pc = 0x2D51FCu;
    // 0x2d51fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d51fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5200: 0x241e0033  addiu       $fp, $zero, 0x33
    ctx->pc = 0x2d5200u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2d5204: 0x24170044  addiu       $s7, $zero, 0x44
    ctx->pc = 0x2d5204u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2d5208: 0x24160043  addiu       $s6, $zero, 0x43
    ctx->pc = 0x2d5208u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2d520c: 0x26950001  addiu       $s5, $s4, 0x1
    ctx->pc = 0x2d520cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2d5210:
    // 0x2d5210: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x2d5210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x2d5214: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d5214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d5218: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d5218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d521c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d521cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5220: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d5220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d5224: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d5224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d5228: 0x244283d9  addiu       $v0, $v0, -0x7C27
    ctx->pc = 0x2d5228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935513));
    // 0x2d522c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d522cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d5230: 0x907200f0  lbu         $s2, 0xF0($v1)
    ctx->pc = 0x2d5230u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x2d5234: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x2d5234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2d5238: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x2d5238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2d523c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D523Cu;
    {
        const bool branch_taken_0x2d523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D523Cu;
        // 0x2d5240: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d523c) {
            ctx->pc = 0x2D5270u;
            goto label_2d5270;
        }
    }
    ctx->pc = 0x2D5244u;
    // 0x2d5244: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2d5244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2d5248: 0x123040  sll         $a2, $s2, 1
    ctx->pc = 0x2d5248u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2d524c: 0x54800b  movn        $s0, $v0, $s4
    ctx->pc = 0x2d524cu;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x2d5250: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x2d5250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2d5254: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d5254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d5258: 0x26450048  addiu       $a1, $s2, 0x48
    ctx->pc = 0x2d5258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x2d525c: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x2d525cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x2d5260: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d5260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5264: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d5264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5268: 0xc0b519e  jal         func_2D4678
    ctx->pc = 0x2D5268u;
    SET_GPR_U32(ctx, 31, 0x2D5270u);
    ctx->pc = 0x2D526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5268u;
    // 0x2d526c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4678u, 0x2D5268u, 0x2D5270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5270u;
label_2d5270:
    // 0x2d5270: 0x1a400016  blez        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D5270u;
    {
        const bool branch_taken_0x2d5270 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2D5274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5270u;
        // 0x2d5274: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5270) {
            ctx->pc = 0x2D52CCu;
            goto label_2d52cc;
        }
    }
    ctx->pc = 0x2D5278u;
    // 0x2d5278: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x2d5278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d527c: 0x32930001  andi        $s3, $s4, 0x1
    ctx->pc = 0x2d527cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x2d5280: 0x2f4800b  movn        $s0, $s7, $s4
    ctx->pc = 0x2d5280u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 23));
    // 0x2d5284: 0x0  nop
    ctx->pc = 0x2d5284u;
    // NOP
label_2d5288:
    // 0x2d5288: 0x27c1021  addu        $v0, $s3, $gp
    ctx->pc = 0x2d5288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 28)));
    // 0x2d528c: 0x9042b3c0  lbu         $v0, -0x4C40($v0)
    ctx->pc = 0x2d528cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947776)));
    // 0x2d5290: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2d5290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5294: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D5294u;
    {
        const bool branch_taken_0x2d5294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5294) {
            ctx->pc = 0x2D5298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5294u;
            // 0x2d5298: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D52C0u;
            goto label_2d52c0;
        }
    }
    ctx->pc = 0x2D529Cu;
    // 0x2d529c: 0x113040  sll         $a2, $s1, 1
    ctx->pc = 0x2d529cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2d52a0: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d52a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d52a4: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x2d52a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2d52a8: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x2d52a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x2d52ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d52acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d52b0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d52b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d52b4: 0xc0b519e  jal         func_2D4678
    ctx->pc = 0x2D52B4u;
    SET_GPR_U32(ctx, 31, 0x2D52BCu);
    ctx->pc = 0x2D52B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D52B4u;
    // 0x2d52b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4678u, 0x2D52B4u, 0x2D52BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D52BCu;
label_2d52bc:
    // 0x2d52bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d52bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d52c0:
    // 0x2d52c0: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x2d52c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d52c4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2D52C4u;
    {
        const bool branch_taken_0x2d52c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d52c4) {
            ctx->pc = 0x2D5288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5288;
        }
    }
    ctx->pc = 0x2D52CCu;
label_2d52cc:
    // 0x2d52cc: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x2d52ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d52d0: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2d52d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d52d4: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2D52D4u;
    {
        const bool branch_taken_0x2d52d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D52D4u;
        // 0x2d52d8: 0x26950001  addiu       $s5, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d52d4) {
            ctx->pc = 0x2D5210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5210;
        }
    }
    ctx->pc = 0x2D52DCu;
    // 0x2d52dc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2D52DCu;
    {
        const bool branch_taken_0x2d52dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D52E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D52DCu;
        // 0x2d52e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d52dc) {
            ctx->pc = 0x2D53C8u;
            goto label_2d53c8;
        }
    }
    ctx->pc = 0x2D52E4u;
    // 0x2d52e4: 0x0  nop
    ctx->pc = 0x2d52e4u;
    // NOP
label_2d52e8:
    // 0x2d52e8: 0x8c520040  lw          $s2, 0x40($v0)
    ctx->pc = 0x2d52e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2d52ec: 0x1a400036  blez        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x2D52ECu;
    {
        const bool branch_taken_0x2d52ec = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2D52F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D52ECu;
        // 0x2d52f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d52ec) {
            ctx->pc = 0x2D53C8u;
            goto label_2d53c8;
        }
    }
    ctx->pc = 0x2D52F4u;
    // 0x2d52f4: 0x128840  sll         $s1, $s2, 1
    ctx->pc = 0x2d52f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2d52f8: 0x2650000d  addiu       $s0, $s2, 0xD
    ctx->pc = 0x2d52f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 13));
    // 0x2d52fc: 0x2626001d  addiu       $a2, $s1, 0x1D
    ctx->pc = 0x2d52fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 29));
    // 0x2d5300: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d5300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d5304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5308: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d5308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d530c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d530cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5310: 0xc0b519e  jal         func_2D4678
    ctx->pc = 0x2D5310u;
    SET_GPR_U32(ctx, 31, 0x2D5318u);
    ctx->pc = 0x2D5314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5310u;
    // 0x2d5314: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4678u, 0x2D5310u, 0x2D5318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5318u;
label_2d5318:
    // 0x2d5318: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d5318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d531c: 0x2626001e  addiu       $a2, $s1, 0x1E
    ctx->pc = 0x2d531cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 30));
    // 0x2d5320: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d5320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5324: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5328: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d5328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d532c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d532cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5330: 0xc0b519e  jal         func_2D4678
    ctx->pc = 0x2D5330u;
    SET_GPR_U32(ctx, 31, 0x2D5338u);
    ctx->pc = 0x2D5334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5330u;
    // 0x2d5334: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4678u, 0x2D5330u, 0x2D5338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5338u;
label_2d5338:
    // 0x2d5338: 0x1a400023  blez        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D5338u;
    {
        const bool branch_taken_0x2d5338 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2D533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5338u;
        // 0x2d533c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5338) {
            ctx->pc = 0x2D53C8u;
            goto label_2d53c8;
        }
    }
    ctx->pc = 0x2D5340u;
    // 0x2d5340: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d5340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d5344: 0x245088d0  addiu       $s0, $v0, -0x7730
    ctx->pc = 0x2d5344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2d5348: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d5348u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x2d534c: 0x0  nop
    ctx->pc = 0x2d534cu;
    // NOP
label_2d5350:
    // 0x2d5350: 0x84620090  lh          $v0, 0x90($v1)
    ctx->pc = 0x2d5350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x2d5354: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2d5354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5358: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D5358u;
    {
        const bool branch_taken_0x2d5358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5358) {
            ctx->pc = 0x2D535Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5358u;
            // 0x2d535c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5384u;
            goto label_2d5384;
        }
    }
    ctx->pc = 0x2D5360u;
    // 0x2d5360: 0x113040  sll         $a2, $s1, 1
    ctx->pc = 0x2d5360u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2d5364: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d5364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d5368: 0x24c60029  addiu       $a2, $a2, 0x29
    ctx->pc = 0x2d5368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 41));
    // 0x2d536c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2d536cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2d5370: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d5370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5374: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d5374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5378: 0xc0b519e  jal         func_2D4678
    ctx->pc = 0x2D5378u;
    SET_GPR_U32(ctx, 31, 0x2D5380u);
    ctx->pc = 0x2D537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5378u;
    // 0x2d537c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4678u, 0x2D5378u, 0x2D5380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5380u;
label_2d5380:
    // 0x2d5380: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d5380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d5384:
    // 0x2d5384: 0x84620090  lh          $v0, 0x90($v1)
    ctx->pc = 0x2d5384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x2d5388: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2d5388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d538c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D538Cu;
    {
        const bool branch_taken_0x2d538c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d538c) {
            ctx->pc = 0x2D5390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D538Cu;
            // 0x2d5390: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D53B8u;
            goto label_2d53b8;
        }
    }
    ctx->pc = 0x2D5394u;
    // 0x2d5394: 0x113040  sll         $a2, $s1, 1
    ctx->pc = 0x2d5394u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2d5398: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d5398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d539c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2d539cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2d53a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d53a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d53a4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d53a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d53a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d53a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d53ac: 0xc0b519e  jal         func_2D4678
    ctx->pc = 0x2D53ACu;
    SET_GPR_U32(ctx, 31, 0x2D53B4u);
    ctx->pc = 0x2D53B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D53ACu;
    // 0x2d53b0: 0x24c6002a  addiu       $a2, $a2, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4678u, 0x2D53ACu, 0x2D53B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D53B4u;
label_2d53b4:
    // 0x2d53b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d53b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d53b8:
    // 0x2d53b8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x2d53b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d53bc: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2D53BCu;
    {
        const bool branch_taken_0x2d53bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d53bc) {
            ctx->pc = 0x2D53C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D53BCu;
            // 0x2d53c0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5350;
        }
    }
    ctx->pc = 0x2D53C4u;
label_2d53c4:
    // 0x2d53c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d53c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d53c8:
    // 0x2d53c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d53c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d53cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d53ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d53d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d53d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d53d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d53d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d53d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d53d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d53dc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d53dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d53e0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d53e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d53e4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2d53e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d53e8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d53e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d53ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D53ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53ECu;
        // 0x2d53f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D53ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D53F4u;
    // 0x2d53f4: 0x0  nop
    ctx->pc = 0x2d53f4u;
    // NOP
    ctx->pc = 0x2d53f8u;
}
