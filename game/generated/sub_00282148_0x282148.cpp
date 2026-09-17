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

// Function: sub_00282148
// Address: 0x282148 - 0x282a00
void sub_00282148_0x282148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282148_0x282148");
#endif

    switch (ctx->pc) {
        case 0x282390u: goto label_282390;
        case 0x282494u: goto label_282494;
        case 0x282688u: goto label_282688;
        case 0x282720u: goto label_282720;
        case 0x2827ccu: goto label_2827cc;
        case 0x2828d0u: goto label_2828d0;
        case 0x2828d8u: goto label_2828d8;
        case 0x282900u: goto label_282900;
        case 0x282908u: goto label_282908;
        case 0x282930u: goto label_282930;
        case 0x282938u: goto label_282938;
        case 0x282960u: goto label_282960;
        case 0x282968u: goto label_282968;
        case 0x282990u: goto label_282990;
        case 0x282998u: goto label_282998;
        case 0x2829c0u: goto label_2829c0;
        case 0x2829c8u: goto label_2829c8;
        default: break;
    }

    ctx->pc = 0x282148u;

    // 0x282148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28214c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x28214cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x282150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x282150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x282154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282158: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x282158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28215c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28215cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282160: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x282160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x282164: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x282164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282168: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x282168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x28216c: 0x2c62001c  sltiu       $v0, $v1, 0x1C
    ctx->pc = 0x28216cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x282170: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x282170u;
    {
        const bool branch_taken_0x282170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282170u;
        // 0x282174: 0x8e06005c  lw          $a2, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282170) {
            ctx->pc = 0x282190u;
            goto label_282190;
        }
    }
    ctx->pc = 0x282178u;
    // 0x282178: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x282178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28217c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x28217cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x282180: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x282180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x282184: 0x8c6345e0  lw          $v1, 0x45E0($v1)
    ctx->pc = 0x282184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17888)));
    // 0x282188: 0x600008  jr          $v1
    ctx->pc = 0x282188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282190u: goto label_282190;
            case 0x2821A0u: goto label_2821a0;
            case 0x282230u: goto label_282230;
            case 0x282298u: goto label_282298;
            case 0x2823B0u: goto label_2823b0;
            case 0x2824C0u: goto label_2824c0;
            case 0x2825E8u: goto label_2825e8;
            case 0x282648u: goto label_282648;
            case 0x2826A8u: goto label_2826a8;
            case 0x282760u: goto label_282760;
            case 0x282800u: goto label_282800;
            case 0x282850u: goto label_282850;
            case 0x2828C8u: goto label_2828c8;
            case 0x2828F8u: goto label_2828f8;
            case 0x282928u: goto label_282928;
            case 0x282958u: goto label_282958;
            case 0x282988u: goto label_282988;
            case 0x2829B8u: goto label_2829b8;
            case 0x2829E8u: goto label_2829e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282188u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x282190u;
label_282190:
    // 0x282190: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x282190u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x282194: 0x10000214  b           . + 4 + (0x214 << 2)
    ctx->pc = 0x282194u;
    {
        const bool branch_taken_0x282194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282194u;
        // 0x282198: 0xa6200000  sh          $zero, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282194) {
            ctx->pc = 0x2829E8u;
            goto label_2829e8;
        }
    }
    ctx->pc = 0x28219Cu;
    // 0x28219c: 0x0  nop
    ctx->pc = 0x28219cu;
    // NOP
label_2821a0:
    // 0x2821a0: 0x920301b0  lbu         $v1, 0x1B0($s0)
    ctx->pc = 0x2821a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2821a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2821a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2821a8: 0x106201be  beq         $v1, $v0, . + 4 + (0x1BE << 2)
    ctx->pc = 0x2821A8u;
    {
        const bool branch_taken_0x2821a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2821ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821A8u;
        // 0x2821ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821a8) {
            ctx->pc = 0x2828A4u;
            goto label_2828a4;
        }
    }
    ctx->pc = 0x2821B0u;
    // 0x2821b0: 0x106201c2  beq         $v1, $v0, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x2821B0u;
    {
        const bool branch_taken_0x2821b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2821B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821B0u;
        // 0x2821b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821b0) {
            ctx->pc = 0x2828BCu;
            goto label_2828bc;
        }
    }
    ctx->pc = 0x2821B8u;
    // 0x2821b8: 0x106201ad  beq         $v1, $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x2821B8u;
    {
        const bool branch_taken_0x2821b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2821BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821B8u;
        // 0x2821bc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821b8) {
            ctx->pc = 0x282870u;
            goto label_282870;
        }
    }
    ctx->pc = 0x2821C0u;
    // 0x2821c0: 0x5062020a  beql        $v1, $v0, . + 4 + (0x20A << 2)
    ctx->pc = 0x2821C0u;
    {
        const bool branch_taken_0x2821c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2821c0) {
            ctx->pc = 0x2821C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2821C0u;
            // 0x2821c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x2821C8u;
    // 0x2821c8: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x2821c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2821cc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2821ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2821d0: 0x144001bb  bnez        $v0, . + 4 + (0x1BB << 2)
    ctx->pc = 0x2821D0u;
    {
        const bool branch_taken_0x2821d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2821D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821D0u;
        // 0x2821d4: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821d0) {
            ctx->pc = 0x2828C0u;
            goto label_2828c0;
        }
    }
    ctx->pc = 0x2821D8u;
    // 0x2821d8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2821d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2821dc: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2821DCu;
    {
        const bool branch_taken_0x2821dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2821E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821DCu;
        // 0x2821e0: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821dc) {
            ctx->pc = 0x282200u;
            goto label_282200;
        }
    }
    ctx->pc = 0x2821E4u;
    // 0x2821e4: 0xc60101e4  lwc1        $f1, 0x1E4($s0)
    ctx->pc = 0x2821e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2821e8: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x2821e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x2821ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2821ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2821f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2821f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2821f4: 0x45010193  bc1t        . + 4 + (0x193 << 2)
    ctx->pc = 0x2821F4u;
    {
        const bool branch_taken_0x2821f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2821F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821F4u;
        // 0x2821f8: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821f4) {
            ctx->pc = 0x282844u;
            goto label_282844;
        }
    }
    ctx->pc = 0x2821FCu;
    // 0x2821fc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2821fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_282200:
    // 0x282200: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x282200u;
    {
        const bool branch_taken_0x282200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282200u;
        // 0x282204: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282200) {
            ctx->pc = 0x282224u;
            goto label_282224;
        }
    }
    ctx->pc = 0x282208u;
    // 0x282208: 0xde0200c8  ld          $v0, 0xC8($s0)
    ctx->pc = 0x282208u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x28220c: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x28220cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x282210: 0x31e78  dsll        $v1, $v1, 25
    ctx->pc = 0x282210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 25);
    // 0x282214: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x282214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x282218: 0x14430196  bne         $v0, $v1, . + 4 + (0x196 << 2)
    ctx->pc = 0x282218u;
    {
        const bool branch_taken_0x282218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282218u;
        // 0x28221c: 0x2402c000  addiu       $v0, $zero, -0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282218) {
            ctx->pc = 0x282874u;
            goto label_282874;
        }
    }
    ctx->pc = 0x282220u;
    // 0x282220: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x282220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_282224:
    // 0x282224: 0x100001f0  b           . + 4 + (0x1F0 << 2)
    ctx->pc = 0x282224u;
    {
        const bool branch_taken_0x282224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282224u;
        // 0x282228: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282224) {
            ctx->pc = 0x2829E8u;
            goto label_2829e8;
        }
    }
    ctx->pc = 0x28222Cu;
    // 0x28222c: 0x0  nop
    ctx->pc = 0x28222cu;
    // NOP
