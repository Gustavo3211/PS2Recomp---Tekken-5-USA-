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

// Function: sub_003260B8
// Address: 0x3260b8 - 0x326180
void sub_003260B8_0x3260b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003260B8_0x3260b8");
#endif

    switch (ctx->pc) {
        case 0x3260b8u: goto label_3260b8;
        case 0x3260bcu: goto label_3260bc;
        case 0x3260c0u: goto label_3260c0;
        case 0x3260c4u: goto label_3260c4;
        case 0x3260c8u: goto label_3260c8;
        case 0x3260ccu: goto label_3260cc;
        case 0x3260d0u: goto label_3260d0;
        case 0x3260d4u: goto label_3260d4;
        case 0x3260d8u: goto label_3260d8;
        case 0x3260dcu: goto label_3260dc;
        case 0x3260e0u: goto label_3260e0;
        case 0x3260e4u: goto label_3260e4;
        case 0x3260e8u: goto label_3260e8;
        case 0x3260ecu: goto label_3260ec;
        case 0x3260f0u: goto label_3260f0;
        case 0x3260f4u: goto label_3260f4;
        case 0x3260f8u: goto label_3260f8;
        case 0x3260fcu: goto label_3260fc;
        case 0x326100u: goto label_326100;
        case 0x326104u: goto label_326104;
        case 0x326108u: goto label_326108;
        case 0x32610cu: goto label_32610c;
        case 0x326110u: goto label_326110;
        case 0x326114u: goto label_326114;
        case 0x326118u: goto label_326118;
        case 0x32611cu: goto label_32611c;
        case 0x326120u: goto label_326120;
        case 0x326124u: goto label_326124;
        case 0x326128u: goto label_326128;
        case 0x32612cu: goto label_32612c;
        case 0x326130u: goto label_326130;
        case 0x326134u: goto label_326134;
        case 0x326138u: goto label_326138;
        case 0x32613cu: goto label_32613c;
        case 0x326140u: goto label_326140;
        case 0x326144u: goto label_326144;
        case 0x326148u: goto label_326148;
        case 0x32614cu: goto label_32614c;
        case 0x326150u: goto label_326150;
        case 0x326154u: goto label_326154;
        case 0x326158u: goto label_326158;
        case 0x32615cu: goto label_32615c;
        case 0x326160u: goto label_326160;
        case 0x326164u: goto label_326164;
        case 0x326168u: goto label_326168;
        case 0x32616cu: goto label_32616c;
        case 0x326170u: goto label_326170;
        case 0x326174u: goto label_326174;
        case 0x326178u: goto label_326178;
        case 0x32617cu: goto label_32617c;
        default: break;
    }

    ctx->pc = 0x3260b8u;

label_3260b8:
    // 0x3260b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3260b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3260bc:
    // 0x3260bc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3260bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3260c0:
    // 0x3260c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3260c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3260c4:
    // 0x3260c4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3260c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3260c8:
    // 0x3260c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3260c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3260cc:
    // 0x3260cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3260ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3260d0:
    // 0x3260d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3260d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3260d4:
    // 0x3260d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3260d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3260d8:
    // 0x3260d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3260d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3260dc:
    // 0x3260dc: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x3260dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_3260e0:
    // 0x3260e0: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x3260e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_3260e4:
    // 0x3260e4: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x3260e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_3260e8:
    // 0x3260e8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3260e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3260ec:
    // 0x3260ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3260ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3260f0:
    // 0x3260f0: 0x40f809  jalr        $v0
label_3260f4:
    if (ctx->pc == 0x3260F4u) {
        ctx->pc = 0x3260F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3260F0u;
        // 0x3260f4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3260F8u;
        goto label_3260f8;
    }
    ctx->pc = 0x3260F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3260F8u);
        ctx->pc = 0x3260F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3260F0u;
        // 0x3260f4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3260F0u, 0x3260F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3260F8u;
label_3260f8:
    // 0x3260f8: 0x3c066400  lui         $a2, 0x6400
    ctx->pc = 0x3260f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25600 << 16));
label_3260fc:
    // 0x3260fc: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x3260fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
label_326100:
    // 0x326100: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x326100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_326104:
    // 0x326104: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x326104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
label_326108:
    // 0x326108: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x326108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_32610c:
    // 0x32610c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x32610cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
label_326110:
    // 0x326110: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x326110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_326114:
    // 0x326114: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x326114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_326118:
    // 0x326118: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x326118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_32611c:
    // 0x32611c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x32611cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_326120:
    // 0x326120: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x326120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_326124:
    // 0x326124: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x326124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_326128:
    // 0x326128: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x326128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_32612c:
    // 0x32612c: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
label_326130:
    if (ctx->pc == 0x326130u) {
        ctx->pc = 0x326130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32612Cu;
        // 0x326130: 0x34c68000  ori         $a2, $a2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x326134u;
        goto label_326134;
    }
    ctx->pc = 0x32612Cu;
    {
        const bool branch_taken_0x32612c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x326130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32612Cu;
        // 0x326130: 0x34c68000  ori         $a2, $a2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32612c) {
            ctx->pc = 0x326140u;
            goto label_326140;
        }
    }
    ctx->pc = 0x326134u;
label_326134:
    // 0x326134: 0x10000003  b           . + 4 + (0x3 << 2)
label_326138:
    if (ctx->pc == 0x326138u) {
        ctx->pc = 0x326138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326134u;
        // 0x326138: 0xe42025  or          $a0, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32613Cu;
        goto label_32613c;
    }
    ctx->pc = 0x326134u;
    {
        const bool branch_taken_0x326134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326134u;
        // 0x326138: 0xe42025  or          $a0, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326134) {
            ctx->pc = 0x326144u;
            goto label_326144;
        }
    }
    ctx->pc = 0x32613Cu;
label_32613c:
    // 0x32613c: 0x0  nop
    ctx->pc = 0x32613cu;
    // NOP
label_326140:
    // 0x326140: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x326140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_326144:
    // 0x326144: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x326144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_326148:
    // 0x326148: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x326148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_32614c:
    // 0x32614c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_326150:
    // 0x326150: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x326150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_326154:
    // 0x326154: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x326154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_326158:
    // 0x326158: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x326158u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32615c:
    // 0x32615c: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x32615cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
label_326160:
    // 0x326160: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x326160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_326164:
    // 0x326164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_326168:
    // 0x326168: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x326168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32616c:
    // 0x32616c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32616cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_326170:
    // 0x326170: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x326170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_326174:
    // 0x326174: 0x3e00008  jr          $ra
label_326178:
    if (ctx->pc == 0x326178u) {
        ctx->pc = 0x326178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326174u;
        // 0x326178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32617Cu;
        goto label_32617c;
    }
    ctx->pc = 0x326174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326174u;
        // 0x326178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32617Cu;
label_32617c:
    // 0x32617c: 0x0  nop
    ctx->pc = 0x32617cu;
    // NOP
    ctx->pc = 0x326180u;
}
