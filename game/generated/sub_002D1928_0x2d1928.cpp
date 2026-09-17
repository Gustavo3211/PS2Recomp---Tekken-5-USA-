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

// Function: sub_002D1928
// Address: 0x2d1928 - 0x2d1a90
void sub_002D1928_0x2d1928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1928_0x2d1928");
#endif

    switch (ctx->pc) {
        case 0x2d1974u: goto label_2d1974;
        case 0x2d19a0u: goto label_2d19a0;
        case 0x2d19a8u: goto label_2d19a8;
        case 0x2d19b4u: goto label_2d19b4;
        case 0x2d19bcu: goto label_2d19bc;
        case 0x2d1a04u: goto label_2d1a04;
        case 0x2d1a38u: goto label_2d1a38;
        default: break;
    }

    ctx->pc = 0x2d1928u;

    // 0x2d1928: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d1928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d192c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d192cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d1930: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d1930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d1934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d1938: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d1938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d193c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d193cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d1940: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d1940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d1944: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d1944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d1948: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d1948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d194c: 0x12400046  beqz        $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x2D194Cu;
    {
        const bool branch_taken_0x2d194c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D194Cu;
        // 0x2d1950: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d194c) {
            ctx->pc = 0x2D1A68u;
            goto label_2d1a68;
        }
    }
    ctx->pc = 0x2D1954u;
    // 0x2d1954: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d1954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d1958: 0x2451f5ec  addiu       $s1, $v0, -0xA14
    ctx->pc = 0x2d1958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964716));
    // 0x2d195c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2d195cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF5F4u));
    // 0x2d1960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1964: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2d1964u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1968: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x2d1968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2d196c: 0xc0da92c  jal         func_36A4B0
    ctx->pc = 0x2D196Cu;
    SET_GPR_U32(ctx, 31, 0x2D1974u);
    ctx->pc = 0x2D1970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D196Cu;
    // 0x2d1970: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A4B0u, 0x2D196Cu, 0x2D1974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1974u;
label_2d1974:
    // 0x2d1974: 0x2a0200c8  slti        $v0, $s0, 0xC8
    ctx->pc = 0x2d1974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x2d1978: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D1978u;
    {
        const bool branch_taken_0x2d1978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1978) {
            ctx->pc = 0x2D19B4u;
            goto label_2d19b4;
        }
    }
    ctx->pc = 0x2D1980u;
    // 0x2d1980: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2d1980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d1984: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2d1984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d1988: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d1988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d198c: 0x28430009  slti        $v1, $v0, 0x9
    ctx->pc = 0x2d198cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2d1990: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1990u;
    {
        const bool branch_taken_0x2d1990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1990) {
            ctx->pc = 0x2D1994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1990u;
            // 0x2d1994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D19ACu;
            goto label_2d19ac;
        }
    }
    ctx->pc = 0x2D1998u;
    // 0x2d1998: 0xc0da92c  jal         func_36A4B0
    ctx->pc = 0x2D1998u;
    SET_GPR_U32(ctx, 31, 0x2D19A0u);
    ctx->pc = 0x2D199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1998u;
    // 0x2d199c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A4B0u, 0x2D1998u, 0x2D19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19A0u;
label_2d19a0:
    // 0x2d19a0: 0xc0862ba  jal         func_218AE8
    ctx->pc = 0x2D19A0u;
    SET_GPR_U32(ctx, 31, 0x2D19A8u);
    ctx->pc = 0x218AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218AE8u, 0x2D19A0u, 0x2D19A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19A8u;
label_2d19a8:
    // 0x2d19a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d19a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d19ac:
    // 0x2d19ac: 0xc0da92c  jal         func_36A4B0
    ctx->pc = 0x2D19ACu;
    SET_GPR_U32(ctx, 31, 0x2D19B4u);
    ctx->pc = 0x2D19B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D19ACu;
    // 0x2d19b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A4B0u, 0x2D19ACu, 0x2D19B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19B4u;
label_2d19b4:
    // 0x2d19b4: 0xc0b460a  jal         func_2D1828
    ctx->pc = 0x2D19B4u;
    SET_GPR_U32(ctx, 31, 0x2D19BCu);
    ctx->pc = 0x2D19B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D19B4u;
    // 0x2d19b8: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1828u, 0x2D19B4u, 0x2D19BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19BCu;