label_282230:
    // 0x282230: 0x920301b0  lbu         $v1, 0x1B0($s0)
    ctx->pc = 0x282230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x282234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282238: 0x1062019a  beq         $v1, $v0, . + 4 + (0x19A << 2)
    ctx->pc = 0x282238u;
    {
        const bool branch_taken_0x282238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282238u;
        // 0x28223c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282238) {
            ctx->pc = 0x2828A4u;
            goto label_2828a4;
        }
    }
    ctx->pc = 0x282240u;
    // 0x282240: 0x1062019e  beq         $v1, $v0, . + 4 + (0x19E << 2)
    ctx->pc = 0x282240u;
    {
        const bool branch_taken_0x282240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282240u;
        // 0x282244: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282240) {
            ctx->pc = 0x2828BCu;
            goto label_2828bc;
        }
    }
    ctx->pc = 0x282248u;
    // 0x282248: 0x10620189  beq         $v1, $v0, . + 4 + (0x189 << 2)
    ctx->pc = 0x282248u;
    {
        const bool branch_taken_0x282248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282248u;
        // 0x28224c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282248) {
            ctx->pc = 0x282870u;
            goto label_282870;
        }
    }
    ctx->pc = 0x282250u;
    // 0x282250: 0x506201e6  beql        $v1, $v0, . + 4 + (0x1E6 << 2)
    ctx->pc = 0x282250u;
    {
        const bool branch_taken_0x282250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x282250) {
            ctx->pc = 0x282254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282250u;
            // 0x282254: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282258u;
    // 0x282258: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x282258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x28225c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x28225cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x282260: 0x14400197  bnez        $v0, . + 4 + (0x197 << 2)
    ctx->pc = 0x282260u;
    {
        const bool branch_taken_0x282260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282260u;
        // 0x282264: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282260) {
            ctx->pc = 0x2828C0u;
            goto label_2828c0;
        }
    }
    ctx->pc = 0x282268u;
    // 0x282268: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x282268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x28226c: 0x14a20181  bne         $a1, $v0, . + 4 + (0x181 << 2)
    ctx->pc = 0x28226Cu;
    {
        const bool branch_taken_0x28226c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x282270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28226Cu;
        // 0x282270: 0x2402c000  addiu       $v0, $zero, -0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28226c) {
            ctx->pc = 0x282874u;
            goto label_282874;
        }
    }
    ctx->pc = 0x282274u;
    // 0x282274: 0xc60101e4  lwc1        $f1, 0x1E4($s0)
    ctx->pc = 0x282274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282278: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x282278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x28227c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28227cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282280: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x282280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282284: 0x450201d8  bc1fl       . + 4 + (0x1D8 << 2)
    ctx->pc = 0x282284u;
    {
        const bool branch_taken_0x282284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282284) {
            ctx->pc = 0x282288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282284u;
            // 0x282288: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829E8u;
            goto label_2829e8;
        }
    }
    ctx->pc = 0x28228Cu;
    // 0x28228c: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x28228Cu;
    {
        const bool branch_taken_0x28228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28228Cu;
        // 0x282290: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28228c) {
            ctx->pc = 0x282844u;
            goto label_282844;
        }
    }
    ctx->pc = 0x282294u;
    // 0x282294: 0x0  nop
    ctx->pc = 0x282294u;
    // NOP
label_282298:
    // 0x282298: 0x920301b0  lbu         $v1, 0x1B0($s0)
    ctx->pc = 0x282298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x28229c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2822a0: 0x10620180  beq         $v1, $v0, . + 4 + (0x180 << 2)
    ctx->pc = 0x2822A0u;
    {
        const bool branch_taken_0x2822a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2822A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822A0u;
        // 0x2822a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822a0) {
            ctx->pc = 0x2828A4u;
            goto label_2828a4;
        }
    }
    ctx->pc = 0x2822A8u;
    // 0x2822a8: 0x10620184  beq         $v1, $v0, . + 4 + (0x184 << 2)
    ctx->pc = 0x2822A8u;
    {
        const bool branch_taken_0x2822a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2822ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822A8u;
        // 0x2822ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822a8) {
            ctx->pc = 0x2828BCu;
            goto label_2828bc;
        }
    }
    ctx->pc = 0x2822B0u;
    // 0x2822b0: 0x1062016f  beq         $v1, $v0, . + 4 + (0x16F << 2)
    ctx->pc = 0x2822B0u;
    {
        const bool branch_taken_0x2822b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2822B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822B0u;
        // 0x2822b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822b0) {
            ctx->pc = 0x282870u;
            goto label_282870;
        }
    }
    ctx->pc = 0x2822B8u;
    // 0x2822b8: 0x506201cc  beql        $v1, $v0, . + 4 + (0x1CC << 2)
    ctx->pc = 0x2822B8u;
    {
        const bool branch_taken_0x2822b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2822b8) {
            ctx->pc = 0x2822BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2822B8u;
            // 0x2822bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x2822C0u;
    // 0x2822c0: 0x8e0600cc  lw          $a2, 0xCC($s0)
    ctx->pc = 0x2822c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2822c4: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x2822c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x2822c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2822C8u;
    {
        const bool branch_taken_0x2822c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822C8u;
        // 0x2822cc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822c8) {
            ctx->pc = 0x2822E4u;
            goto label_2822e4;
        }
    }
    ctx->pc = 0x2822D0u;
    // 0x2822d0: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x2822d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2822d4: 0x96040158  lhu         $a0, 0x158($s0)
    ctx->pc = 0x2822d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x2822d8: 0x94430018  lhu         $v1, 0x18($v0)
    ctx->pc = 0x2822d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2822dc: 0x10830177  beq         $a0, $v1, . + 4 + (0x177 << 2)
    ctx->pc = 0x2822DCu;
    {
        const bool branch_taken_0x2822dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2822E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822DCu;
        // 0x2822e0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822dc) {
            ctx->pc = 0x2828BCu;
            goto label_2828bc;
        }
    }
    ctx->pc = 0x2822E4u;
