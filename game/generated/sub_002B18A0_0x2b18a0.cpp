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

// Function: sub_002B18A0
// Address: 0x2b18a0 - 0x2b23f8
void sub_002B18A0_0x2b18a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B18A0_0x2b18a0");
#endif

    switch (ctx->pc) {
        case 0x2b18f0u: goto label_2b18f0;
        case 0x2b1974u: goto label_2b1974;
        case 0x2b198cu: goto label_2b198c;
        case 0x2b19a4u: goto label_2b19a4;
        case 0x2b19c0u: goto label_2b19c0;
        case 0x2b19dcu: goto label_2b19dc;
        case 0x2b19f8u: goto label_2b19f8;
        case 0x2b1a10u: goto label_2b1a10;
        case 0x2b1a28u: goto label_2b1a28;
        case 0x2b1a40u: goto label_2b1a40;
        case 0x2b1aa0u: goto label_2b1aa0;
        case 0x2b1ab8u: goto label_2b1ab8;
        case 0x2b1ad0u: goto label_2b1ad0;
        case 0x2b1ae8u: goto label_2b1ae8;
        case 0x2b1b00u: goto label_2b1b00;
        case 0x2b1b18u: goto label_2b1b18;
        case 0x2b1ba0u: goto label_2b1ba0;
        case 0x2b1e00u: goto label_2b1e00;
        case 0x2b2028u: goto label_2b2028;
        case 0x2b204cu: goto label_2b204c;
        case 0x2b2080u: goto label_2b2080;
        case 0x2b2380u: goto label_2b2380;
        case 0x2b23c4u: goto label_2b23c4;
        case 0x2b23d0u: goto label_2b23d0;
        default: break;
    }

    ctx->pc = 0x2b18a0u;

    // 0x2b18a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b18a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b18a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b18a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b18a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b18a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b18ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b18acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b18b0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b18b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b18b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b18b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b18b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b18b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b18bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b18bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b18c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2b18c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2b18c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b18c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b18c8: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x2b18c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b18cc: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x2b18ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2b18d0: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x2b18d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2b18d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b18d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b18d8: 0x1860009f  blez        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x2B18D8u;
    {
        const bool branch_taken_0x2b18d8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2B18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B18D8u;
        // 0x2b18dc: 0xae620064  sw          $v0, 0x64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b18d8) {
            ctx->pc = 0x2B1B58u;
            goto label_2b1b58;
        }
    }
    ctx->pc = 0x2B18E0u;
    // 0x2b18e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b18e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b18e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b18e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b18e8: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x2b18e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2b18ec: 0x0  nop
    ctx->pc = 0x2b18ecu;
    // NOP
label_2b18f0:
    // 0x2b18f0: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x2b18f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2b18f4: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2b18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b18f8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2b18f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2b18fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b18fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b1900: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2b1900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b1904: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b1904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b1908: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x2b1908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b190c: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x2b190cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b1910: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x2b1910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x2b1914: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B1914u;
    {
        const bool branch_taken_0x2b1914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1914u;
        // 0x2b1918: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1914) {
            ctx->pc = 0x2B1938u;
            goto label_2b1938;
        }
    }
    ctx->pc = 0x2B191Cu;
    // 0x2b191c: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x2b191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1920: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x2b1920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2b1924: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x2b1924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1928: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x2b1928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2b192c: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x2b192cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1930: 0xe614004c  swc1        $f20, 0x4C($s0)
    ctx->pc = 0x2b1930u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2b1934: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2b1934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_2b1938:
    // 0x2b1938: 0x32420380  andi        $v0, $s2, 0x380
    ctx->pc = 0x2b1938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)896);
    // 0x2b193c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B193Cu;
    {
        const bool branch_taken_0x2b193c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B193Cu;
        // 0x2b1940: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b193c) {
            ctx->pc = 0x2B1960u;
            goto label_2b1960;
        }
    }
    ctx->pc = 0x2B1944u;
    // 0x2b1944: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x2b1944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1948: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2b1948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2b194c: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x2b194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1950: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x2b1950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2b1954: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x2b1954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1958: 0xe614005c  swc1        $f20, 0x5C($s0)
    ctx->pc = 0x2b1958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x2b195c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2b195cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_2b1960:
    // 0x2b1960: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1960u;
    {
        const bool branch_taken_0x2b1960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1960u;
        // 0x2b1964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1960) {
            ctx->pc = 0x2B1974u;
            goto label_2b1974;
        }
    }
    ctx->pc = 0x2B1968u;
    // 0x2b1968: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x2b1968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b196c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B196Cu;
    SET_GPR_U32(ctx, 31, 0x2B1974u);
    ctx->pc = 0x2B1970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B196Cu;
    // 0x2b1970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B196Cu, 0x2B1974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1974u;
label_2b1974:
    // 0x2b1974: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x2b1974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x2b1978: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1978u;
    {
        const bool branch_taken_0x2b1978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1978u;
        // 0x2b197c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1978) {
            ctx->pc = 0x2B198Cu;
            goto label_2b198c;
        }
    }
    ctx->pc = 0x2B1980u;
    // 0x2b1980: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x2b1980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b1984: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B1984u;
    SET_GPR_U32(ctx, 31, 0x2B198Cu);
    ctx->pc = 0x2B1988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1984u;
    // 0x2b1988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B1984u, 0x2B198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B198Cu;
label_2b198c:
    // 0x2b198c: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x2b198cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x2b1990: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1990u;
    {
        const bool branch_taken_0x2b1990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1990u;
        // 0x2b1994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1990) {
            ctx->pc = 0x2B19A4u;
            goto label_2b19a4;
        }
    }
    ctx->pc = 0x2B1998u;
    // 0x2b1998: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x2b1998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b199c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B199Cu;
    SET_GPR_U32(ctx, 31, 0x2B19A4u);
    ctx->pc = 0x2B19A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B199Cu;
    // 0x2b19a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B199Cu, 0x2B19A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19A4u;
label_2b19a4:
    // 0x2b19a4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2b19a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x2b19a8: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b19a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b19ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B19ACu;
    {
        const bool branch_taken_0x2b19ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19ACu;
        // 0x2b19b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b19ac) {
            ctx->pc = 0x2B19C0u;
            goto label_2b19c0;
        }
    }
    ctx->pc = 0x2B19B4u;
    // 0x2b19b4: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x2b19b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b19b8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B19B8u;
    SET_GPR_U32(ctx, 31, 0x2B19C0u);
    ctx->pc = 0x2B19BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B19B8u;
    // 0x2b19bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B19B8u, 0x2B19C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19C0u;
label_2b19c0:
    // 0x2b19c0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2b19c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2b19c4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b19c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b19c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B19C8u;
    {
        const bool branch_taken_0x2b19c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19C8u;
        // 0x2b19cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b19c8) {
            ctx->pc = 0x2B19DCu;
            goto label_2b19dc;
        }
    }
    ctx->pc = 0x2B19D0u;
    // 0x2b19d0: 0xc62c001c  lwc1        $f12, 0x1C($s1)
    ctx->pc = 0x2b19d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b19d4: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B19D4u;
    SET_GPR_U32(ctx, 31, 0x2B19DCu);
    ctx->pc = 0x2B19D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B19D4u;
    // 0x2b19d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B19D4u, 0x2B19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19DCu;
label_2b19dc:
    // 0x2b19dc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2b19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x2b19e0: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b19e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b19e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B19E4u;
    {
        const bool branch_taken_0x2b19e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19E4u;
        // 0x2b19e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b19e4) {
            ctx->pc = 0x2B19F8u;
            goto label_2b19f8;
        }
    }
    ctx->pc = 0x2B19ECu;
    // 0x2b19ec: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x2b19ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b19f0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B19F0u;
    SET_GPR_U32(ctx, 31, 0x2B19F8u);
    ctx->pc = 0x2B19F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B19F0u;
    // 0x2b19f4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B19F0u, 0x2B19F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19F8u;