label_2d19bc:
    // 0x2d19bc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D19BCu;
    {
        const bool branch_taken_0x2d19bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D19BCu;
        // 0x2d19c0: 0x3c15003e  lui         $s5, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d19bc) {
            ctx->pc = 0x2D1A60u;
            goto label_2d1a60;
        }
    }
    ctx->pc = 0x2D19C4u;
    // 0x2d19c4: 0x26a34520  addiu       $v1, $s5, 0x4520
    ctx->pc = 0x2d19c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 17696));
    // 0x2d19c8: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x2d19c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d19cc: 0x24731110  addiu       $s3, $v1, 0x1110
    ctx->pc = 0x2d19ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4368));
    // 0x2d19d0: 0x92620008  lbu         $v0, 0x8($s3)
    ctx->pc = 0x2d19d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2d19d4: 0x30510002  andi        $s1, $v0, 0x2
    ctx->pc = 0x2d19d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d19d8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D19D8u;
    {
        const bool branch_taken_0x2d19d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D19D8u;
        // 0x2d19dc: 0x30540004  andi        $s4, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d19d8) {
            ctx->pc = 0x2D19E8u;
            goto label_2d19e8;
        }
    }
    ctx->pc = 0x2D19E0u;
    // 0x2d19e0: 0x16800020  bnez        $s4, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D19E0u;
    {
        const bool branch_taken_0x2d19e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D19E0u;
        // 0x2d19e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d19e0) {
            ctx->pc = 0x2D1A64u;
            goto label_2d1a64;
        }
    }
    ctx->pc = 0x2D19E8u;
label_2d19e8:
    // 0x2d19e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2d19e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2d19ec: 0x2484f60c  addiu       $a0, $a0, -0x9F4
    ctx->pc = 0x2d19ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964748));
    // 0x2d19f0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2d19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF614u));
    // 0x2d19f4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2d19f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d19f8: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x2d19f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2d19fc: 0xc0da92c  jal         func_36A4B0
    ctx->pc = 0x2D19FCu;
    SET_GPR_U32(ctx, 31, 0x2D1A04u);
    ctx->pc = 0x2D1A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D19FCu;
    // 0x2d1a00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A4B0u, 0x2D19FCu, 0x2D1A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A04u;
label_2d1a04:
    // 0x2d1a04: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x2d1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d1a08: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x2d1a08u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d1a0c: 0x8012  mflo        $s0
    ctx->pc = 0x2d1a0cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2d1a10: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D1A10u;
    {
        const bool branch_taken_0x2d1a10 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2D1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A10u;
        // 0x2d1a14: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a10) {
            ctx->pc = 0x2D1A3Cu;
            goto label_2d1a3c;
        }
    }
    ctx->pc = 0x2D1A18u;
    // 0x2d1a18: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1A18u;
    {
        const bool branch_taken_0x2d1a18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a18) {
            ctx->pc = 0x2D1A3Cu;
            goto label_2d1a3c;
        }
    }
    ctx->pc = 0x2D1A20u;
    // 0x2d1a20: 0x92620008  lbu         $v0, 0x8($s3)
    ctx->pc = 0x2d1a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2d1a24: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d1a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d1a28: 0xa2620008  sb          $v0, 0x8($s3)
    ctx->pc = 0x2d1a28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d1a2c: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x2d1a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d1a30: 0xc0862ba  jal         func_218AE8
    ctx->pc = 0x2D1A30u;
    SET_GPR_U32(ctx, 31, 0x2D1A38u);
    ctx->pc = 0x2D1A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A30u;
    // 0x2d1a34: 0xaf83cb50  sw          $v1, -0x34B0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953808), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218AE8u, 0x2D1A30u, 0x2D1A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A38u;
label_2d1a38:
    // 0x2d1a38: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2d1a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_2d1a3c:
    // 0x2d1a3c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1A3Cu;
    {
        const bool branch_taken_0x2d1a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A3Cu;
        // 0x2d1a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a3c) {
            ctx->pc = 0x2D1A64u;
            goto label_2d1a64;
        }
    }
    ctx->pc = 0x2D1A44u;
    // 0x2d1a44: 0x56800008  bnel        $s4, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1A44u;
    {
        const bool branch_taken_0x2d1a44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a44) {
            ctx->pc = 0x2D1A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1A44u;
            // 0x2d1a48: 0xaea24520  sw          $v0, 0x4520($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 17696), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1A68u;
            goto label_2d1a68;
        }
    }
    ctx->pc = 0x2D1A4Cu;
    // 0x2d1a4c: 0x26c34520  addiu       $v1, $s6, 0x4520
    ctx->pc = 0x2d1a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 17696));
    // 0x2d1a50: 0x24631110  addiu       $v1, $v1, 0x1110
    ctx->pc = 0x2d1a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4368));
    // 0x2d1a54: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x2d1a54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d1a58: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2d1a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2d1a5c: 0xa0620008  sb          $v0, 0x8($v1)
    ctx->pc = 0x2d1a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
label_2d1a60:
    // 0x2d1a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1a64:
    // 0x2d1a64: 0xaea24520  sw          $v0, 0x4520($s5)
    ctx->pc = 0x2d1a64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 17696), GPR_U32(ctx, 2));
label_2d1a68:
    // 0x2d1a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d1a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1a6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d1a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d1a70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d1a70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1a74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d1a74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1a78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d1a78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1a7c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d1a7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a80: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d1a80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1a84: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2d1a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d1a88: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A88u;
        // 0x2d1a8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1A90u;
}