label_2822e4:
    // 0x2822e4: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2822E4u;
    {
        const bool branch_taken_0x2822e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2822E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822E4u;
        // 0x2822e8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822e4) {
            ctx->pc = 0x282318u;
            goto label_282318;
        }
    }
    ctx->pc = 0x2822ECu;
    // 0x2822ec: 0xc60101e4  lwc1        $f1, 0x1E4($s0)
    ctx->pc = 0x2822ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2822f0: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x2822f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x2822f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2822f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2822f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2822f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2822fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2822FCu;
    {
        const bool branch_taken_0x2822fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2822fc) {
            ctx->pc = 0x282318u;
            goto label_282318;
        }
    }
    ctx->pc = 0x282304u;
    // 0x282304: 0x8f829720  lw          $v0, -0x68E0($gp)
    ctx->pc = 0x282304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x282308: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x282308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28230c: 0x1440014d  bnez        $v0, . + 4 + (0x14D << 2)
    ctx->pc = 0x28230Cu;
    {
        const bool branch_taken_0x28230c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28230Cu;
        // 0x282310: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28230c) {
            ctx->pc = 0x282844u;
            goto label_282844;
        }
    }
    ctx->pc = 0x282314u;
    // 0x282314: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x282314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_282318:
    // 0x282318: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x282318u;
    {
        const bool branch_taken_0x282318 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282318u;
        // 0x28231c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282318) {
            ctx->pc = 0x28234Cu;
            goto label_28234c;
        }
    }
    ctx->pc = 0x282320u;
    // 0x282320: 0xc60101e4  lwc1        $f1, 0x1E4($s0)
    ctx->pc = 0x282320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282324: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x282324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
    // 0x282328: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28232c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28232cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282330: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x282330u;
    {
        const bool branch_taken_0x282330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282330) {
            ctx->pc = 0x28234Cu;
            goto label_28234c;
        }
    }
    ctx->pc = 0x282338u;
    // 0x282338: 0x8f829720  lw          $v0, -0x68E0($gp)
    ctx->pc = 0x282338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x28233c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28233cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x282340: 0x14400140  bnez        $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x282340u;
    {
        const bool branch_taken_0x282340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282340u;
        // 0x282344: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282340) {
            ctx->pc = 0x282844u;
            goto label_282844;
        }
    }
    ctx->pc = 0x282348u;
    // 0x282348: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x282348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_28234c:
    // 0x28234c: 0x54a201a7  bnel        $a1, $v0, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x28234Cu;
    {
        const bool branch_taken_0x28234c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x28234c) {
            ctx->pc = 0x282350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28234Cu;
            // 0x282350: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282354u;
    // 0x282354: 0x86030040  lh          $v1, 0x40($s0)
    ctx->pc = 0x282354u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x282358: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x282358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x28235c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28235Cu;
    {
        const bool branch_taken_0x28235c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x282360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28235Cu;
        // 0x282360: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28235c) {
            ctx->pc = 0x282384u;
            goto label_282384;
        }
    }
    ctx->pc = 0x282364u;
    // 0x282364: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x282364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x282368: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x282368u;
    {
        const bool branch_taken_0x282368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282368u;
        // 0x28236c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282368) {
            ctx->pc = 0x282384u;
            goto label_282384;
        }
    }
    ctx->pc = 0x282370u;
    // 0x282370: 0x86020080  lh          $v0, 0x80($s0)
    ctx->pc = 0x282370u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x282374: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x282374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x282378: 0x1040013e  beqz        $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x282378u;
    {
        const bool branch_taken_0x282378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282378u;
        // 0x28237c: 0x2402c000  addiu       $v0, $zero, -0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282378) {
            ctx->pc = 0x282874u;
            goto label_282874;
        }
    }
    ctx->pc = 0x282380u;
    // 0x282380: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x282380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_282384:
    // 0x282384: 0x54a20199  bnel        $a1, $v0, . + 4 + (0x199 << 2)
    ctx->pc = 0x282384u;
    {
        const bool branch_taken_0x282384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x282384) {
            ctx->pc = 0x282388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282384u;
            // 0x282388: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x28238Cu;
    // 0x28238c: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x28238cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_282390:
    // 0x282390: 0x54400196  bnel        $v0, $zero, . + 4 + (0x196 << 2)
    ctx->pc = 0x282390u;
    {
        const bool branch_taken_0x282390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282390) {
            ctx->pc = 0x282394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282390u;
            // 0x282394: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282398u;
    // 0x282398: 0x86020080  lh          $v0, 0x80($s0)
    ctx->pc = 0x282398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x28239c: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x28239cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2823a0: 0x14400192  bnez        $v0, . + 4 + (0x192 << 2)
    ctx->pc = 0x2823A0u;
    {
        const bool branch_taken_0x2823a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2823A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823A0u;
        // 0x2823a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823a0) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x2823A8u;
    // 0x2823a8: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x2823A8u;
    {
        const bool branch_taken_0x2823a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2823ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823A8u;
        // 0x2823ac: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823a8) {
            ctx->pc = 0x2828A8u;
            goto label_2828a8;
        }
    }
    ctx->pc = 0x2823B0u;
label_2823b0:
    // 0x2823b0: 0x920301b0  lbu         $v1, 0x1B0($s0)
    ctx->pc = 0x2823b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2823b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2823b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2823b8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2823B8u;
    {
        const bool branch_taken_0x2823b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2823b8) {
            ctx->pc = 0x2823BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2823B8u;
            // 0x2823bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2823C8u;
            goto label_2823c8;
        }
    }
    ctx->pc = 0x2823C0u;
    // 0x2823c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2823C0u;
    {
        const bool branch_taken_0x2823c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2823C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823C0u;
        // 0x2823c4: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823c0) {
            ctx->pc = 0x2823FCu;
            goto label_2823fc;
        }
    }
    ctx->pc = 0x2823C8u;
label_2823c8:
    // 0x2823c8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2823C8u;
    {
        const bool branch_taken_0x2823c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2823CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823C8u;
        // 0x2823cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823c8) {
            ctx->pc = 0x2823F8u;
            goto label_2823f8;
        }
    }
    ctx->pc = 0x2823D0u;
    // 0x2823d0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2823D0u;
    {
        const bool branch_taken_0x2823d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2823d0) {
            ctx->pc = 0x2823D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2823D0u;
            // 0x2823d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2823E0u;
            goto label_2823e0;
        }
    }
    ctx->pc = 0x2823D8u;
    // 0x2823d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2823D8u;
    {
        const bool branch_taken_0x2823d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2823DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823D8u;
        // 0x2823dc: 0x2402c000  addiu       $v0, $zero, -0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823d8) {
            ctx->pc = 0x2823FCu;
            goto label_2823fc;
        }
    }
    ctx->pc = 0x2823E0u;
label_2823e0:
    // 0x2823e0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2823E0u;
    {
        const bool branch_taken_0x2823e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2823e0) {
            ctx->pc = 0x2823E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2823E0u;
            // 0x2823e4: 0x8cc400c4  lw          $a0, 0xC4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282404u;
            goto label_282404;
        }
    }
    ctx->pc = 0x2823E8u;
    // 0x2823e8: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x2823e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2823ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2823ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2823f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2823F0u;
    {
        const bool branch_taken_0x2823f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2823f0) {
            ctx->pc = 0x2823F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2823F0u;
            // 0x2823f4: 0x8cc400c4  lw          $a0, 0xC4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282404u;
            goto label_282404;
        }
    }
    ctx->pc = 0x2823F8u;
label_2823f8:
    // 0x2823f8: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x2823f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2823fc:
    // 0x2823fc: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x2823fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x282400: 0x8cc400c4  lw          $a0, 0xC4($a2)
    ctx->pc = 0x282400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