label_2b19f8:
    // 0x2b19f8: 0x32420080  andi        $v0, $s2, 0x80
    ctx->pc = 0x2b19f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
    // 0x2b19fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B19FCu;
    {
        const bool branch_taken_0x2b19fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19FCu;
        // 0x2b1a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b19fc) {
            ctx->pc = 0x2B1A10u;
            goto label_2b1a10;
        }
    }
    ctx->pc = 0x2B1A04u;
    // 0x2b1a04: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x2b1a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b1a08: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B1A08u;
    SET_GPR_U32(ctx, 31, 0x2B1A10u);
    ctx->pc = 0x2B1A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A08u;
    // 0x2b1a0c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B1A08u, 0x2B1A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A10u;
label_2b1a10:
    // 0x2b1a10: 0x32420100  andi        $v0, $s2, 0x100
    ctx->pc = 0x2b1a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
    // 0x2b1a14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1A14u;
    {
        const bool branch_taken_0x2b1a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A14u;
        // 0x2b1a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a14) {
            ctx->pc = 0x2B1A28u;
            goto label_2b1a28;
        }
    }
    ctx->pc = 0x2B1A1Cu;
    // 0x2b1a1c: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x2b1a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b1a20: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B1A20u;
    SET_GPR_U32(ctx, 31, 0x2B1A28u);
    ctx->pc = 0x2B1A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A20u;
    // 0x2b1a24: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B1A20u, 0x2B1A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A28u;
label_2b1a28:
    // 0x2b1a28: 0x32420200  andi        $v0, $s2, 0x200
    ctx->pc = 0x2b1a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)512);
    // 0x2b1a2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1A2Cu;
    {
        const bool branch_taken_0x2b1a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A2Cu;
        // 0x2b1a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a2c) {
            ctx->pc = 0x2B1A40u;
            goto label_2b1a40;
        }
    }
    ctx->pc = 0x2B1A34u;
    // 0x2b1a34: 0xc62c002c  lwc1        $f12, 0x2C($s1)
    ctx->pc = 0x2b1a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b1a38: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B1A38u;
    SET_GPR_U32(ctx, 31, 0x2B1A40u);
    ctx->pc = 0x2B1A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A38u;
    // 0x2b1a3c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B1A38u, 0x2B1A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A40u;
label_2b1a40:
    // 0x2b1a40: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2b1a44: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b1a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b1a48: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1A48u;
    {
        const bool branch_taken_0x2b1a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A48u;
        // 0x2b1a4c: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a48) {
            ctx->pc = 0x2B1A64u;
            goto label_2b1a64;
        }
    }
    ctx->pc = 0x2B1A50u;
    // 0x2b1a50: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2b1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2b1a54: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x2b1a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2b1a58: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b1a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b1a5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b1a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b1a60: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x2b1a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_2b1a64:
    // 0x2b1a64: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2b1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2b1a68: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b1a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b1a6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1A6Cu;
    {
        const bool branch_taken_0x2b1a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1a6c) {
            ctx->pc = 0x2B1A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1A6Cu;
            // 0x2b1a70: 0xde020080  ld          $v0, 0x80($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1A80u;
            goto label_2b1a80;
        }
    }
    ctx->pc = 0x2B1A74u;
    // 0x2b1a74: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x2b1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2b1a78: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x2b1a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x2b1a7c: 0xde020080  ld          $v0, 0x80($s0)
    ctx->pc = 0x2b1a7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 128)));
label_2b1a80:
    // 0x2b1a80: 0x30420016  andi        $v0, $v0, 0x16
    ctx->pc = 0x2b1a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)22);
    // 0x2b1a84: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B1A84u;
    {
        const bool branch_taken_0x2b1a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A84u;
        // 0x2b1a88: 0x32420400  andi        $v0, $s2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a84) {
            ctx->pc = 0x2B1B20u;
            goto label_2b1b20;
        }
    }
    ctx->pc = 0x2B1A8Cu;
    // 0x2b1a8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1A8Cu;
    {
        const bool branch_taken_0x2b1a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A8Cu;
        // 0x2b1a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a8c) {
            ctx->pc = 0x2B1AA0u;
            goto label_2b1aa0;
        }
    }
    ctx->pc = 0x2B1A94u;
    // 0x2b1a94: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x2b1a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b1a98: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B1A98u;
    SET_GPR_U32(ctx, 31, 0x2B1AA0u);
    ctx->pc = 0x2B1A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A98u;
    // 0x2b1a9c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B1A98u, 0x2B1AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AA0u;
label_2b1aa0:
    // 0x2b1aa0: 0x32420800  andi        $v0, $s2, 0x800
    ctx->pc = 0x2b1aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2048);
    // 0x2b1aa4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1AA4u;
    {
        const bool branch_taken_0x2b1aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AA4u;
        // 0x2b1aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1aa4) {
            ctx->pc = 0x2B1AB8u;
            goto label_2b1ab8;
        }
    }
    ctx->pc = 0x2B1AACu;
    // 0x2b1aac: 0xc62c0034  lwc1        $f12, 0x34($s1)
    ctx->pc = 0x2b1aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b1ab0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B1AB0u;
    SET_GPR_U32(ctx, 31, 0x2B1AB8u);
    ctx->pc = 0x2B1AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1AB0u;
    // 0x2b1ab4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B1AB0u, 0x2B1AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AB8u;
label_2b1ab8:
    // 0x2b1ab8: 0x32421000  andi        $v0, $s2, 0x1000
    ctx->pc = 0x2b1ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4096);
    // 0x2b1abc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1ABCu;
    {
        const bool branch_taken_0x2b1abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1ABCu;
        // 0x2b1ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1abc) {
            ctx->pc = 0x2B1AD0u;
            goto label_2b1ad0;
        }
    }
    ctx->pc = 0x2B1AC4u;
    // 0x2b1ac4: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x2b1ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b1ac8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B1AC8u;
    SET_GPR_U32(ctx, 31, 0x2B1AD0u);
    ctx->pc = 0x2B1ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1AC8u;
    // 0x2b1acc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B1AC8u, 0x2B1AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AD0u;
label_2b1ad0:
    // 0x2b1ad0: 0x32422000  andi        $v0, $s2, 0x2000
    ctx->pc = 0x2b1ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
    // 0x2b1ad4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1AD4u;
    {
        const bool branch_taken_0x2b1ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AD4u;
        // 0x2b1ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ad4) {
            ctx->pc = 0x2B1AE8u;
            goto label_2b1ae8;
        }
    }
    ctx->pc = 0x2B1ADCu;
    // 0x2b1adc: 0xc62c003c  lwc1        $f12, 0x3C($s1)
    ctx->pc = 0x2b1adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b1ae0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B1AE0u;
    SET_GPR_U32(ctx, 31, 0x2B1AE8u);
    ctx->pc = 0x2B1AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1AE0u;
    // 0x2b1ae4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B1AE0u, 0x2B1AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AE8u;
label_2b1ae8:
    // 0x2b1ae8: 0x32424000  andi        $v0, $s2, 0x4000
    ctx->pc = 0x2b1ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
    // 0x2b1aec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1AECu;
    {
        const bool branch_taken_0x2b1aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AECu;
        // 0x2b1af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1aec) {
            ctx->pc = 0x2B1B00u;
            goto label_2b1b00;
        }
    }
    ctx->pc = 0x2B1AF4u;
    // 0x2b1af4: 0xc62c0040  lwc1        $f12, 0x40($s1)
    ctx->pc = 0x2b1af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b1af8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B1AF8u;
    SET_GPR_U32(ctx, 31, 0x2B1B00u);
    ctx->pc = 0x2B1AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1AF8u;
    // 0x2b1afc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B1AF8u, 0x2B1B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B00u;
