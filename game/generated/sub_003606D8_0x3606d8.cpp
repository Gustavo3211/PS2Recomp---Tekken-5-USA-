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

// Function: sub_003606D8
// Address: 0x3606d8 - 0x360818
void sub_003606D8_0x3606d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003606D8_0x3606d8");
#endif

    switch (ctx->pc) {
        case 0x360708u: goto label_360708;
        case 0x360800u: goto label_360800;
        default: break;
    }

    ctx->pc = 0x3606d8u;

    // 0x3606d8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3606d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3606dc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3606dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3606e0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3606e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3606e4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3606e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3606e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3606e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3606ec: 0x58403  sra         $s0, $a1, 16
    ctx->pc = 0x3606ecu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3606f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3606f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3606f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3606f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3606f8: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x3606f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3606fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3606fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x360700: 0xc0d8284  jal         func_360A10
    ctx->pc = 0x360700u;
    SET_GPR_U32(ctx, 31, 0x360708u);
    ctx->pc = 0x360704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360700u;
    // 0x360704: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x360A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360A10u, 0x360700u, 0x360708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360708u;
label_360708:
    // 0x360708: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x360708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36070c: 0x24c2000e  addiu       $v0, $a2, 0xE
    ctx->pc = 0x36070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 14));
    // 0x360710: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x360710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x360714: 0x2c420038  sltiu       $v0, $v0, 0x38
    ctx->pc = 0x360714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)56) ? 1 : 0);
    // 0x360718: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x360718u;
    {
        const bool branch_taken_0x360718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360718) {
            ctx->pc = 0x36071Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360718u;
            // 0x36071c: 0x24c2ffd6  addiu       $v0, $a2, -0x2A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967254));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360738u;
            goto label_360738;
        }
    }
    ctx->pc = 0x360720u;
    // 0x360720: 0x2408fff2  addiu       $t0, $zero, -0xE
    ctx->pc = 0x360720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x360724: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x360724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x360728: 0x2407ffd7  addiu       $a3, $zero, -0x29
    ctx->pc = 0x360728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967255));
    // 0x36072c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x36072Cu;
    {
        const bool branch_taken_0x36072c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36072Cu;
        // 0x360730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36072c) {
            ctx->pc = 0x3607A0u;
            goto label_3607a0;
        }
    }
    ctx->pc = 0x360734u;
    // 0x360734: 0x0  nop
    ctx->pc = 0x360734u;
    // NOP
label_360738:
    // 0x360738: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x360738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36073c: 0x2c42002c  sltiu       $v0, $v0, 0x2C
    ctx->pc = 0x36073cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)44) ? 1 : 0);
    // 0x360740: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x360740u;
    {
        const bool branch_taken_0x360740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360740) {
            ctx->pc = 0x360744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360740u;
            // 0x360744: 0x24c20071  addiu       $v0, $a2, 0x71 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 113));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360760u;
            goto label_360760;
        }
    }
    ctx->pc = 0x360748u;
    // 0x360748: 0x2408002a  addiu       $t0, $zero, 0x2A
    ctx->pc = 0x360748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x36074c: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x36074cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x360750: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x360750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360754: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x360754u;
    {
        const bool branch_taken_0x360754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360754u;
        // 0x360758: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360754) {
            ctx->pc = 0x3607A0u;
            goto label_3607a0;
        }
    }
    ctx->pc = 0x36075Cu;
    // 0x36075c: 0x0  nop
    ctx->pc = 0x36075cu;
    // NOP
label_360760:
    // 0x360760: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x360760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x360764: 0x2c420064  sltiu       $v0, $v0, 0x64
    ctx->pc = 0x360764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x360768: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x360768u;
    {
        const bool branch_taken_0x360768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360768u;
        // 0x36076c: 0x2408ff8f  addiu       $t0, $zero, -0x71 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360768) {
            ctx->pc = 0x360780u;
            goto label_360780;
        }
    }
    ctx->pc = 0x360770u;
    // 0x360770: 0x2404fff2  addiu       $a0, $zero, -0xE
    ctx->pc = 0x360770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x360774: 0x2407ffaa  addiu       $a3, $zero, -0x56
    ctx->pc = 0x360774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967210));
    // 0x360778: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x360778u;
    {
        const bool branch_taken_0x360778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360778u;
        // 0x36077c: 0x2402ffd7  addiu       $v0, $zero, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360778) {
            ctx->pc = 0x3607A0u;
            goto label_3607a0;
        }
    }
    ctx->pc = 0x360780u;
label_360780:
    // 0x360780: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x360780u;
    {
        const bool branch_taken_0x360780 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x360784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360780u;
        // 0x360784: 0x24080055  addiu       $t0, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360780) {
            ctx->pc = 0x360794u;
            goto label_360794;
        }
    }
    ctx->pc = 0x360788u;
    // 0x360788: 0x24c200fe  addiu       $v0, $a2, 0xFE
    ctx->pc = 0x360788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 254));
    // 0x36078c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x36078cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x360790: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x360790u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_360794:
    // 0x360794: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x360794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x360798: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x360798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x36079c: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x36079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_3607a0:
    // 0x3607a0: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x3607a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3607a4: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x3607a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3607a8: 0x71022818  mult1       $a1, $t0, $v0
    ctx->pc = 0x3607a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3607ac: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3607acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3607b0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x3607b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3607b4: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3607B4u;
    {
        const bool branch_taken_0x3607b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3607b4) {
            ctx->pc = 0x3607B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3607B4u;
            // 0x3607b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3607BCu;
            goto label_3607bc;
        }
    }
    ctx->pc = 0x3607BCu;
label_3607bc:
    // 0x3607bc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3607bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3607c0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3607c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3607c4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x3607c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3607c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3607c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3607cc: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x3607ccu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3607d0: 0x1012  mflo        $v0
    ctx->pc = 0x3607d0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3607d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3607d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3607d8: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x3607d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3607dc: 0x28830080  slti        $v1, $a0, 0x80
    ctx->pc = 0x3607dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x3607e0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3607E0u;
    {
        const bool branch_taken_0x3607e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3607E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3607E0u;
        // 0x3607e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3607e0) {
            ctx->pc = 0x3607F4u;
            goto label_3607f4;
        }
    }
    ctx->pc = 0x3607E8u;
    // 0x3607e8: 0x2482ff02  addiu       $v0, $a0, -0xFE
    ctx->pc = 0x3607e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967042));
    // 0x3607ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3607ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3607f0: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x3607f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
label_3607f4:
    // 0x3607f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3607f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3607f8: 0xc0d8164  jal         func_360590
    ctx->pc = 0x3607F8u;
    SET_GPR_U32(ctx, 31, 0x360800u);
    ctx->pc = 0x3607FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3607F8u;
    // 0x3607fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360590u, 0x3607F8u, 0x360800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360800u;
label_360800:
    // 0x360800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x360804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x360808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36080c: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x36080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360810: 0x3e00008  jr          $ra
    ctx->pc = 0x360810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360810u;
        // 0x360814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360818u;
}