label_282404:
    // 0x282404: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x282404u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x282408: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x282408u;
    {
        const bool branch_taken_0x282408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282408u;
        // 0x28240c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282408) {
            ctx->pc = 0x282490u;
            goto label_282490;
        }
    }
    ctx->pc = 0x282410u;
    // 0x282410: 0x84c30096  lh          $v1, 0x96($a2)
    ctx->pc = 0x282410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 150)));
    // 0x282414: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x282414u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x282418: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x282418u;
    {
        const bool branch_taken_0x282418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282418u;
        // 0x28241c: 0x94c50096  lhu         $a1, 0x96($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282418) {
            ctx->pc = 0x28245Cu;
            goto label_28245c;
        }
    }
    ctx->pc = 0x282420u;
    // 0x282420: 0x9483001c  lhu         $v1, 0x1C($a0)
    ctx->pc = 0x282420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x282424: 0x240218d2  addiu       $v0, $zero, 0x18D2
    ctx->pc = 0x282424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6354));
    // 0x282428: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282428u;
    {
        const bool branch_taken_0x282428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282428u;
        // 0x28242c: 0x24021959  addiu       $v0, $zero, 0x1959 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6489));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282428) {
            ctx->pc = 0x282440u;
            goto label_282440;
        }
    }
    ctx->pc = 0x282430u;
    // 0x282430: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282430u;
    {
        const bool branch_taken_0x282430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282430u;
        // 0x282434: 0x240240be  addiu       $v0, $zero, 0x40BE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16574));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282430) {
            ctx->pc = 0x282440u;
            goto label_282440;
        }
    }
    ctx->pc = 0x282438u;
    // 0x282438: 0x5462016c  bnel        $v1, $v0, . + 4 + (0x16C << 2)
    ctx->pc = 0x282438u;
    {
        const bool branch_taken_0x282438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x282438) {
            ctx->pc = 0x28243Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282438u;
            // 0x28243c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282440u;
label_282440:
    // 0x282440: 0x94830044  lhu         $v1, 0x44($a0)
    ctx->pc = 0x282440u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x282444: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x282444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x282448: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x282448u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x28244c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x28244cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x282450: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x282450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x282454: 0x54400165  bnel        $v0, $zero, . + 4 + (0x165 << 2)
    ctx->pc = 0x282454u;
    {
        const bool branch_taken_0x282454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282454) {
            ctx->pc = 0x282458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282454u;
            // 0x282458: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x28245Cu;
label_28245c:
    // 0x28245c: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x28245cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x282460: 0x94830046  lhu         $v1, 0x46($a0)
    ctx->pc = 0x282460u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x282464: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x282464u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x282468: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x282468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28246c: 0x1460015f  bnez        $v1, . + 4 + (0x15F << 2)
    ctx->pc = 0x28246Cu;
    {
        const bool branch_taken_0x28246c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x282470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28246Cu;
        // 0x282470: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28246c) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282474u;
    // 0x282474: 0x94c20150  lhu         $v0, 0x150($a2)
    ctx->pc = 0x282474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x282478: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x282478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x28247c: 0x1040015b  beqz        $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x28247Cu;
    {
        const bool branch_taken_0x28247c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28247Cu;
        // 0x282480: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28247c) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282484u;
    // 0x282484: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x282484u;
    {
        const bool branch_taken_0x282484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282484u;
        // 0x282488: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282484) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x28248Cu;
    // 0x28248c: 0x0  nop
    ctx->pc = 0x28248cu;
    // NOP
label_282490:
    // 0x282490: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x282490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_282494:
    // 0x282494: 0x54a20155  bnel        $a1, $v0, . + 4 + (0x155 << 2)
    ctx->pc = 0x282494u;
    {
        const bool branch_taken_0x282494 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x282494) {
            ctx->pc = 0x282498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282494u;
            // 0x282498: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x28249Cu;
    // 0x28249c: 0xc60101e4  lwc1        $f1, 0x1E4($s0)
    ctx->pc = 0x28249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2824a0: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x2824a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x2824a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2824a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2824a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2824a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2824ac: 0x4500014f  bc1f        . + 4 + (0x14F << 2)
    ctx->pc = 0x2824ACu;
    {
        const bool branch_taken_0x2824ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2824B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2824ACu;
        // 0x2824b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2824ac) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x2824B4u;
    // 0x2824b4: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x2824B4u;
    {
        const bool branch_taken_0x2824b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2824B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2824B4u;
        // 0x2824b8: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2824b4) {
            ctx->pc = 0x282844u;
            goto label_282844;
        }
    }
    ctx->pc = 0x2824BCu;
    // 0x2824bc: 0x0  nop
    ctx->pc = 0x2824bcu;
    // NOP
label_2824c0:
    // 0x2824c0: 0x920301b0  lbu         $v1, 0x1B0($s0)
    ctx->pc = 0x2824c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2824c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2824c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2824c8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2824C8u;
    {
        const bool branch_taken_0x2824c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2824c8) {
            ctx->pc = 0x2824CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2824C8u;
            // 0x2824cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2824D8u;
            goto label_2824d8;
        }
    }
    ctx->pc = 0x2824D0u;
    // 0x2824d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2824D0u;
    {
        const bool branch_taken_0x2824d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2824D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2824D0u;
        // 0x2824d4: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2824d0) {
            ctx->pc = 0x28250Cu;
            goto label_28250c;
        }
    }
    ctx->pc = 0x2824D8u;
label_2824d8:
    // 0x2824d8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2824D8u;
    {
        const bool branch_taken_0x2824d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2824DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2824D8u;
        // 0x2824dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2824d8) {
            ctx->pc = 0x282508u;
            goto label_282508;
        }
    }
    ctx->pc = 0x2824E0u;
    // 0x2824e0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2824E0u;
    {
        const bool branch_taken_0x2824e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2824e0) {
            ctx->pc = 0x2824E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2824E0u;
            // 0x2824e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2824F0u;
            goto label_2824f0;
        }
    }
    ctx->pc = 0x2824E8u;
    // 0x2824e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2824E8u;
    {
        const bool branch_taken_0x2824e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2824ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2824E8u;
        // 0x2824ec: 0x2402c000  addiu       $v0, $zero, -0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2824e8) {
            ctx->pc = 0x28250Cu;
            goto label_28250c;
        }
    }
    ctx->pc = 0x2824F0u;
label_2824f0:
    // 0x2824f0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2824F0u;
    {
        const bool branch_taken_0x2824f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2824f0) {
            ctx->pc = 0x2824F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2824F0u;
            // 0x2824f4: 0x8cc400c4  lw          $a0, 0xC4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282514u;
            goto label_282514;
        }
    }
    ctx->pc = 0x2824F8u;
    // 0x2824f8: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x2824f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2824fc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2824fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x282500: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x282500u;
    {
        const bool branch_taken_0x282500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282500) {
            ctx->pc = 0x282504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282500u;
            // 0x282504: 0x8cc400c4  lw          $a0, 0xC4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282514u;
            goto label_282514;
        }
    }
    ctx->pc = 0x282508u;
label_282508:
    // 0x282508: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x282508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_28250c:
    // 0x28250c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x28250cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x282510: 0x8cc400c4  lw          $a0, 0xC4($a2)
    ctx->pc = 0x282510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
label_282514:
    // 0x282514: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x282514u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x282518: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x282518u;
    {
        const bool branch_taken_0x282518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282518u;
        // 0x28251c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282518) {
            ctx->pc = 0x2825A8u;
            goto label_2825a8;
        }
    }
    ctx->pc = 0x282520u;
    // 0x282520: 0x84c30096  lh          $v1, 0x96($a2)
    ctx->pc = 0x282520u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 150)));
    // 0x282524: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x282524u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x282528: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x282528u;
    {
        const bool branch_taken_0x282528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282528u;
        // 0x28252c: 0x94c50096  lhu         $a1, 0x96($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282528) {
            ctx->pc = 0x28256Cu;
            goto label_28256c;
        }
    }
    ctx->pc = 0x282530u;
    // 0x282530: 0x9483001c  lhu         $v1, 0x1C($a0)
    ctx->pc = 0x282530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x282534: 0x240218d2  addiu       $v0, $zero, 0x18D2
    ctx->pc = 0x282534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6354));
    // 0x282538: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282538u;
    {
        const bool branch_taken_0x282538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282538u;
        // 0x28253c: 0x24021959  addiu       $v0, $zero, 0x1959 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6489));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282538) {
            ctx->pc = 0x282550u;
            goto label_282550;
        }
    }
    ctx->pc = 0x282540u;
    // 0x282540: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282540u;
    {
        const bool branch_taken_0x282540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282540u;
        // 0x282544: 0x240240be  addiu       $v0, $zero, 0x40BE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16574));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282540) {
            ctx->pc = 0x282550u;
            goto label_282550;
        }
    }
    ctx->pc = 0x282548u;
    // 0x282548: 0x54620128  bnel        $v1, $v0, . + 4 + (0x128 << 2)
    ctx->pc = 0x282548u;
    {
        const bool branch_taken_0x282548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x282548) {
            ctx->pc = 0x28254Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282548u;
            // 0x28254c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282550u;
label_282550:
    // 0x282550: 0x94830044  lhu         $v1, 0x44($a0)
    ctx->pc = 0x282550u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x282554: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x282554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x282558: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x282558u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x28255c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x28255cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x282560: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x282560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x282564: 0x54400121  bnel        $v0, $zero, . + 4 + (0x121 << 2)
    ctx->pc = 0x282564u;
    {
        const bool branch_taken_0x282564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282564) {
            ctx->pc = 0x282568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282564u;
            // 0x282568: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x28256Cu;
label_28256c:
    // 0x28256c: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x28256cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x282570: 0x94830046  lhu         $v1, 0x46($a0)
    ctx->pc = 0x282570u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x282574: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x282574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x282578: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x282578u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28257c: 0x5460011b  bnel        $v1, $zero, . + 4 + (0x11B << 2)
    ctx->pc = 0x28257Cu;
    {
        const bool branch_taken_0x28257c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28257c) {
            ctx->pc = 0x282580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28257Cu;
            // 0x282580: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282584u;
    // 0x282584: 0x94c30150  lhu         $v1, 0x150($a2)
    ctx->pc = 0x282584u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x282588: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x282588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x28258c: 0x144000c6  bnez        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x28258Cu;
    {
        const bool branch_taken_0x28258c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28258Cu;
        // 0x282590: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28258c) {
            ctx->pc = 0x2828A8u;
            goto label_2828a8;
        }
    }
    ctx->pc = 0x282594u;
    // 0x282594: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x282594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x282598: 0x10400113  beqz        $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x282598u;
    {
        const bool branch_taken_0x282598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282598u;
        // 0x28259c: 0x2402c000  addiu       $v0, $zero, -0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282598) {
            ctx->pc = 0x2829E8u;
            goto label_2829e8;
        }
    }
    ctx->pc = 0x2825A0u;
    // 0x2825a0: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x2825A0u;
    {
        const bool branch_taken_0x2825a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2825A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825A0u;
        // 0x2825a4: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2825a0) {
            ctx->pc = 0x2829E8u;
            goto label_2829e8;
        }
    }
    ctx->pc = 0x2825A8u;