label_2b1b00:
    // 0x2b1b00: 0x32428000  andi        $v0, $s2, 0x8000
    ctx->pc = 0x2b1b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x2b1b04: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B1B04u;
    {
        const bool branch_taken_0x2b1b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B04u;
        // 0x2b1b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b04) {
            ctx->pc = 0x2B1B44u;
            goto label_2b1b44;
        }
    }
    ctx->pc = 0x2B1B0Cu;
    // 0x2b1b0c: 0xc62c0044  lwc1        $f12, 0x44($s1)
    ctx->pc = 0x2b1b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b1b10: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B1B10u;
    SET_GPR_U32(ctx, 31, 0x2B1B18u);
    ctx->pc = 0x2B1B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1B10u;
    // 0x2b1b14: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B1B10u, 0x2B1B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B18u;
label_2b1b18:
    // 0x2b1b18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B1B18u;
    {
        const bool branch_taken_0x2b1b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B18u;
        // 0x2b1b1c: 0x8e620050  lw          $v0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b18) {
            ctx->pc = 0x2B1B48u;
            goto label_2b1b48;
        }
    }
    ctx->pc = 0x2B1B20u;
label_2b1b20:
    // 0x2b1b20: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2b1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2b1b24: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2b1b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2b1b28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1B28u;
    {
        const bool branch_taken_0x2b1b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B28u;
        // 0x2b1b2c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b28) {
            ctx->pc = 0x2B1B44u;
            goto label_2b1b44;
        }
    }
    ctx->pc = 0x2B1B30u;
    // 0x2b1b30: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b1b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b1b34: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1B34u;
    {
        const bool branch_taken_0x2b1b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1b34) {
            ctx->pc = 0x2B1B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1B34u;
            // 0x2b1b38: 0x8e620050  lw          $v0, 0x50($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1B48u;
            goto label_2b1b48;
        }
    }
    ctx->pc = 0x2B1B3Cu;
    // 0x2b1b3c: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2b1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2b1b40: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x2b1b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_2b1b44:
    // 0x2b1b44: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x2b1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_2b1b48:
    // 0x2b1b48: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b1b48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b1b4c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2b1b4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b1b50: 0x1440ff67  bnez        $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x2B1B50u;
    {
        const bool branch_taken_0x2b1b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B50u;
        // 0x2b1b54: 0x1410c0  sll         $v0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b50) {
            ctx->pc = 0x2B18F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b18f0;
        }
    }
    ctx->pc = 0x2B1B58u;
label_2b1b58:
    // 0x2b1b58: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x2b1b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2b1b5c: 0x18400096  blez        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2B1B5Cu;
    {
        const bool branch_taken_0x2b1b5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B1B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B5Cu;
        // 0x2b1b60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b5c) {
            ctx->pc = 0x2B1DB8u;
            goto label_2b1db8;
        }
    }
    ctx->pc = 0x2B1B64u;
    // 0x2b1b64: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b1b68: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b1b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b1b6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1b70: 0x2447cec8  addiu       $a3, $v0, -0x3138
    ctx->pc = 0x2b1b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954696));
    // 0x2b1b74: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2b1b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b1b78: 0x24f00004  addiu       $s0, $a3, 0x4
    ctx->pc = 0x2b1b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b1b7c: 0x24ef0008  addiu       $t7, $a3, 0x8
    ctx->pc = 0x2b1b7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2b1b80: 0x24ee000c  addiu       $t6, $a3, 0xC
    ctx->pc = 0x2b1b80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2b1b84: 0x24ed0010  addiu       $t5, $a3, 0x10
    ctx->pc = 0x2b1b84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2b1b88: 0x24eb0014  addiu       $t3, $a3, 0x14
    ctx->pc = 0x2b1b88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x2b1b8c: 0x24ec0018  addiu       $t4, $a3, 0x18
    ctx->pc = 0x2b1b8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2b1b90: 0x24ea001c  addiu       $t2, $a3, 0x1C
    ctx->pc = 0x2b1b90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x2b1b94: 0x24e90020  addiu       $t1, $a3, 0x20
    ctx->pc = 0x2b1b94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2b1b98: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x2b1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2b1b9c: 0x0  nop
    ctx->pc = 0x2b1b9cu;
    // NOP
label_2b1ba0:
    // 0x2b1ba0: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x2b1ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2b1ba4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2b1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2b1ba8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b1bac: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2b1bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1bb0: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2b1bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b1bb4: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x2b1bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x2b1bb8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B1BB8u;
    {
        const bool branch_taken_0x2b1bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BB8u;
        // 0x2b1bbc: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1bb8) {
            ctx->pc = 0x2B1BECu;
            goto label_2b1bec;
        }
    }
    ctx->pc = 0x2B1BC0u;
    // 0x2b1bc0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b1bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b1bc4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2b1bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b1bc8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1bcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1BCCu;
    {
        const bool branch_taken_0x2b1bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BCCu;
        // 0x2b1bd0: 0xc4a0000c  lwc1        $f0, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1bcc) {
            ctx->pc = 0x2B1BE8u;
            goto label_2b1be8;
        }
    }
    ctx->pc = 0x2B1BD4u;
    // 0x2b1bd4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2b1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2b1bd8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1bdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1BDCu;
    {
        const bool branch_taken_0x2b1bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BDCu;
        // 0x2b1be0: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1bdc) {
            ctx->pc = 0x2B1BECu;
            goto label_2b1bec;
        }
    }
    ctx->pc = 0x2B1BE4u;
    // 0x2b1be4: 0x0  nop
    ctx->pc = 0x2b1be4u;
    // NOP
label_2b1be8:
    // 0x2b1be8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2b1be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2b1bec:
    // 0x2b1bec: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x2b1becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x2b1bf0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B1BF0u;
    {
        const bool branch_taken_0x2b1bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BF0u;
        // 0x2b1bf4: 0x30c20080  andi        $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1bf0) {
            ctx->pc = 0x2B1C28u;
            goto label_2b1c28;
        }
    }
    ctx->pc = 0x2B1BF8u;
    // 0x2b1bf8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b1bfc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b1bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b1c00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1c04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1C04u;
    {
        const bool branch_taken_0x2b1c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C04u;
        // 0x2b1c08: 0xc4a00010  lwc1        $f0, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c04) {
            ctx->pc = 0x2B1C20u;
            goto label_2b1c20;
        }
    }
    ctx->pc = 0x2B1C0Cu;
    // 0x2b1c0c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2b1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2b1c10: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1c14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1C14u;
    {
        const bool branch_taken_0x2b1c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C14u;
        // 0x2b1c18: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c14) {
            ctx->pc = 0x2B1C24u;
            goto label_2b1c24;
        }
    }
    ctx->pc = 0x2B1C1Cu;
    // 0x2b1c1c: 0x0  nop
    ctx->pc = 0x2b1c1cu;
    // NOP
label_2b1c20:
    // 0x2b1c20: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x2b1c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_2b1c24:
    // 0x2b1c24: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x2b1c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
label_2b1c28:
    // 0x2b1c28: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B1C28u;
    {
        const bool branch_taken_0x2b1c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C28u;
        // 0x2b1c2c: 0x30c20100  andi        $v0, $a2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c28) {
            ctx->pc = 0x2B1C60u;
            goto label_2b1c60;
        }
    }
    ctx->pc = 0x2B1C30u;
    // 0x2b1c30: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b1c34: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x2b1c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2b1c38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1c3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1C3Cu;
    {
        const bool branch_taken_0x2b1c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C3Cu;
        // 0x2b1c40: 0xc4a00014  lwc1        $f0, 0x14($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c3c) {
            ctx->pc = 0x2B1C58u;
            goto label_2b1c58;
        }
    }
    ctx->pc = 0x2B1C44u;
    // 0x2b1c44: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2b1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2b1c48: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1c4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1C4Cu;
    {
        const bool branch_taken_0x2b1c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C4Cu;
        // 0x2b1c50: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c4c) {
            ctx->pc = 0x2B1C5Cu;
            goto label_2b1c5c;
        }
    }
    ctx->pc = 0x2B1C54u;
    // 0x2b1c54: 0x0  nop
    ctx->pc = 0x2b1c54u;
    // NOP
