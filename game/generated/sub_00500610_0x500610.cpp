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

// Function: sub_00500610
// Address: 0x500610 - 0x500748
void sub_00500610_0x500610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500610_0x500610");
#endif

    switch (ctx->pc) {
        case 0x50065cu: goto label_50065c;
        case 0x500674u: goto label_500674;
        case 0x50068cu: goto label_50068c;
        case 0x5006ecu: goto label_5006ec;
        default: break;
    }

    ctx->pc = 0x500610u;

    // 0x500610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x500610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x500614: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x500614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x500618: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x500618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50061c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50061cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x500620: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x500620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500624: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x500624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x500628: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x500628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50062c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x50062cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x500630: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x500630u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500634: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x500634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x500638: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x500638u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50063c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x50063cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500640: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x500640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500644: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x500644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x500648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50064c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x50064cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x500650: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x500650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x500654: 0xc14010c  jal         func_500430
    ctx->pc = 0x500654u;
    SET_GPR_U32(ctx, 31, 0x50065Cu);
    ctx->pc = 0x500658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500654u;
    // 0x500658: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500430u, 0x500654u, 0x50065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50065Cu;
label_50065c:
    // 0x50065c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50065cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500660: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x500660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500664: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x500664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500668: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x500668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50066c: 0xc14010c  jal         func_500430
    ctx->pc = 0x50066Cu;
    SET_GPR_U32(ctx, 31, 0x500674u);
    ctx->pc = 0x500670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50066Cu;
    // 0x500670: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500430u, 0x50066Cu, 0x500674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x500674u;
label_500674:
    // 0x500674: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x500674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500678: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x500678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50067c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x50067cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500680: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x500680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500684: 0xc14010c  jal         func_500430
    ctx->pc = 0x500684u;
    SET_GPR_U32(ctx, 31, 0x50068Cu);
    ctx->pc = 0x500688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500684u;
    // 0x500688: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500430u, 0x500684u, 0x50068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50068Cu;
label_50068c:
    // 0x50068c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x50068cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x500690: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x500690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x500694: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x500694u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x500698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x500698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50069c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50069cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5006a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5006a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5006a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5006a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5006a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5006a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5006ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x5006acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5006b0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x5006b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5006b4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x5006b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5006b8: 0x1012  mflo        $v0
    ctx->pc = 0x5006b8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x5006bc: 0x3e00008  jr          $ra
    ctx->pc = 0x5006BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5006C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5006BCu;
        // 0x5006c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5006BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5006C4u;
    // 0x5006c4: 0x0  nop
    ctx->pc = 0x5006c4u;
    // NOP
    // 0x5006c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5006c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5006cc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x5006ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x5006d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5006d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5006d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x5006d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5006d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x5006d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5006dc: 0x8c44cfa0  lw          $a0, -0x3060($v0)
    ctx->pc = 0x5006dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CFA0u));
    // 0x5006e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x5006e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x5006e4: 0xc13faa6  jal         func_4FEA98
    ctx->pc = 0x5006E4u;
    SET_GPR_U32(ctx, 31, 0x5006ECu);
    ctx->pc = 0x5006E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5006E4u;
    // 0x5006e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FEA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FEA98u, 0x5006E4u, 0x5006ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5006ECu;
label_5006ec:
    // 0x5006ec: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x5006ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x5006f0: 0x24a5cfac  addiu       $a1, $a1, -0x3054
    ctx->pc = 0x5006f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954924));
    // 0x5006f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5006f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5006f8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x5006f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CFACu));
    // 0x5006fc: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x5006fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x500700: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x500700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x500704: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x500704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500708: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x500708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x50070c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x50070cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x500710: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x500710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x500714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x500714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500718: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x500718u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CFACu));
    // 0x50071c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x50071cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x500720: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x500720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x500724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x500724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x500728: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x500728u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x50072c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x50072cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CFACu));
    // 0x500730: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x500730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x500734: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x500734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x500738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x500738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50073c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x50073cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x500740: 0x3e00008  jr          $ra
    ctx->pc = 0x500740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x500740u;
        // 0x500744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x500740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500748u;
}