label_2825a8:
    // 0x2825a8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2825a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2825ac: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2825ACu;
    {
        const bool branch_taken_0x2825ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2825B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825ACu;
        // 0x2825b0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2825ac) {
            ctx->pc = 0x2825D0u;
            goto label_2825d0;
        }
    }
    ctx->pc = 0x2825B4u;
    // 0x2825b4: 0xc60101e4  lwc1        $f1, 0x1E4($s0)
    ctx->pc = 0x2825b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2825b8: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x2825b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x2825bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2825bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2825c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2825c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2825c4: 0x4501009f  bc1t        . + 4 + (0x9F << 2)
    ctx->pc = 0x2825C4u;
    {
        const bool branch_taken_0x2825c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2825C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825C4u;
        // 0x2825c8: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2825c4) {
            ctx->pc = 0x282844u;
            goto label_282844;
        }
    }
    ctx->pc = 0x2825CCu;
    // 0x2825cc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2825ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2825d0:
    // 0x2825d0: 0x54a20106  bnel        $a1, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x2825D0u;
    {
        const bool branch_taken_0x2825d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2825d0) {
            ctx->pc = 0x2825D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2825D0u;
            // 0x2825d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x2825D8u;
    // 0x2825d8: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x2825d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2825dc: 0x1000ff6c  b           . + 4 + (-0x94 << 2)
    ctx->pc = 0x2825DCu;
    {
        const bool branch_taken_0x2825dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2825E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825DCu;
        // 0x2825e0: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2825dc) {
            ctx->pc = 0x282390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282390;
        }
    }
    ctx->pc = 0x2825E4u;
    // 0x2825e4: 0x0  nop
    ctx->pc = 0x2825e4u;
    // NOP
label_2825e8:
    // 0x2825e8: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x2825e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2825ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2825ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2825f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2825F0u;
    {
        const bool branch_taken_0x2825f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2825F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825F0u;
        // 0x2825f4: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2825f0) {
            ctx->pc = 0x2825FCu;
            goto label_2825fc;
        }
    }
    ctx->pc = 0x2825F8u;
    // 0x2825f8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x2825f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_2825fc:
    // 0x2825fc: 0x8cc300c4  lw          $v1, 0xC4($a2)
    ctx->pc = 0x2825fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x282600: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x282600u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x282604: 0x5040ffa3  beql        $v0, $zero, . + 4 + (-0x5D << 2)
    ctx->pc = 0x282604u;
    {
        const bool branch_taken_0x282604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282604) {
            ctx->pc = 0x282608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282604u;
            // 0x282608: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282494;
        }
    }
    ctx->pc = 0x28260Cu;
    // 0x28260c: 0x84c40096  lh          $a0, 0x96($a2)
    ctx->pc = 0x28260cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 150)));
    // 0x282610: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x282610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x282614: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x282614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x282618: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x282618u;
    {
        const bool branch_taken_0x282618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282618u;
        // 0x28261c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282618) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282620u;
    // 0x282620: 0x94620046  lhu         $v0, 0x46($v1)
    ctx->pc = 0x282620u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x282624: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x282624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x282628: 0x544000f1  bnel        $v0, $zero, . + 4 + (0xF1 << 2)
    ctx->pc = 0x282628u;
    {
        const bool branch_taken_0x282628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282628) {
            ctx->pc = 0x28262Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282628u;
            // 0x28262c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829F0u;
            goto label_2829f0;
        }
    }
    ctx->pc = 0x282630u;
    // 0x282630: 0x94c20150  lhu         $v0, 0x150($a2)
    ctx->pc = 0x282630u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x282634: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x282634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x282638: 0x104000ec  beqz        $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x282638u;
    {
        const bool branch_taken_0x282638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282638u;
        // 0x28263c: 0x2402c000  addiu       $v0, $zero, -0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282638) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282640u;
    // 0x282640: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x282640u;
    {
        const bool branch_taken_0x282640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282640u;
        // 0x282644: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282640) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282648u;
label_282648:
    // 0x282648: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x282648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x28264c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x28264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x282650: 0x1440009b  bnez        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x282650u;
    {
        const bool branch_taken_0x282650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282650u;
        // 0x282654: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282650) {
            ctx->pc = 0x2828C0u;
            goto label_2828c0;
        }
    }
    ctx->pc = 0x282658u;
    // 0x282658: 0xc60101e4  lwc1        $f1, 0x1E4($s0)
    ctx->pc = 0x282658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28265c: 0x3c0144e1  lui         $at, 0x44E1
    ctx->pc = 0x28265cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17633 << 16));
    // 0x282660: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282664: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x282664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282668: 0x45010076  bc1t        . + 4 + (0x76 << 2)
    ctx->pc = 0x282668u;
    {
        const bool branch_taken_0x282668 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282668u;
        // 0x28266c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282668) {
            ctx->pc = 0x282844u;
            goto label_282844;
        }
    }
    ctx->pc = 0x282670u;
    // 0x282670: 0x8cc200cc  lw          $v0, 0xCC($a2)
    ctx->pc = 0x282670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x282674: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x282674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x282678: 0x104000dc  beqz        $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x282678u;
    {
        const bool branch_taken_0x282678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282678u;
        // 0x28267c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282678) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282680u;
    // 0x282680: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x282680u;
    SET_GPR_U32(ctx, 31, 0x282688u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x282680u, 0x282688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282688u;
label_282688:
    // 0x282688: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x282688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28268c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28268Cu;
    {
        const bool branch_taken_0x28268c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28268c) {
            ctx->pc = 0x282690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28268Cu;
            // 0x282690: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2826A0u;
            goto label_2826a0;
        }
    }
    ctx->pc = 0x282694u;
    // 0x282694: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x282694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x282698: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x282698u;
    {
        const bool branch_taken_0x282698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282698u;
        // 0x28269c: 0x240300c0  addiu       $v1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282698) {
            ctx->pc = 0x2829E0u;
            goto label_2829e0;
        }
    }
    ctx->pc = 0x2826A0u;
label_2826a0:
    // 0x2826a0: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x2826A0u;
    {
        const bool branch_taken_0x2826a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2826A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2826A0u;
        // 0x2826a4: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2826a0) {
            ctx->pc = 0x2829E0u;
            goto label_2829e0;
        }
    }
    ctx->pc = 0x2826A8u;