label_2b1c58:
    // 0x2b1c58: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2b1c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_2b1c5c:
    // 0x2b1c5c: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x2b1c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
label_2b1c60:
    // 0x2b1c60: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B1C60u;
    {
        const bool branch_taken_0x2b1c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C60u;
        // 0x2b1c64: 0x30c20200  andi        $v0, $a2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c60) {
            ctx->pc = 0x2B1C98u;
            goto label_2b1c98;
        }
    }
    ctx->pc = 0x2B1C68u;
    // 0x2b1c68: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b1c6c: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x2b1c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2b1c70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1c74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1C74u;
    {
        const bool branch_taken_0x2b1c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C74u;
        // 0x2b1c78: 0xc4a00018  lwc1        $f0, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c74) {
            ctx->pc = 0x2B1C90u;
            goto label_2b1c90;
        }
    }
    ctx->pc = 0x2B1C7Cu;
    // 0x2b1c7c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2b1c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2b1c80: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1c84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1C84u;
    {
        const bool branch_taken_0x2b1c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C84u;
        // 0x2b1c88: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c84) {
            ctx->pc = 0x2B1C94u;
            goto label_2b1c94;
        }
    }
    ctx->pc = 0x2B1C8Cu;
    // 0x2b1c8c: 0x0  nop
    ctx->pc = 0x2b1c8cu;
    // NOP
label_2b1c90:
    // 0x2b1c90: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x2b1c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_2b1c94:
    // 0x2b1c94: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x2b1c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
label_2b1c98:
    // 0x2b1c98: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B1C98u;
    {
        const bool branch_taken_0x2b1c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C98u;
        // 0x2b1c9c: 0x30c20400  andi        $v0, $a2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c98) {
            ctx->pc = 0x2B1CD0u;
            goto label_2b1cd0;
        }
    }
    ctx->pc = 0x2B1CA0u;
    // 0x2b1ca0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b1ca4: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x2b1ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2b1ca8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1cac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1CACu;
    {
        const bool branch_taken_0x2b1cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CACu;
        // 0x2b1cb0: 0xc4a0001c  lwc1        $f0, 0x1C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cac) {
            ctx->pc = 0x2B1CC8u;
            goto label_2b1cc8;
        }
    }
    ctx->pc = 0x2B1CB4u;
    // 0x2b1cb4: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2b1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2b1cb8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1cbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1CBCu;
    {
        const bool branch_taken_0x2b1cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CBCu;
        // 0x2b1cc0: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cbc) {
            ctx->pc = 0x2B1CCCu;
            goto label_2b1ccc;
        }
    }
    ctx->pc = 0x2B1CC4u;
    // 0x2b1cc4: 0x0  nop
    ctx->pc = 0x2b1cc4u;
    // NOP
label_2b1cc8:
    // 0x2b1cc8: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x2b1cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_2b1ccc:
    // 0x2b1ccc: 0x30c20400  andi        $v0, $a2, 0x400
    ctx->pc = 0x2b1cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
label_2b1cd0:
    // 0x2b1cd0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B1CD0u;
    {
        const bool branch_taken_0x2b1cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CD0u;
        // 0x2b1cd4: 0x30c20800  andi        $v0, $a2, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cd0) {
            ctx->pc = 0x2B1D08u;
            goto label_2b1d08;
        }
    }
    ctx->pc = 0x2B1CD8u;
    // 0x2b1cd8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b1cdc: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2b1cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2b1ce0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1ce4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1CE4u;
    {
        const bool branch_taken_0x2b1ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CE4u;
        // 0x2b1ce8: 0xc4a00020  lwc1        $f0, 0x20($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ce4) {
            ctx->pc = 0x2B1D00u;
            goto label_2b1d00;
        }
    }
    ctx->pc = 0x2B1CECu;
    // 0x2b1cec: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2b1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2b1cf0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1cf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1CF4u;
    {
        const bool branch_taken_0x2b1cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CF4u;
        // 0x2b1cf8: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cf4) {
            ctx->pc = 0x2B1D04u;
            goto label_2b1d04;
        }
    }
    ctx->pc = 0x2B1CFCu;
    // 0x2b1cfc: 0x0  nop
    ctx->pc = 0x2b1cfcu;
    // NOP
label_2b1d00:
    // 0x2b1d00: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x2b1d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_2b1d04:
    // 0x2b1d04: 0x30c20800  andi        $v0, $a2, 0x800
    ctx->pc = 0x2b1d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
label_2b1d08:
    // 0x2b1d08: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B1D08u;
    {
        const bool branch_taken_0x2b1d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D08u;
        // 0x2b1d0c: 0x30c21000  andi        $v0, $a2, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d08) {
            ctx->pc = 0x2B1D40u;
            goto label_2b1d40;
        }
    }
    ctx->pc = 0x2B1D10u;
    // 0x2b1d10: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b1d14: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2b1d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2b1d18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1d1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1D1Cu;
    {
        const bool branch_taken_0x2b1d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D1Cu;
        // 0x2b1d20: 0xc4a00024  lwc1        $f0, 0x24($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d1c) {
            ctx->pc = 0x2B1D38u;
            goto label_2b1d38;
        }
    }
    ctx->pc = 0x2B1D24u;
    // 0x2b1d24: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2b1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2b1d28: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1d2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1D2Cu;
    {
        const bool branch_taken_0x2b1d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D2Cu;
        // 0x2b1d30: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d2c) {
            ctx->pc = 0x2B1D3Cu;
            goto label_2b1d3c;
        }
    }
    ctx->pc = 0x2B1D34u;
    // 0x2b1d34: 0x0  nop
    ctx->pc = 0x2b1d34u;
    // NOP
label_2b1d38:
    // 0x2b1d38: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x2b1d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_2b1d3c:
    // 0x2b1d3c: 0x30c21000  andi        $v0, $a2, 0x1000
    ctx->pc = 0x2b1d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
label_2b1d40:
    // 0x2b1d40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B1D40u;
    {
        const bool branch_taken_0x2b1d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D40u;
        // 0x2b1d44: 0x30c22000  andi        $v0, $a2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d40) {
            ctx->pc = 0x2B1D74u;
            goto label_2b1d74;
        }
    }
    ctx->pc = 0x2B1D48u;
    // 0x2b1d48: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2b1d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1d4c: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x2b1d4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b1d50: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b1d54: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2b1d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2b1d58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1d5c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1D5Cu;
    {
        const bool branch_taken_0x2b1d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1d5c) {
            ctx->pc = 0x2B1D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1D5Cu;
            // 0x2b1d60: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1D70u;
            goto label_2b1d70;
        }
    }
    ctx->pc = 0x2B1D64u;
    // 0x2b1d64: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2b1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2b1d68: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1d6c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2b1d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1d70:
    // 0x2b1d70: 0x30c22000  andi        $v0, $a2, 0x2000
    ctx->pc = 0x2b1d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
