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

// Function: sub_005040C0
// Address: 0x5040c0 - 0x5041c0
void sub_005040C0_0x5040c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005040C0_0x5040c0");
#endif

    switch (ctx->pc) {
        case 0x504138u: goto label_504138;
        case 0x504148u: goto label_504148;
        case 0x504154u: goto label_504154;
        case 0x504160u: goto label_504160;
        default: break;
    }

    ctx->pc = 0x5040c0u;

    // 0x5040c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5040c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x5040c4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x5040c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5040c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x5040c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x5040cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x5040ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5040d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x5040d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x5040d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x5040d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5040d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x5040d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x5040dc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x5040dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5040e0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x5040e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x5040e4: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x5040e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x5040e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5040e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x5040ec: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x5040ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x5040f0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x5040f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5040f4: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x5040f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5040f8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x5040f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x5040fc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x5040fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x504100: 0x85280022  lh          $t0, 0x22($t1)
    ctx->pc = 0x504100u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 34)));
    // 0x504104: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x504104u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x504108: 0x85220020  lh          $v0, 0x20($t1)
    ctx->pc = 0x504108u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x50410c: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x50410cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x504110: 0x96490000  lhu         $t1, 0x0($s2)
    ctx->pc = 0x504110u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x504114: 0x1134025  or          $t0, $t0, $s3
    ctx->pc = 0x504114u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 19));
    // 0x504118: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x504118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x50411c: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x50411cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x504120: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x504120u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x504124: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x504124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x504128: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x504128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x50412c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x50412cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x504130: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504130u;
    SET_GPR_U32(ctx, 31, 0x504138u);
    ctx->pc = 0x504134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504130u;
    // 0x504134: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504130u, 0x504138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504138u;
label_504138:
    // 0x504138: 0x27b00008  addiu       $s0, $sp, 0x8
    ctx->pc = 0x504138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x50413c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x50413cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504140: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504140u;
    SET_GPR_U32(ctx, 31, 0x504148u);
    ctx->pc = 0x504144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504140u;
    // 0x504144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504140u, 0x504148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504148u;
label_504148:
    // 0x504148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x504148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50414c: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x50414Cu;
    SET_GPR_U32(ctx, 31, 0x504154u);
    ctx->pc = 0x504150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50414Cu;
    // 0x504150: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x50414Cu, 0x504154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504154u;
label_504154:
    // 0x504154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504158: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504158u;
    SET_GPR_U32(ctx, 31, 0x504160u);
    ctx->pc = 0x50415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504158u;
    // 0x50415c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504158u, 0x504160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504160u;
label_504160:
    // 0x504160: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x504160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x504164: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x504164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x504168: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x504168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50416c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50416cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x504170: 0x87a50004  lh          $a1, 0x4($sp)
    ctx->pc = 0x504170u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x504174: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x504174u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x504178: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x504178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50417c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x50417cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x504180: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x504180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x504184: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x504184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x504188: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x504188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x50418c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x50418cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504190: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x504190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x504194: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x504194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x504198: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x504198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x50419c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x50419cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x5041a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x5041a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5041a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5041a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5041a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5041a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5041ac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x5041acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x5041b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x5041b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5041b4: 0x3e00008  jr          $ra
    ctx->pc = 0x5041B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5041B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5041B4u;
        // 0x5041b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5041B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5041BCu;
    // 0x5041bc: 0x0  nop
    ctx->pc = 0x5041bcu;
    // NOP
    ctx->pc = 0x5041c0u;
}