label_2826a8:
    // 0x2826a8: 0x920301b0  lbu         $v1, 0x1B0($s0)
    ctx->pc = 0x2826a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2826ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2826acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2826b0: 0x1062007c  beq         $v1, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x2826B0u;
    {
        const bool branch_taken_0x2826b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2826B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2826B0u;
        // 0x2826b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2826b0) {
            ctx->pc = 0x2828A4u;
            goto label_2828a4;
        }
    }
    ctx->pc = 0x2826B8u;
    // 0x2826b8: 0x10620080  beq         $v1, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2826B8u;
    {
        const bool branch_taken_0x2826b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2826BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2826B8u;
        // 0x2826bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2826b8) {
            ctx->pc = 0x2828BCu;
            goto label_2828bc;
        }
    }
    ctx->pc = 0x2826C0u;
    // 0x2826c0: 0x1062006b  beq         $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2826C0u;
    {
        const bool branch_taken_0x2826c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2826C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2826C0u;
        // 0x2826c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2826c0) {
            ctx->pc = 0x282870u;
            goto label_282870;
        }
    }
    ctx->pc = 0x2826C8u;
    // 0x2826c8: 0x506200c8  beql        $v1, $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x2826C8u;
    {
        const bool branch_taken_0x2826c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2826c8) {
            ctx->pc = 0x2826CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2826C8u;
            // 0x2826cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x2826D0u;
    // 0x2826d0: 0x920201b7  lbu         $v0, 0x1B7($s0)
    ctx->pc = 0x2826d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 439)));
    // 0x2826d4: 0x544000c5  bnel        $v0, $zero, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2826D4u;
    {
        const bool branch_taken_0x2826d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2826d4) {
            ctx->pc = 0x2826D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2826D4u;
            // 0x2826d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x2826DCu;
    // 0x2826dc: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x2826dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2826e0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2826e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x2826e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2826e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2826e8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2826e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2826ec: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x2826ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2826f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2826f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2826f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2826f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2826f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2826F8u;
    {
        const bool branch_taken_0x2826f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2826FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2826F8u;
        // 0x2826fc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2826f8) {
            ctx->pc = 0x282718u;
            goto label_282718;
        }
    }
    ctx->pc = 0x282700u;
    // 0x282700: 0x9202020c  lbu         $v0, 0x20C($s0)
    ctx->pc = 0x282700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x282704: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x282704u;
    {
        const bool branch_taken_0x282704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282704) {
            ctx->pc = 0x282718u;
            goto label_282718;
        }
    }
    ctx->pc = 0x28270Cu;
    // 0x28270c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x28270cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x282710: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x282710u;
    {
        const bool branch_taken_0x282710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282710u;
        // 0x282714: 0x24030090  addiu       $v1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282710) {
            ctx->pc = 0x2829E0u;
            goto label_2829e0;
        }
    }
    ctx->pc = 0x282718u;
label_282718:
    // 0x282718: 0xc08431e  jal         func_210C78
    ctx->pc = 0x282718u;
    SET_GPR_U32(ctx, 31, 0x282720u);
    ctx->pc = 0x28271Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282718u;
    // 0x28271c: 0x340580e4  ori         $a1, $zero, 0x80E4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32996);
    ctx->in_delay_slot = false;
    ctx->pc = 0x210C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C78u, 0x282718u, 0x282720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282720u;
label_282720:
    // 0x282720: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x282720u;
    {
        const bool branch_taken_0x282720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282720) {
            ctx->pc = 0x282724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282720u;
            // 0x282724: 0x920201b6  lbu         $v0, 0x1B6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 438)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282740u;
            goto label_282740;
        }
    }
    ctx->pc = 0x282728u;
    // 0x282728: 0x86030096  lh          $v1, 0x96($s0)
    ctx->pc = 0x282728u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x28272c: 0x86020182  lh          $v0, 0x182($s0)
    ctx->pc = 0x28272cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 386)));
    // 0x282730: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x282730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x282734: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282734u;
    {
        const bool branch_taken_0x282734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282734u;
        // 0x282738: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282734) {
            ctx->pc = 0x28274Cu;
            goto label_28274c;
        }
    }
    ctx->pc = 0x28273Cu;
    // 0x28273c: 0x920201b6  lbu         $v0, 0x1B6($s0)
    ctx->pc = 0x28273cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 438)));
label_282740:
    // 0x282740: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x282740u;
    {
        const bool branch_taken_0x282740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282740) {
            ctx->pc = 0x282744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282740u;
            // 0x282744: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282758u;
            goto label_282758;
        }
    }
    ctx->pc = 0x282748u;
    // 0x282748: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x282748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_28274c:
    // 0x28274c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x28274Cu;
    {
        const bool branch_taken_0x28274c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28274Cu;
        // 0x282750: 0x24030090  addiu       $v1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28274c) {
            ctx->pc = 0x2829E0u;
            goto label_2829e0;
        }
    }
    ctx->pc = 0x282754u;
    // 0x282754: 0x0  nop
    ctx->pc = 0x282754u;
    // NOP
label_282758:
    // 0x282758: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x282758u;
    {
        const bool branch_taken_0x282758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282758u;
        // 0x28275c: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282758) {
            ctx->pc = 0x2828B4u;
            goto label_2828b4;
        }
    }
    ctx->pc = 0x282760u;
label_282760:
    // 0x282760: 0x920301b0  lbu         $v1, 0x1B0($s0)
    ctx->pc = 0x282760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x282764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282768: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x282768u;
    {
        const bool branch_taken_0x282768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282768u;
        // 0x28276c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282768) {
            ctx->pc = 0x2828A4u;
            goto label_2828a4;
        }
    }
    ctx->pc = 0x282770u;
    // 0x282770: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x282770u;
    {
        const bool branch_taken_0x282770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282770u;
        // 0x282774: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282770) {
            ctx->pc = 0x2828BCu;
            goto label_2828bc;
        }
    }
    ctx->pc = 0x282778u;
    // 0x282778: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x282778u;
    {
        const bool branch_taken_0x282778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282778u;
        // 0x28277c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282778) {
            ctx->pc = 0x282870u;
            goto label_282870;
        }
    }
    ctx->pc = 0x282780u;
    // 0x282780: 0x5062009a  beql        $v1, $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x282780u;
    {
        const bool branch_taken_0x282780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x282780) {
            ctx->pc = 0x282784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282780u;
            // 0x282784: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282788u;
    // 0x282788: 0x920201b7  lbu         $v0, 0x1B7($s0)
    ctx->pc = 0x282788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 439)));
    // 0x28278c: 0x54400097  bnel        $v0, $zero, . + 4 + (0x97 << 2)
    ctx->pc = 0x28278Cu;
    {
        const bool branch_taken_0x28278c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28278c) {
            ctx->pc = 0x282790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28278Cu;
            // 0x282790: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282794u;
    // 0x282794: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x282794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x282798: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x282798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x28279c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28279cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2827a0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2827a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2827a4: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x2827a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2827a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2827a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2827ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2827acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2827b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2827B0u;
    {
        const bool branch_taken_0x2827b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2827B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2827B0u;
        // 0x2827b4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2827b0) {
            ctx->pc = 0x2827C4u;
            goto label_2827c4;
        }
    }
    ctx->pc = 0x2827B8u;
    // 0x2827b8: 0x9202020c  lbu         $v0, 0x20C($s0)
    ctx->pc = 0x2827b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x2827bc: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x2827BCu;
    {
        const bool branch_taken_0x2827bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2827C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2827BCu;
        // 0x2827c0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2827bc) {
            ctx->pc = 0x2829DCu;
            goto label_2829dc;
        }
    }
    ctx->pc = 0x2827C4u;
label_2827c4:
    // 0x2827c4: 0xc08431e  jal         func_210C78
    ctx->pc = 0x2827C4u;
    SET_GPR_U32(ctx, 31, 0x2827CCu);
    ctx->pc = 0x2827C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2827C4u;
    // 0x2827c8: 0x340580e4  ori         $a1, $zero, 0x80E4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32996);
    ctx->in_delay_slot = false;
    ctx->pc = 0x210C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C78u, 0x2827C4u, 0x2827CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2827CCu;