label_2b1d74:
    // 0x2b1d74: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B1D74u;
    {
        const bool branch_taken_0x2b1d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1d74) {
            ctx->pc = 0x2B1D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1D74u;
            // 0x2b1d78: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1DA8u;
            goto label_2b1da8;
        }
    }
    ctx->pc = 0x2B1D7Cu;
    // 0x2b1d7c: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x2b1d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1d80: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x2b1d80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b1d84: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b1d88: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2b1d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2b1d8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1d90: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1D90u;
    {
        const bool branch_taken_0x2b1d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1d90) {
            ctx->pc = 0x2B1D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1D90u;
            // 0x2b1d94: 0xe4800038  swc1        $f0, 0x38($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1DA4u;
            goto label_2b1da4;
        }
    }
    ctx->pc = 0x2B1D98u;
    // 0x2b1d98: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x2b1d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2b1d9c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1da0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2b1da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1da4:
    // 0x2b1da4: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x2b1da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_2b1da8:
    // 0x2b1da8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b1da8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b1dac: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2b1dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b1db0: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x2B1DB0u;
    {
        const bool branch_taken_0x2b1db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DB0u;
        // 0x2b1db4: 0x81040  sll         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1db0) {
            ctx->pc = 0x2B1BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1ba0;
        }
    }
    ctx->pc = 0x2B1DB8u;
label_2b1db8:
    // 0x2b1db8: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2b1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2b1dbc: 0x18400090  blez        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x2B1DBCu;
    {
        const bool branch_taken_0x2b1dbc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B1DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DBCu;
        // 0x2b1dc0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1dbc) {
            ctx->pc = 0x2B2000u;
            goto label_2b2000;
        }
    }
    ctx->pc = 0x2B1DC4u;
    // 0x2b1dc4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b1dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b1dc8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b1dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b1dcc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b1dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b1dd0: 0x2447cde0  addiu       $a3, $v0, -0x3220
    ctx->pc = 0x2b1dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954464));
    // 0x2b1dd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b1dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1dd8: 0x24ef0004  addiu       $t7, $a3, 0x4
    ctx->pc = 0x2b1dd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b1ddc: 0x24f00008  addiu       $s0, $a3, 0x8
    ctx->pc = 0x2b1ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2b1de0: 0x24ee000c  addiu       $t6, $a3, 0xC
    ctx->pc = 0x2b1de0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2b1de4: 0x24ed0010  addiu       $t5, $a3, 0x10
    ctx->pc = 0x2b1de4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2b1de8: 0x24eb0014  addiu       $t3, $a3, 0x14
    ctx->pc = 0x2b1de8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x2b1dec: 0x24ec0018  addiu       $t4, $a3, 0x18
    ctx->pc = 0x2b1decu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2b1df0: 0x24ea001c  addiu       $t2, $a3, 0x1C
    ctx->pc = 0x2b1df0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x2b1df4: 0x24e90020  addiu       $t1, $a3, 0x20
    ctx->pc = 0x2b1df4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2b1df8: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x2b1df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x2b1dfc: 0x0  nop
    ctx->pc = 0x2b1dfcu;
    // NOP
label_2b1e00:
    // 0x2b1e00: 0x81980  sll         $v1, $t0, 6
    ctx->pc = 0x2b1e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x2b1e04: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2b1e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b1e08: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2b1e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b1e0c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b1e10: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1E10u;
    {
        const bool branch_taken_0x2b1e10 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E10u;
        // 0x2b1e14: 0xc4a0000c  lwc1        $f0, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e10) {
            ctx->pc = 0x2B1E1Cu;
            goto label_2b1e1c;
        }
    }
    ctx->pc = 0x2B1E18u;
    // 0x2b1e18: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b1e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b1e1c:
    // 0x2b1e1c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b1e20: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2b1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b1e24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1e28: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1E28u;
    {
        const bool branch_taken_0x2b1e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1e28) {
            ctx->pc = 0x2B1E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1E28u;
            // 0x2b1e2c: 0xe4800064  swc1        $f0, 0x64($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1E3Cu;
            goto label_2b1e3c;
        }
    }
    ctx->pc = 0x2B1E30u;
    // 0x2b1e30: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2b1e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2b1e34: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1e38: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1e38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1e3c:
    // 0x2b1e3c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b1e40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1e44: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1E44u;
    {
        const bool branch_taken_0x2b1e44 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E44u;
        // 0x2b1e48: 0xc4a00010  lwc1        $f0, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e44) {
            ctx->pc = 0x2B1E50u;
            goto label_2b1e50;
        }
    }
    ctx->pc = 0x2B1E4Cu;
    // 0x2b1e4c: 0xac83005c  sw          $v1, 0x5C($a0)
    ctx->pc = 0x2b1e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