label_2827cc:
    // 0x2827cc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2827CCu;
    {
        const bool branch_taken_0x2827cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2827cc) {
            ctx->pc = 0x2827D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2827CCu;
            // 0x2827d0: 0x920201b6  lbu         $v0, 0x1B6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 438)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2827ECu;
            goto label_2827ec;
        }
    }
    ctx->pc = 0x2827D4u;
    // 0x2827d4: 0x86030096  lh          $v1, 0x96($s0)
    ctx->pc = 0x2827d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2827d8: 0x86020182  lh          $v0, 0x182($s0)
    ctx->pc = 0x2827d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 386)));
    // 0x2827dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2827dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2827e0: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x2827E0u;
    {
        const bool branch_taken_0x2827e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2827E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2827E0u;
        // 0x2827e4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2827e0) {
            ctx->pc = 0x2829DCu;
            goto label_2829dc;
        }
    }
    ctx->pc = 0x2827E8u;
    // 0x2827e8: 0x920201b6  lbu         $v0, 0x1B6($s0)
    ctx->pc = 0x2827e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 438)));
label_2827ec:
    // 0x2827ec: 0x5440007b  bnel        $v0, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x2827ECu;
    {
        const bool branch_taken_0x2827ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2827ec) {
            ctx->pc = 0x2827F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2827ECu;
            // 0x2827f0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829DCu;
            goto label_2829dc;
        }
    }
    ctx->pc = 0x2827F4u;
    // 0x2827f4: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x2827f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2827f8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2827F8u;
    {
        const bool branch_taken_0x2827f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2827FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2827F8u;
        // 0x2827fc: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2827f8) {
            ctx->pc = 0x2828B4u;
            goto label_2828b4;
        }
    }
    ctx->pc = 0x282800u;
label_282800:
    // 0x282800: 0x920301b0  lbu         $v1, 0x1B0($s0)
    ctx->pc = 0x282800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x282804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282808: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x282808u;
    {
        const bool branch_taken_0x282808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282808u;
        // 0x28280c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282808) {
            ctx->pc = 0x2828A4u;
            goto label_2828a4;
        }
    }
    ctx->pc = 0x282810u;
    // 0x282810: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x282810u;
    {
        const bool branch_taken_0x282810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282810u;
        // 0x282814: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282810) {
            ctx->pc = 0x2828BCu;
            goto label_2828bc;
        }
    }
    ctx->pc = 0x282818u;
    // 0x282818: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x282818u;
    {
        const bool branch_taken_0x282818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282818u;
        // 0x28281c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282818) {
            ctx->pc = 0x282870u;
            goto label_282870;
        }
    }
    ctx->pc = 0x282820u;
    // 0x282820: 0x50620072  beql        $v1, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x282820u;
    {
        const bool branch_taken_0x282820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x282820) {
            ctx->pc = 0x282824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282820u;
            // 0x282824: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282828u;
    // 0x282828: 0x920201f9  lbu         $v0, 0x1F9($s0)
    ctx->pc = 0x282828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 505)));
    // 0x28282c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28282Cu;
    {
        const bool branch_taken_0x28282c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28282Cu;
        // 0x282830: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28282c) {
            ctx->pc = 0x282844u;
            goto label_282844;
        }
    }
    ctx->pc = 0x282834u;
    // 0x282834: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x282834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x282838: 0x30820400  andi        $v0, $a0, 0x400
    ctx->pc = 0x282838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x28283c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28283Cu;
    {
        const bool branch_taken_0x28283c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28283Cu;
        // 0x282840: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28283c) {
            ctx->pc = 0x2828B0u;
            goto label_2828b0;
        }
    }
    ctx->pc = 0x282844u;
label_282844:
    // 0x282844: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x282844u;
    {
        const bool branch_taken_0x282844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282844u;
        // 0x282848: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282844) {
            ctx->pc = 0x2829E8u;
            goto label_2829e8;
        }
    }
    ctx->pc = 0x28284Cu;
    // 0x28284c: 0x0  nop
    ctx->pc = 0x28284cu;
    // NOP
label_282850:
    // 0x282850: 0x920301b0  lbu         $v1, 0x1B0($s0)
    ctx->pc = 0x282850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x282854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282858: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x282858u;
    {
        const bool branch_taken_0x282858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282858u;
        // 0x28285c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282858) {
            ctx->pc = 0x2828A4u;
            goto label_2828a4;
        }
    }
    ctx->pc = 0x282860u;
    // 0x282860: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x282860u;
    {
        const bool branch_taken_0x282860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282860u;
        // 0x282864: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282860) {
            ctx->pc = 0x2828BCu;
            goto label_2828bc;
        }
    }
    ctx->pc = 0x282868u;
    // 0x282868: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282868u;
    {
        const bool branch_taken_0x282868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282868u;
        // 0x28286c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282868) {
            ctx->pc = 0x282880u;
            goto label_282880;
        }
    }
    ctx->pc = 0x282870u;
label_282870:
    // 0x282870: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x282870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
label_282874:
    // 0x282874: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x282874u;
    {
        const bool branch_taken_0x282874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282874u;
        // 0x282878: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282874) {
            ctx->pc = 0x2829E8u;
            goto label_2829e8;
        }
    }
    ctx->pc = 0x28287Cu;
    // 0x28287c: 0x0  nop
    ctx->pc = 0x28287cu;
    // NOP
label_282880:
    // 0x282880: 0x5062005a  beql        $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x282880u;
    {
        const bool branch_taken_0x282880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x282880) {
            ctx->pc = 0x282884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282880u;
            // 0x282884: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282888u;
    // 0x282888: 0x920201f9  lbu         $v0, 0x1F9($s0)
    ctx->pc = 0x282888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 505)));
    // 0x28288c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28288Cu;
    {
        const bool branch_taken_0x28288c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28288Cu;
        // 0x282890: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28288c) {
            ctx->pc = 0x2828A8u;
            goto label_2828a8;
        }
    }
    ctx->pc = 0x282894u;
    // 0x282894: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x282894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x282898: 0x30820400  andi        $v0, $a0, 0x400
    ctx->pc = 0x282898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x28289c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28289Cu;
    {
        const bool branch_taken_0x28289c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2828A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28289Cu;
        // 0x2828a0: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28289c) {
            ctx->pc = 0x2828B4u;
            goto label_2828b4;
        }
    }
    ctx->pc = 0x2828A4u;
label_2828a4:
    // 0x2828a4: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x2828a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_2828a8:
    // 0x2828a8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2828A8u;
    {
        const bool branch_taken_0x2828a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2828ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828A8u;
        // 0x2828ac: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828a8) {
            ctx->pc = 0x2829E8u;
            goto label_2829e8;
        }
    }
    ctx->pc = 0x2828B0u;
label_2828b0:
    // 0x2828b0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2828b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_2828b4:
    // 0x2828b4: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2828B4u;
    {
        const bool branch_taken_0x2828b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2828B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828B4u;
        // 0x2828b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828b4) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x2828BCu;
label_2828bc:
    // 0x2828bc: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x2828bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2828c0:
    // 0x2828c0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2828C0u;
    {
        const bool branch_taken_0x2828c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2828C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828C0u;
        // 0x2828c4: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828c0) {
            ctx->pc = 0x2829E8u;
            goto label_2829e8;
        }
    }
    ctx->pc = 0x2828C8u;
label_2828c8:
    // 0x2828c8: 0xc07e60a  jal         func_1F9828
    ctx->pc = 0x2828C8u;
    SET_GPR_U32(ctx, 31, 0x2828D0u);
    ctx->pc = 0x1F9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9828u, 0x2828C8u, 0x2828D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2828D0u;