label_2b1e50:
    // 0x2b1e50: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b1e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b1e54: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x2b1e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2b1e58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1e5c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1E5Cu;
    {
        const bool branch_taken_0x2b1e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1e5c) {
            ctx->pc = 0x2B1E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1E5Cu;
            // 0x2b1e60: 0xe4800068  swc1        $f0, 0x68($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1E70u;
            goto label_2b1e70;
        }
    }
    ctx->pc = 0x2B1E64u;
    // 0x2b1e64: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x2b1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2b1e68: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1e6c: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1e6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1e70:
    // 0x2b1e70: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b1e74: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1E74u;
    {
        const bool branch_taken_0x2b1e74 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E74u;
        // 0x2b1e78: 0xc4a00014  lwc1        $f0, 0x14($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e74) {
            ctx->pc = 0x2B1E80u;
            goto label_2b1e80;
        }
    }
    ctx->pc = 0x2B1E7Cu;
    // 0x2b1e7c: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b1e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b1e80:
    // 0x2b1e80: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b1e84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b1e88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1e8c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1E8Cu;
    {
        const bool branch_taken_0x2b1e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1e8c) {
            ctx->pc = 0x2B1E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1E8Cu;
            // 0x2b1e90: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1EA0u;
            goto label_2b1ea0;
        }
    }
    ctx->pc = 0x2B1E94u;
    // 0x2b1e94: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x2b1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2b1e98: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1e9c: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1e9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1ea0:
    // 0x2b1ea0: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b1ea4: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1EA4u;
    {
        const bool branch_taken_0x2b1ea4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EA4u;
        // 0x2b1ea8: 0xc4a00018  lwc1        $f0, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ea4) {
            ctx->pc = 0x2B1EB0u;
            goto label_2b1eb0;
        }
    }
    ctx->pc = 0x2B1EACu;
    // 0x2b1eac: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b1eacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b1eb0:
    // 0x2b1eb0: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b1eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b1eb4: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x2b1eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2b1eb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1ebc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1EBCu;
    {
        const bool branch_taken_0x2b1ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1ebc) {
            ctx->pc = 0x2B1EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1EBCu;
            // 0x2b1ec0: 0xe4800070  swc1        $f0, 0x70($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1ED0u;
            goto label_2b1ed0;
        }
    }
    ctx->pc = 0x2B1EC4u;
    // 0x2b1ec4: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x2b1ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2b1ec8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1ecc: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1eccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1ed0:
    // 0x2b1ed0: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b1ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b1ed4: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1ED4u;
    {
        const bool branch_taken_0x2b1ed4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1ED4u;
        // 0x2b1ed8: 0xc4a0001c  lwc1        $f0, 0x1C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ed4) {
            ctx->pc = 0x2B1EE0u;
            goto label_2b1ee0;
        }
    }
    ctx->pc = 0x2B1EDCu;
    // 0x2b1edc: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b1edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b1ee0:
    // 0x2b1ee0: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b1ee4: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x2b1ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2b1ee8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1eec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1EECu;
    {
        const bool branch_taken_0x2b1eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1eec) {
            ctx->pc = 0x2B1EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1EECu;
            // 0x2b1ef0: 0xe4800074  swc1        $f0, 0x74($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1F00u;
            goto label_2b1f00;
        }
    }
    ctx->pc = 0x2B1EF4u;
    // 0x2b1ef4: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2b1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b1ef8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1efc: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1efcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1f00:
    // 0x2b1f00: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b1f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b1f04: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1F04u;
    {
        const bool branch_taken_0x2b1f04 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F04u;
        // 0x2b1f08: 0xc4a00020  lwc1        $f0, 0x20($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f04) {
            ctx->pc = 0x2B1F10u;
            goto label_2b1f10;
        }
    }
    ctx->pc = 0x2B1F0Cu;
    // 0x2b1f0c: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b1f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b1f10:
    // 0x2b1f10: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b1f14: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2b1f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2b1f18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1f1c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1F1Cu;
    {
        const bool branch_taken_0x2b1f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1f1c) {
            ctx->pc = 0x2B1F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1F1Cu;
            // 0x2b1f20: 0xe4800078  swc1        $f0, 0x78($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1F30u;
            goto label_2b1f30;
        }
    }
    ctx->pc = 0x2B1F24u;
    // 0x2b1f24: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x2b1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2b1f28: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1f2c: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1f2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1f30:
    // 0x2b1f30: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b1f34: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1F34u;
    {
        const bool branch_taken_0x2b1f34 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F34u;
        // 0x2b1f38: 0xc4a00030  lwc1        $f0, 0x30($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f34) {
            ctx->pc = 0x2B1F40u;
            goto label_2b1f40;
        }
    }
    ctx->pc = 0x2B1F3Cu;
    // 0x2b1f3c: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b1f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b1f40:
    // 0x2b1f40: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b1f44: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2b1f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2b1f48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1f4c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1F4Cu;
    {
        const bool branch_taken_0x2b1f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1f4c) {
            ctx->pc = 0x2B1F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1F4Cu;
            // 0x2b1f50: 0xe480007c  swc1        $f0, 0x7C($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1F60u;
            goto label_2b1f60;
        }
    }
    ctx->pc = 0x2B1F54u;
    // 0x2b1f54: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x2b1f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2b1f58: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1f5c: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1f5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1f60:
    // 0x2b1f60: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b1f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b1f64: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1F64u;
    {
        const bool branch_taken_0x2b1f64 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F64u;
        // 0x2b1f68: 0xc4a00034  lwc1        $f0, 0x34($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f64) {
            ctx->pc = 0x2B1F70u;
            goto label_2b1f70;
        }
    }
    ctx->pc = 0x2B1F6Cu;
    // 0x2b1f6c: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b1f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b1f70:
    // 0x2b1f70: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b1f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b1f74: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2b1f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2b1f78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1f7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1F7Cu;
    {
        const bool branch_taken_0x2b1f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1f7c) {
            ctx->pc = 0x2B1F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1F7Cu;
            // 0x2b1f80: 0xe4800080  swc1        $f0, 0x80($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1F90u;
            goto label_2b1f90;
        }
    }
    ctx->pc = 0x2B1F84u;
    // 0x2b1f84: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2b1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2b1f88: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1f8c: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1f8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1f90:
    // 0x2b1f90: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b1f94: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1F94u;
    {
        const bool branch_taken_0x2b1f94 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F94u;
        // 0x2b1f98: 0xc4a00038  lwc1        $f0, 0x38($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f94) {
            ctx->pc = 0x2B1FA0u;
            goto label_2b1fa0;
        }
    }
    ctx->pc = 0x2B1F9Cu;
    // 0x2b1f9c: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b1f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b1fa0:
    // 0x2b1fa0: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b1fa4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2b1fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2b1fa8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1fac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1FACu;
    {
        const bool branch_taken_0x2b1fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1fac) {
            ctx->pc = 0x2B1FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1FACu;
            // 0x2b1fb0: 0xe4800084  swc1        $f0, 0x84($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1FC0u;
            goto label_2b1fc0;
        }
    }
    ctx->pc = 0x2B1FB4u;
    // 0x2b1fb4: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x2b1fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2b1fb8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1fbc: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1fbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1fc0:
    // 0x2b1fc0: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x2b1fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1fc4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b1fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b1fc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b1fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1fcc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b1fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b1fd0: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x2b1fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2b1fd4: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2b1fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1fd8: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x2b1fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x2b1fdc: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x2b1fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1fe0: 0xe482004c  swc1        $f2, 0x4C($a0)
    ctx->pc = 0x2b1fe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x2b1fe4: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x2b1fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2b1fe8: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x2b1fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2b1fec: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2b1fecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2b1ff0: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2b1ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2b1ff4: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2b1ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b1ff8: 0x5440ff81  bnel        $v0, $zero, . + 4 + (-0x7F << 2)
    ctx->pc = 0x2B1FF8u;
    {
        const bool branch_taken_0x2b1ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1ff8) {
            ctx->pc = 0x2B1FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1FF8u;
            // 0x2b1ffc: 0x8e62002c  lw          $v0, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1e00;
        }
    }
    ctx->pc = 0x2B2000u;
label_2b2000:
    // 0x2b2000: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x2b2000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x2b2004: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b2004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b2008: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b200c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B200Cu;
    {
        const bool branch_taken_0x2b200c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b200c) {
            ctx->pc = 0x2B2010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B200Cu;
            // 0x2b2010: 0x8e620060  lw          $v0, 0x60($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2060u;
            goto label_2b2060;
        }
    }
    ctx->pc = 0x2B2014u;
    // 0x2b2014: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x2b2014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2b2018: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B2018u;
    {
        const bool branch_taken_0x2b2018 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2018u;
        // 0x2b201c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2018) {
            ctx->pc = 0x2B205Cu;
            goto label_2b205c;
        }
    }
    ctx->pc = 0x2B2020u;
    // 0x2b2020: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2b2020u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b2024: 0x0  nop
    ctx->pc = 0x2b2024u;
    // NOP
label_2b2028:
    // 0x2b2028: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x2b2028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2b202c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2b202cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2b2030: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b2030u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b2034: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2b2034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2b2038: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b2038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b203c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b203cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b2040: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b2040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b2044: 0xc0aad18  jal         func_2AB460
    ctx->pc = 0x2B2044u;
    SET_GPR_U32(ctx, 31, 0x2B204Cu);
    ctx->pc = 0x2B2048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2044u;
    // 0x2b2048: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB460u, 0x2B2044u, 0x2B204Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B204Cu;
label_2b204c:
    // 0x2b204c: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x2b204cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2b2050: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2b2050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b2054: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B2054u;
    {
        const bool branch_taken_0x2b2054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2054u;
        // 0x2b2058: 0x102880  sll         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2054) {
            ctx->pc = 0x2B2028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2028;
        }
    }
    ctx->pc = 0x2B205Cu;
label_2b205c:
    // 0x2b205c: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x2b205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_2b2060:
    // 0x2b2060: 0x184000ce  blez        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x2B2060u;
    {
        const bool branch_taken_0x2b2060 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2060u;
        // 0x2b2064: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2060) {
            ctx->pc = 0x2B239Cu;
            goto label_2b239c;
        }
    }
    ctx->pc = 0x2B2068u;
    // 0x2b2068: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x2b2068u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x2b206c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b206cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b2070: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b2070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b2074: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b2074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2078: 0x26b2ce50  addiu       $s2, $s5, -0x31B0
    ctx->pc = 0x2b2078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954576));
    // 0x2b207c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2b207cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2b2080:
    // 0x2b2080: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x2b2080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2b2084: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b2084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b2088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b208c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b208cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b2090: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2094: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2b2094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2098: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x2b2098u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2b209c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b20a0: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B20A0u;
    {
        const bool branch_taken_0x2b20a0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20A0u;
        // 0x2b20a4: 0xc4c0000c  lwc1        $f0, 0xC($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20a0) {
            ctx->pc = 0x2B20ACu;
            goto label_2b20ac;
        }
    }
    ctx->pc = 0x2B20A8u;
    // 0x2b20a8: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b20a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b20ac:
    // 0x2b20ac: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b20acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b20b0: 0x8ea3ce50  lw          $v1, -0x31B0($s5)
    ctx->pc = 0x2b20b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954576)));
    // 0x2b20b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b20b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b20b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B20B8u;
    {
        const bool branch_taken_0x2b20b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b20b8) {
            ctx->pc = 0x2B20BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B20B8u;
            // 0x2b20bc: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B20CCu;
            goto label_2b20cc;
        }
    }
    ctx->pc = 0x2B20C0u;
    // 0x2b20c0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2b20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2b20c4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b20c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b20c8: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b20c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b20cc:
    // 0x2b20cc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b20d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b20d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b20d4: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B20D4u;
    {
        const bool branch_taken_0x2b20d4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20D4u;
        // 0x2b20d8: 0xc4c00010  lwc1        $f0, 0x10($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20d4) {
            ctx->pc = 0x2B20E0u;
            goto label_2b20e0;
        }
    }
    ctx->pc = 0x2B20DCu;
    // 0x2b20dc: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x2b20dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_2b20e0:
    // 0x2b20e0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b20e4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2b20e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b20e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b20e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b20ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B20ECu;
    {
        const bool branch_taken_0x2b20ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b20ec) {
            ctx->pc = 0x2B20F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B20ECu;
            // 0x2b20f0: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2100u;
            goto label_2b2100;
        }
    }
    ctx->pc = 0x2B20F4u;
    // 0x2b20f4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2b20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2b20f8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b20f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b20fc: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b20fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b2100:
    // 0x2b2100: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b2100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b2104: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2104u;
    {
        const bool branch_taken_0x2b2104 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2104u;
        // 0x2b2108: 0xc4c00014  lwc1        $f0, 0x14($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2104) {
            ctx->pc = 0x2B2110u;
            goto label_2b2110;
        }
    }
    ctx->pc = 0x2B210Cu;
    // 0x2b210c: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b210cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b2110:
    // 0x2b2110: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b2110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b2114: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2b2114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2b2118: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b211c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B211Cu;
    {
        const bool branch_taken_0x2b211c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b211c) {
            ctx->pc = 0x2B2120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B211Cu;
            // 0x2b2120: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2130u;
            goto label_2b2130;
        }
    }
    ctx->pc = 0x2B2124u;
    // 0x2b2124: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x2b2124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2b2128: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b2128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b212c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b212cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b2130:
    // 0x2b2130: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b2130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b2134: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2134u;
    {
        const bool branch_taken_0x2b2134 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2134u;
        // 0x2b2138: 0xc4c00018  lwc1        $f0, 0x18($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2134) {
            ctx->pc = 0x2B2140u;
            goto label_2b2140;
        }
    }
    ctx->pc = 0x2B213Cu;
    // 0x2b213c: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b213cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b2140:
    // 0x2b2140: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b2140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b2144: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2b2144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2b2148: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b214c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B214Cu;
    {
        const bool branch_taken_0x2b214c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b214c) {
            ctx->pc = 0x2B2150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B214Cu;
            // 0x2b2150: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2160u;
            goto label_2b2160;
        }
    }
    ctx->pc = 0x2B2154u;
    // 0x2b2154: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2b2154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2b2158: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b2158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b215c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b215cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b2160:
    // 0x2b2160: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b2160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b2164: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2164u;
    {
        const bool branch_taken_0x2b2164 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2164u;
        // 0x2b2168: 0xc4c0001c  lwc1        $f0, 0x1C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2164) {
            ctx->pc = 0x2B2170u;
            goto label_2b2170;
        }
    }
    ctx->pc = 0x2B216Cu;
    // 0x2b216c: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b216cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b2170:
    // 0x2b2170: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b2170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b2174: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2b2174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2b2178: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b217c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B217Cu;
    {
        const bool branch_taken_0x2b217c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b217c) {
            ctx->pc = 0x2B2180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B217Cu;
            // 0x2b2180: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2190u;
            goto label_2b2190;
        }
    }
    ctx->pc = 0x2B2184u;
    // 0x2b2184: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2b2184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2b2188: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b2188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b218c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b218cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b2190:
    // 0x2b2190: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b2190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b2194: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2194u;
    {
        const bool branch_taken_0x2b2194 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2194u;
        // 0x2b2198: 0xc4c00020  lwc1        $f0, 0x20($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2194) {
            ctx->pc = 0x2B21A0u;
            goto label_2b21a0;
        }
    }
    ctx->pc = 0x2B219Cu;
    // 0x2b219c: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b219cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b21a0:
    // 0x2b21a0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b21a4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2b21a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b21a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b21a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b21ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B21ACu;
    {
        const bool branch_taken_0x2b21ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b21ac) {
            ctx->pc = 0x2B21B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B21ACu;
            // 0x2b21b0: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B21C0u;
            goto label_2b21c0;
        }
    }
    ctx->pc = 0x2B21B4u;
    // 0x2b21b4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2b21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b21b8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b21b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b21bc: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b21bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b21c0:
    // 0x2b21c0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b21c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b21c4: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B21C4u;
    {
        const bool branch_taken_0x2b21c4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21C4u;
        // 0x2b21c8: 0xc4c00024  lwc1        $f0, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b21c4) {
            ctx->pc = 0x2B21D0u;
            goto label_2b21d0;
        }
    }
    ctx->pc = 0x2B21CCu;
    // 0x2b21cc: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b21ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b21d0:
    // 0x2b21d0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b21d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b21d4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x2b21d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2b21d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b21d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b21dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B21DCu;
    {
        const bool branch_taken_0x2b21dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b21dc) {
            ctx->pc = 0x2B21E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B21DCu;
            // 0x2b21e0: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B21F0u;
            goto label_2b21f0;
        }
    }
    ctx->pc = 0x2B21E4u;
    // 0x2b21e4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2b21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2b21e8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b21e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b21ec: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b21ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b21f0:
    // 0x2b21f0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b21f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b21f4: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B21F4u;
    {
        const bool branch_taken_0x2b21f4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21F4u;
        // 0x2b21f8: 0xc4c00028  lwc1        $f0, 0x28($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b21f4) {
            ctx->pc = 0x2B2200u;
            goto label_2b2200;
        }
    }
    ctx->pc = 0x2B21FCu;
    // 0x2b21fc: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b2200:
    // 0x2b2200: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b2200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b2204: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2b2204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2b2208: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b220c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B220Cu;
    {
        const bool branch_taken_0x2b220c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b220c) {
            ctx->pc = 0x2B2210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B220Cu;
            // 0x2b2210: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2220u;
            goto label_2b2220;
        }
    }
    ctx->pc = 0x2B2214u;
    // 0x2b2214: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2b2214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2b2218: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b2218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b221c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b221cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b2220:
    // 0x2b2220: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b2220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b2224: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2224u;
    {
        const bool branch_taken_0x2b2224 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2224u;
        // 0x2b2228: 0xc4c0002c  lwc1        $f0, 0x2C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2224) {
            ctx->pc = 0x2B2230u;
            goto label_2b2230;
        }
    }
    ctx->pc = 0x2B222Cu;
    // 0x2b222c: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b222cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b2230:
    // 0x2b2230: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b2230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b2234: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2b2234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2b2238: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b223c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B223Cu;
    {
        const bool branch_taken_0x2b223c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b223c) {
            ctx->pc = 0x2B2240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B223Cu;
            // 0x2b2240: 0xe600005c  swc1        $f0, 0x5C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2250u;
            goto label_2b2250;
        }
    }
    ctx->pc = 0x2B2244u;
    // 0x2b2244: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2b2244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2b2248: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b2248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b224c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b224cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b2250:
    // 0x2b2250: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b2250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b2254: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2254u;
    {
        const bool branch_taken_0x2b2254 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B2258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2254u;
        // 0x2b2258: 0xc4c00030  lwc1        $f0, 0x30($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2254) {
            ctx->pc = 0x2B2260u;
            goto label_2b2260;
        }
    }
    ctx->pc = 0x2B225Cu;
    // 0x2b225c: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b225cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b2260:
    // 0x2b2260: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b2260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b2264: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x2b2264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2b2268: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b226c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B226Cu;
    {
        const bool branch_taken_0x2b226c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b226c) {
            ctx->pc = 0x2B2270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B226Cu;
            // 0x2b2270: 0xe6000060  swc1        $f0, 0x60($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2280u;
            goto label_2b2280;
        }
    }
    ctx->pc = 0x2B2274u;
    // 0x2b2274: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2b2274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2b2278: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b2278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b227c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b227cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b2280:
    // 0x2b2280: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b2280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b2284: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2284u;
    {
        const bool branch_taken_0x2b2284 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B2288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2284u;
        // 0x2b2288: 0xc4c00034  lwc1        $f0, 0x34($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2284) {
            ctx->pc = 0x2B2290u;
            goto label_2b2290;
        }
    }
    ctx->pc = 0x2B228Cu;
    // 0x2b228c: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b228cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b2290:
    // 0x2b2290: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b2290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b2294: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x2b2294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2b2298: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b229c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B229Cu;
    {
        const bool branch_taken_0x2b229c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b229c) {
            ctx->pc = 0x2B22A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B229Cu;
            // 0x2b22a0: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B22B0u;
            goto label_2b22b0;
        }
    }
    ctx->pc = 0x2B22A4u;
    // 0x2b22a4: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x2b22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2b22a8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b22a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b22ac: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b22acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b22b0:
    // 0x2b22b0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b22b4: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B22B4u;
    {
        const bool branch_taken_0x2b22b4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22B4u;
        // 0x2b22b8: 0xc4c00038  lwc1        $f0, 0x38($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b22b4) {
            ctx->pc = 0x2B22C0u;
            goto label_2b22c0;
        }
    }
    ctx->pc = 0x2B22BCu;
    // 0x2b22bc: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b22bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b22c0:
    // 0x2b22c0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b22c4: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x2b22c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2b22c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b22c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b22cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B22CCu;
    {
        const bool branch_taken_0x2b22cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b22cc) {
            ctx->pc = 0x2B22D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B22CCu;
            // 0x2b22d0: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B22E0u;
            goto label_2b22e0;
        }
    }
    ctx->pc = 0x2B22D4u;
    // 0x2b22d4: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2b22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b22d8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b22d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b22dc: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b22dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b22e0:
    // 0x2b22e0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b22e4: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B22E4u;
    {
        const bool branch_taken_0x2b22e4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B22E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22E4u;
        // 0x2b22e8: 0xc4c0003c  lwc1        $f0, 0x3C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b22e4) {
            ctx->pc = 0x2B22F0u;
            goto label_2b22f0;
        }
    }
    ctx->pc = 0x2B22ECu;
    // 0x2b22ec: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b22ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b22f0:
    // 0x2b22f0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b22f4: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2b22f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2b22f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b22f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b22fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B22FCu;
    {
        const bool branch_taken_0x2b22fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b22fc) {
            ctx->pc = 0x2B2300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B22FCu;
            // 0x2b2300: 0xe600006c  swc1        $f0, 0x6C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2310u;
            goto label_2b2310;
        }
    }
    ctx->pc = 0x2B2304u;
    // 0x2b2304: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2b2304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2b2308: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b2308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b230c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b230cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b2310:
    // 0x2b2310: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b2314: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2314u;
    {
        const bool branch_taken_0x2b2314 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2314u;
        // 0x2b2318: 0xc4c00040  lwc1        $f0, 0x40($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2314) {
            ctx->pc = 0x2B2320u;
            goto label_2b2320;
        }
    }
    ctx->pc = 0x2B231Cu;
    // 0x2b231c: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b231cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b2320:
    // 0x2b2320: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b2320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b2324: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x2b2324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2b2328: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b232c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B232Cu;
    {
        const bool branch_taken_0x2b232c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b232c) {
            ctx->pc = 0x2B2330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B232Cu;
            // 0x2b2330: 0xe6000070  swc1        $f0, 0x70($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2340u;
            goto label_2b2340;
        }
    }
    ctx->pc = 0x2B2334u;
    // 0x2b2334: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b2334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b2338: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b2338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b233c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b233cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b2340:
    // 0x2b2340: 0xc4c00044  lwc1        $f0, 0x44($a2)
    ctx->pc = 0x2b2340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2344: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b2344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2348: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b2348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b234c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b234cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b2350: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b2350u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b2354: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2b2354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2b2358: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x2b2358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2b235c: 0xc4c00048  lwc1        $f0, 0x48($a2)
    ctx->pc = 0x2b235cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2360: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2b2360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2b2364: 0xc4c1004c  lwc1        $f1, 0x4C($a2)
    ctx->pc = 0x2b2364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2368: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x2b2368u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2b236c: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x2b236cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2b2370: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x2b2370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2b2374: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b2374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
    // 0x2b2378: 0xc0ca4d2  jal         func_329348
    ctx->pc = 0x2B2378u;
    SET_GPR_U32(ctx, 31, 0x2B2380u);
    ctx->pc = 0x2B237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2378u;
    // 0x2b237c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329348u, 0x2B2378u, 0x2B2380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2380u;