label_2828d0:
    // 0x2828d0: 0xc07e622  jal         func_1F9888
    ctx->pc = 0x2828D0u;
    SET_GPR_U32(ctx, 31, 0x2828D8u);
    ctx->pc = 0x2828D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2828D0u;
    // 0x2828d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9888u, 0x2828D0u, 0x2828D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2828D8u;
label_2828d8:
    // 0x2828d8: 0x8f839720  lw          $v1, -0x68E0($gp)
    ctx->pc = 0x2828d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x2828dc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2828dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2828e0: 0x16030042  bne         $s0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2828E0u;
    {
        const bool branch_taken_0x2828e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2828E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828E0u;
        // 0x2828e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828e0) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x2828E8u;
    // 0x2828e8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2828e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2828ec: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2828ECu;
    {
        const bool branch_taken_0x2828ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2828F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828ECu;
        // 0x2828f0: 0x24030090  addiu       $v1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828ec) {
            ctx->pc = 0x2829E0u;
            goto label_2829e0;
        }
    }
    ctx->pc = 0x2828F4u;
    // 0x2828f4: 0x0  nop
    ctx->pc = 0x2828f4u;
    // NOP
label_2828f8:
    // 0x2828f8: 0xc07e60a  jal         func_1F9828
    ctx->pc = 0x2828F8u;
    SET_GPR_U32(ctx, 31, 0x282900u);
    ctx->pc = 0x1F9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9828u, 0x2828F8u, 0x282900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282900u;
label_282900:
    // 0x282900: 0xc07e622  jal         func_1F9888
    ctx->pc = 0x282900u;
    SET_GPR_U32(ctx, 31, 0x282908u);
    ctx->pc = 0x282904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282900u;
    // 0x282904: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9888u, 0x282900u, 0x282908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282908u;
label_282908:
    // 0x282908: 0x8f839720  lw          $v1, -0x68E0($gp)
    ctx->pc = 0x282908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x28290c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x28290cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x282910: 0x16030036  bne         $s0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x282910u;
    {
        const bool branch_taken_0x282910 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x282914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282910u;
        // 0x282914: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282910) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282918u;
    // 0x282918: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x282918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28291c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x28291Cu;
    {
        const bool branch_taken_0x28291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28291Cu;
        // 0x282920: 0x240300c0  addiu       $v1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28291c) {
            ctx->pc = 0x2829E0u;
            goto label_2829e0;
        }
    }
    ctx->pc = 0x282924u;
    // 0x282924: 0x0  nop
    ctx->pc = 0x282924u;
    // NOP
label_282928:
    // 0x282928: 0xc07e60a  jal         func_1F9828
    ctx->pc = 0x282928u;
    SET_GPR_U32(ctx, 31, 0x282930u);
    ctx->pc = 0x1F9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9828u, 0x282928u, 0x282930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282930u;
label_282930:
    // 0x282930: 0xc07e622  jal         func_1F9888
    ctx->pc = 0x282930u;
    SET_GPR_U32(ctx, 31, 0x282938u);
    ctx->pc = 0x282934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282930u;
    // 0x282934: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9888u, 0x282930u, 0x282938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282938u;
label_282938:
    // 0x282938: 0x8f839720  lw          $v1, -0x68E0($gp)
    ctx->pc = 0x282938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x28293c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x28293cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x282940: 0x1603002a  bne         $s0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x282940u;
    {
        const bool branch_taken_0x282940 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x282944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282940u;
        // 0x282944: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282940) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282948u;
    // 0x282948: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x282948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28294c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x28294Cu;
    {
        const bool branch_taken_0x28294c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28294Cu;
        // 0x282950: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28294c) {
            ctx->pc = 0x2829E0u;
            goto label_2829e0;
        }
    }
    ctx->pc = 0x282954u;
    // 0x282954: 0x0  nop
    ctx->pc = 0x282954u;
    // NOP
label_282958:
    // 0x282958: 0xc07e60a  jal         func_1F9828
    ctx->pc = 0x282958u;
    SET_GPR_U32(ctx, 31, 0x282960u);
    ctx->pc = 0x1F9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9828u, 0x282958u, 0x282960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282960u;
label_282960:
    // 0x282960: 0xc07e622  jal         func_1F9888
    ctx->pc = 0x282960u;
    SET_GPR_U32(ctx, 31, 0x282968u);
    ctx->pc = 0x282964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282960u;
    // 0x282964: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9888u, 0x282960u, 0x282968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282968u;
label_282968:
    // 0x282968: 0x8f839720  lw          $v1, -0x68E0($gp)
    ctx->pc = 0x282968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x28296c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x28296cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x282970: 0x1603001e  bne         $s0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x282970u;
    {
        const bool branch_taken_0x282970 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x282974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282970u;
        // 0x282974: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282970) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x282978u;
    // 0x282978: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x282978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28297c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x28297Cu;
    {
        const bool branch_taken_0x28297c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28297Cu;
        // 0x282980: 0x240300a0  addiu       $v1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28297c) {
            ctx->pc = 0x2829E0u;
            goto label_2829e0;
        }
    }
    ctx->pc = 0x282984u;
    // 0x282984: 0x0  nop
    ctx->pc = 0x282984u;
    // NOP
label_282988:
    // 0x282988: 0xc07e60a  jal         func_1F9828
    ctx->pc = 0x282988u;
    SET_GPR_U32(ctx, 31, 0x282990u);
    ctx->pc = 0x1F9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9828u, 0x282988u, 0x282990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282990u;
label_282990:
    // 0x282990: 0xc07e622  jal         func_1F9888
    ctx->pc = 0x282990u;
    SET_GPR_U32(ctx, 31, 0x282998u);
    ctx->pc = 0x282994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282990u;
    // 0x282994: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9888u, 0x282990u, 0x282998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282998u;
label_282998:
    // 0x282998: 0x8f839720  lw          $v1, -0x68E0($gp)
    ctx->pc = 0x282998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x28299c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x28299cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2829a0: 0x16030012  bne         $s0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2829A0u;
    {
        const bool branch_taken_0x2829a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2829A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829A0u;
        // 0x2829a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829a0) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x2829A8u;
    // 0x2829a8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2829a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2829ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2829ACu;
    {
        const bool branch_taken_0x2829ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2829B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829ACu;
        // 0x2829b0: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829ac) {
            ctx->pc = 0x2829E0u;
            goto label_2829e0;
        }
    }
    ctx->pc = 0x2829B4u;
    // 0x2829b4: 0x0  nop
    ctx->pc = 0x2829b4u;
    // NOP
label_2829b8:
    // 0x2829b8: 0xc07e60a  jal         func_1F9828
    ctx->pc = 0x2829B8u;
    SET_GPR_U32(ctx, 31, 0x2829C0u);
    ctx->pc = 0x1F9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9828u, 0x2829B8u, 0x2829C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2829C0u;
label_2829c0:
    // 0x2829c0: 0xc07e622  jal         func_1F9888
    ctx->pc = 0x2829C0u;
    SET_GPR_U32(ctx, 31, 0x2829C8u);
    ctx->pc = 0x2829C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2829C0u;
    // 0x2829c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9888u, 0x2829C0u, 0x2829C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2829C8u;
label_2829c8:
    // 0x2829c8: 0x8f839720  lw          $v1, -0x68E0($gp)
    ctx->pc = 0x2829c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x2829cc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2829ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2829d0: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2829D0u;
    {
        const bool branch_taken_0x2829d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2829D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829D0u;
        // 0x2829d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829d0) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x2829D8u;
    // 0x2829d8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2829d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2829dc:
    // 0x2829dc: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x2829dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2829e0:
    // 0x2829e0: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x2829e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2829e4: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x2829e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_2829e8:
    // 0x2829e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2829e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2829ec:
    // 0x2829ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2829ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2829f0:
    // 0x2829f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2829f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2829f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2829f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2829f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2829F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2829FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829F8u;
        // 0x2829fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2829F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282A00u;
}