label_2b2380:
    // 0x2b2380: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2b2380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b2384: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2b2384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2b2388: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2b2388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2b238c: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x2b238cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2b2390: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2b2390u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b2394: 0x1460ff3a  bnez        $v1, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x2B2394u;
    {
        const bool branch_taken_0x2b2394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2394u;
        // 0x2b2398: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2394) {
            ctx->pc = 0x2B2080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2080;
        }
    }
    ctx->pc = 0x2B239Cu;
label_2b239c:
    // 0x2b239c: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x2b239cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x2b23a0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2b23a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2b23a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B23A4u;
    {
        const bool branch_taken_0x2b23a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23A4u;
        // 0x2b23a8: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b23a4) {
            ctx->pc = 0x2B23D0u;
            goto label_2b23d0;
        }
    }
    ctx->pc = 0x2B23ACu;
    // 0x2b23ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B23ACu;
    {
        const bool branch_taken_0x2b23ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23ACu;
        // 0x2b23b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b23ac) {
            ctx->pc = 0x2B23D4u;
            goto label_2b23d4;
        }
    }
    ctx->pc = 0x2B23B4u;
    // 0x2b23b4: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x2b23b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2b23b8: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x2b23b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2b23bc: 0xc0ac93e  jal         func_2B24F8
    ctx->pc = 0x2B23BCu;
    SET_GPR_U32(ctx, 31, 0x2B23C4u);
    ctx->pc = 0x2B23C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B23BCu;
    // 0x2b23c0: 0x8c850084  lw          $a1, 0x84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B24F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B24F8u, 0x2B23BCu, 0x2B23C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B23C4u;
label_2b23c4:
    // 0x2b23c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b23c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b23c8: 0xc0ac916  jal         func_2B2458
    ctx->pc = 0x2B23C8u;
    SET_GPR_U32(ctx, 31, 0x2B23D0u);
    ctx->pc = 0x2B23CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B23C8u;
    // 0x2b23cc: 0x8c850084  lw          $a1, 0x84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2458u, 0x2B23C8u, 0x2B23D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B23D0u;
label_2b23d0:
    // 0x2b23d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b23d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b23d4:
    // 0x2b23d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b23d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b23d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b23d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b23dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b23dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b23e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b23e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b23e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2b23e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b23e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b23e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b23ec: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x2b23ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b23f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B23F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B23F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23F0u;
        // 0x2b23f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B23F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B23F8u;
}
