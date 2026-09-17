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

// Function: sub_0023E848
// Address: 0x23e848 - 0x23f220
void sub_0023E848_0x23e848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E848_0x23e848");
#endif

    switch (ctx->pc) {
        case 0x23e894u: goto label_23e894;
        case 0x23e8a4u: goto label_23e8a4;
        case 0x23e8acu: goto label_23e8ac;
        case 0x23e8c8u: goto label_23e8c8;
        case 0x23e8e0u: goto label_23e8e0;
        case 0x23e8e8u: goto label_23e8e8;
        case 0x23e8f8u: goto label_23e8f8;
        case 0x23e90cu: goto label_23e90c;
        case 0x23e928u: goto label_23e928;
        case 0x23e96cu: goto label_23e96c;
        case 0x23e9acu: goto label_23e9ac;
        case 0x23e9e0u: goto label_23e9e0;
        case 0x23ea10u: goto label_23ea10;
        case 0x23ec48u: goto label_23ec48;
        case 0x23ec78u: goto label_23ec78;
        case 0x23ec80u: goto label_23ec80;
        case 0x23ecb8u: goto label_23ecb8;
        case 0x23ece8u: goto label_23ece8;
        case 0x23ed18u: goto label_23ed18;
        case 0x23ed8cu: goto label_23ed8c;
        case 0x23eda4u: goto label_23eda4;
        case 0x23edfcu: goto label_23edfc;
        case 0x23ee14u: goto label_23ee14;
        case 0x23ee40u: goto label_23ee40;
        case 0x23eeb0u: goto label_23eeb0;
        case 0x23f048u: goto label_23f048;
        case 0x23f090u: goto label_23f090;
        case 0x23f098u: goto label_23f098;
        case 0x23f0f0u: goto label_23f0f0;
        case 0x23f134u: goto label_23f134;
        case 0x23f178u: goto label_23f178;
        default: break;
    }

    ctx->pc = 0x23e848u;

    // 0x23e848: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x23e848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x23e84c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x23e84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x23e850: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x23e850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x23e854: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x23e854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x23e858: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x23e858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x23e85c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x23e85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x23e860: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x23e860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x23e864: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x23e864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x23e868: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x23e868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x23e86c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x23e86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x23e870: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x23e870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x23e874: 0xe7ba00e0  swc1        $f26, 0xE0($sp)
    ctx->pc = 0x23e874u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x23e878: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x23e878u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x23e87c: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x23e87cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x23e880: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x23e880u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x23e884: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x23e884u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x23e888: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x23e888u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x23e88c: 0xc07c4c4  jal         func_1F1310
    ctx->pc = 0x23E88Cu;
    SET_GPR_U32(ctx, 31, 0x23E894u);
    ctx->pc = 0x23E890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E88Cu;
    // 0x23e890: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1310u, 0x23E88Cu, 0x23E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E894u;
label_23e894:
    // 0x23e894: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23E894u;
    {
        const bool branch_taken_0x23e894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e894) {
            ctx->pc = 0x23E8C0u;
            goto label_23e8c0;
        }
    }
    ctx->pc = 0x23E89Cu;
    // 0x23e89c: 0xc08f70e  jal         func_23DC38
    ctx->pc = 0x23E89Cu;
    SET_GPR_U32(ctx, 31, 0x23E8A4u);
    ctx->pc = 0x23E8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E89Cu;
    // 0x23e8a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC38u, 0x23E89Cu, 0x23E8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8A4u;
label_23e8a4:
    // 0x23e8a4: 0xc08f70e  jal         func_23DC38
    ctx->pc = 0x23E8A4u;
    SET_GPR_U32(ctx, 31, 0x23E8ACu);
    ctx->pc = 0x23E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E8A4u;
    // 0x23e8a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC38u, 0x23E8A4u, 0x23E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8ACu;
label_23e8ac:
    // 0x23e8ac: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x23e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x23e8b0: 0x24620ae0  addiu       $v0, $v1, 0xAE0
    ctx->pc = 0x23e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2784));
    // 0x23e8b4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x23e8b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x160AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x160AE8u, _value); } while (0);
    // 0x23e8b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23e8b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x160AE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x160AE0u, _value); } while (0);
    // 0x23e8bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23e8bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x160AE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x160AE4u, _value); } while (0);
label_23e8c0:
    // 0x23e8c0: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x23E8C0u;
    SET_GPR_U32(ctx, 31, 0x23E8C8u);
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x23E8C0u, 0x23E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8C8u;
label_23e8c8:
    // 0x23e8c8: 0x14400243  bnez        $v0, . + 4 + (0x243 << 2)
    ctx->pc = 0x23E8C8u;
    {
        const bool branch_taken_0x23e8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8C8u;
        // 0x23e8cc: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8c8) {
            ctx->pc = 0x23F1D8u;
            goto label_23f1d8;
        }
    }
    ctx->pc = 0x23E8D0u;
    // 0x23e8d0: 0xc79a87c8  lwc1        $f26, -0x7838($gp)
    ctx->pc = 0x23e8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x23e8d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23e8d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e8d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e8dc: 0x0  nop
    ctx->pc = 0x23e8dcu;
    // NOP
label_23e8e0:
    // 0x23e8e0: 0xc0af9ee  jal         func_2BE7B8
    ctx->pc = 0x23E8E0u;
    SET_GPR_U32(ctx, 31, 0x23E8E8u);
    ctx->pc = 0x23E8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E8E0u;
    // 0x23e8e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7B8u, 0x23E8E0u, 0x23E8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8E8u;
label_23e8e8:
    // 0x23e8e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23e8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e8ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e8f0: 0xc0af9ce  jal         func_2BE738
    ctx->pc = 0x23E8F0u;
    SET_GPR_U32(ctx, 31, 0x23E8F8u);
    ctx->pc = 0x23E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E8F0u;
    // 0x23e8f4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE738u, 0x23E8F0u, 0x23E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8F8u;
label_23e8f8:
    // 0x23e8f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23e8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e8fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e900: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x23e900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x23e904: 0xc0af9ae  jal         func_2BE6B8
    ctx->pc = 0x23E904u;
    SET_GPR_U32(ctx, 31, 0x23E90Cu);
    ctx->pc = 0x23E908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E904u;
    // 0x23e908: 0x14b880  sll         $s7, $s4, 2 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE6B8u, 0x23E904u, 0x23E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E90Cu;
label_23e90c:
    // 0x23e90c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23e90cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e910: 0x2f41021  addu        $v0, $s7, $s4
    ctx->pc = 0x23e910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x23e914: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23e914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23e918: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23e918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e91c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23e920: 0x29140  sll         $s2, $v0, 5
    ctx->pc = 0x23e920u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x23e924: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23e924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_23e928:
    // 0x23e928: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x23e928u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x23e92c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23e930: 0x2484b5f8  addiu       $a0, $a0, -0x4A08
    ctx->pc = 0x23e930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948344));
    // 0x23e934: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23e934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23e938: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x23e938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23e93c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23e93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e940: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23e940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23e944: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x23e944u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x23e948: 0x24420af0  addiu       $v0, $v0, 0xAF0
    ctx->pc = 0x23e948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2800));
    // 0x23e94c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x23e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23e950: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x23e950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x23e954: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23e954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23e958: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23e958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23e95c: 0x653024  and         $a2, $v1, $a1
    ctx->pc = 0x23e95cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x23e960: 0x2652824  and         $a1, $s3, $a1
    ctx->pc = 0x23e960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 5));
    // 0x23e964: 0xc08f6d8  jal         func_23DB60
    ctx->pc = 0x23E964u;
    SET_GPR_U32(ctx, 31, 0x23E96Cu);
    ctx->pc = 0x23E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E964u;
    // 0x23e968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DB60u, 0x23E964u, 0x23E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E96Cu;
label_23e96c:
    // 0x23e96c: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x23e96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e970: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x23e970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e974: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x23e974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x23e978: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23e978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23e97c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23e97cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23e980: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x23e980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x23e984: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x23E984u;
    {
        const bool branch_taken_0x23e984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E984u;
        // 0x23e988: 0x3c040047  lui         $a0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e984) {
            ctx->pc = 0x23E928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e928;
        }
    }
    ctx->pc = 0x23E98Cu;
    // 0x23e98c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x23e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x23e990: 0x8f83a530  lw          $v1, -0x5AD0($gp)
    ctx->pc = 0x23e990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x23e994: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x23e994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x23e998: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23e998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23e99c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E99Cu;
    {
        const bool branch_taken_0x23e99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E99Cu;
        // 0x23e9a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e99c) {
            ctx->pc = 0x23E9B8u;
            goto label_23e9b8;
        }
    }
    ctx->pc = 0x23E9A4u;
    // 0x23e9a4: 0xc08f70e  jal         func_23DC38
    ctx->pc = 0x23E9A4u;
    SET_GPR_U32(ctx, 31, 0x23E9ACu);
    ctx->pc = 0x23E9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9A4u;
    // 0x23e9a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC38u, 0x23E9A4u, 0x23E9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9ACu;
label_23e9ac:
    // 0x23e9ac: 0x100001f2  b           . + 4 + (0x1F2 << 2)
    ctx->pc = 0x23E9ACu;
    {
        const bool branch_taken_0x23e9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9ACu;
        // 0x23e9b0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9ac) {
            ctx->pc = 0x23F178u;
            goto label_23f178;
        }
    }
    ctx->pc = 0x23E9B4u;
    // 0x23e9b4: 0x0  nop
    ctx->pc = 0x23e9b4u;
    // NOP
label_23e9b8:
    // 0x23e9b8: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x23e9b8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x23e9bc: 0x2b7a821  addu        $s5, $s5, $s7
    ctx->pc = 0x23e9bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
    // 0x23e9c0: 0x8eb588d0  lw          $s5, -0x7730($s5)
    ctx->pc = 0x23e9c0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936784)));
    // 0x23e9c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e9c8: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x23e9c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23e9cc: 0x8ea20894  lw          $v0, 0x894($s5)
    ctx->pc = 0x23e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2196)));
    // 0x23e9d0: 0x241e002d  addiu       $fp, $zero, 0x2D
    ctx->pc = 0x23e9d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x23e9d4: 0x3c120024  lui         $s2, 0x24
    ctx->pc = 0x23e9d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)36 << 16));
    // 0x23e9d8: 0xc0af9be  jal         func_2BE6F8
    ctx->pc = 0x23E9D8u;
    SET_GPR_U32(ctx, 31, 0x23E9E0u);
    ctx->pc = 0x23E9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9D8u;
    // 0x23e9dc: 0x8c53001c  lw          $s3, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE6F8u, 0x23E9D8u, 0x23E9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9E0u;
label_23e9e0:
    // 0x23e9e0: 0x2f41821  addu        $v1, $s7, $s4
    ctx->pc = 0x23e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x23e9e4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x23e9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x23e9e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23e9ec: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23e9f0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x23e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x23e9f4: 0x24420ae0  addiu       $v0, $v0, 0xAE0
    ctx->pc = 0x23e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2784));
    // 0x23e9f8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x23e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x23e9fc: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x23e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x23ea00: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x23ea00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x23ea04: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x23ea04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x23ea08: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23ea0c: 0x0  nop
    ctx->pc = 0x23ea0cu;
    // NOP
label_23ea10:
    // 0x23ea10: 0x114880  sll         $t1, $s1, 2
    ctx->pc = 0x23ea10u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23ea14: 0x2484b5f8  addiu       $a0, $a0, -0x4A08
    ctx->pc = 0x23ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948344));
    // 0x23ea18: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x23ea18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x23ea1c: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x23ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x23ea20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ea24: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x23ea24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x23ea28: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x23EA28u;
    {
        const bool branch_taken_0x23ea28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA28u;
        // 0x23ea2c: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea28) {
            ctx->pc = 0x23EC9Cu;
            goto label_23ec9c;
        }
    }
    ctx->pc = 0x23EA30u;
    // 0x23ea30: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23ea30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23ea34: 0x2463b5e0  addiu       $v1, $v1, -0x4A20
    ctx->pc = 0x23ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948320));
    // 0x23ea38: 0x2484b5b0  addiu       $a0, $a0, -0x4A50
    ctx->pc = 0x23ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948272));
    // 0x23ea3c: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x23ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x23ea40: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x23ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x23ea44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ea48: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x23ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x23ea4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23ea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ea50: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x23ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x23ea54: 0x2442b598  addiu       $v0, $v0, -0x4A68
    ctx->pc = 0x23ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948248));
    // 0x23ea58: 0x2463b5c8  addiu       $v1, $v1, -0x4A38
    ctx->pc = 0x23ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948296));
    // 0x23ea5c: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x23ea5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x23ea60: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x23ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23ea64: 0x1234021  addu        $t0, $t1, $v1
    ctx->pc = 0x23ea64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x23ea68: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x23ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x23ea6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23ea70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23ea74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x23ea78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x23ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x23ea7c: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x23ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23ea80: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x23ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x23ea84: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x23ea84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ea88: 0xc4830074  lwc1        $f3, 0x74($a0)
    ctx->pc = 0x23ea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23ea8c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x23ea8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23ea90: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x23ea90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23ea94: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x23ea94u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x23ea98: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x23ea98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23ea9c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x23ea9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23eaa0: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x23eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x23eaa4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x23eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x23eaa8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23eaac: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x23eaacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23eab0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x23eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x23eab4: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x23EAB4u;
    {
        const bool branch_taken_0x23eab4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAB4u;
        // 0x23eab8: 0xc4440008  lwc1        $f4, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eab4) {
            ctx->pc = 0x23EB50u;
            goto label_23eb50;
        }
    }
    ctx->pc = 0x23EABCu;
    // 0x23eabc: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x23eabcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x23eac0: 0xc78187cc  lwc1        $f1, -0x7834($gp)
    ctx->pc = 0x23eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23eac4: 0x0  nop
    ctx->pc = 0x23eac4u;
    // NOP
    // 0x23eac8: 0x0  nop
    ctx->pc = 0x23eac8u;
    // NOP
    // 0x23eacc: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x23eaccu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x23ead0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x23ead0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ead4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x23EAD4u;
    {
        const bool branch_taken_0x23ead4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAD4u;
        // 0x23ead8: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ead4) {
            ctx->pc = 0x23EAF8u;
            goto label_23eaf8;
        }
    }
    ctx->pc = 0x23EADCu;
    // 0x23eadc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x23eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23eae0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x23eae4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23eae8: 0x78430070  lq          $v1, 0x70($v0)
    ctx->pc = 0x23eae8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x23eaec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x23EAECu;
    {
        const bool branch_taken_0x23eaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAECu;
        // 0x23eaf0: 0x7cc30000  sq          $v1, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eaec) {
            ctx->pc = 0x23EB58u;
            goto label_23eb58;
        }
    }
    ctx->pc = 0x23EAF4u;
    // 0x23eaf4: 0x0  nop
    ctx->pc = 0x23eaf4u;
    // NOP
label_23eaf8:
    // 0x23eaf8: 0xc78087d0  lwc1        $f0, -0x7830($gp)
    ctx->pc = 0x23eaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23eafc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x23eafcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23eb00: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x23EB00u;
    {
        const bool branch_taken_0x23eb00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23eb00) {
            ctx->pc = 0x23EB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EB00u;
            // 0x23eb04: 0x78620070  lq          $v0, 0x70($v1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EB54u;
            goto label_23eb54;
        }
    }
    ctx->pc = 0x23EB08u;
    // 0x23eb08: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x23eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x23eb0c: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x23eb0cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x23eb10: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x23eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x23eb14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23eb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eb18: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x23eb18u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23eb1c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x23eb1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23eb20: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23eb20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23eb24: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x23eb24u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23eb28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23eb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23eb2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23eb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eb30: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23eb30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23eb34: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23eb34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23eb38: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23eb38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23eb3c: 0x4be181bc  vmulax.xyzw $ACC, $vf16, $vf1x
    ctx->pc = 0x23eb3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23eb40: 0x4be28c08  vmaddx.xyzw $vf16, $vf17, $vf2x
    ctx->pc = 0x23eb40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23eb44: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x23eb44u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23eb48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23EB48u;
    {
        const bool branch_taken_0x23eb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB48u;
        // 0x23eb4c: 0xe4c40004  swc1        $f4, 0x4($a2) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb48) {
            ctx->pc = 0x23EB5Cu;
            goto label_23eb5c;
        }
    }
    ctx->pc = 0x23EB50u;
label_23eb50:
    // 0x23eb50: 0x78620070  lq          $v0, 0x70($v1)
    ctx->pc = 0x23eb50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
label_23eb54:
    // 0x23eb54: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x23eb54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_23eb58:
    // 0x23eb58: 0xe4c40004  swc1        $f4, 0x4($a2)
    ctx->pc = 0x23eb58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_23eb5c:
    // 0x23eb5c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23eb60: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x23eb60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23eb64: 0x16230008  bne         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23EB64u;
    {
        const bool branch_taken_0x23eb64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x23EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB64u;
        // 0x23eb68: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb64) {
            ctx->pc = 0x23EB88u;
            goto label_23eb88;
        }
    }
    ctx->pc = 0x23EB6Cu;
    // 0x23eb6c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23eb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23eb70: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x23eb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23eb74: 0x2484b5f8  addiu       $a0, $a0, -0x4A08
    ctx->pc = 0x23eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948344));
    // 0x23eb78: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x23eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x46B608u));
    // 0x23eb7c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x23eb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x23eb80: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x23EB80u;
    {
        const bool branch_taken_0x23eb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23eb80) {
            ctx->pc = 0x23EB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EB80u;
            // 0x23eb84: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ECA0u;
            goto label_23eca0;
        }
    }
    ctx->pc = 0x23EB88u;
label_23eb88:
    // 0x23eb88: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23eb8c: 0x24420ae0  addiu       $v0, $v0, 0xAE0
    ctx->pc = 0x23eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2784));
    // 0x23eb90: 0x2e24021  addu        $t0, $s7, $v0
    ctx->pc = 0x23eb90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x23eb94: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x23eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23eb98: 0x4430041  bgezl       $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x23EB98u;
    {
        const bool branch_taken_0x23eb98 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23eb98) {
            ctx->pc = 0x23EB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EB98u;
            // 0x23eb9c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ECA0u;
            goto label_23eca0;
        }
    }
    ctx->pc = 0x23EBA0u;
    // 0x23eba0: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23eba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23eba4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x23eba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x23eba8: 0x2484b5b0  addiu       $a0, $a0, -0x4A50
    ctx->pc = 0x23eba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948272));
    // 0x23ebac: 0x24a5b598  addiu       $a1, $a1, -0x4A68
    ctx->pc = 0x23ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948248));
    // 0x23ebb0: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x23ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x23ebb4: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x23ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x23ebb8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ebbc: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x23ebbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ebc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ebc4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x23ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23ebc8: 0x8ea600c4  lw          $a2, 0xC4($s5)
    ctx->pc = 0x23ebc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x23ebcc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x23ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23ebd0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23ebd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23ebd8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23ebdc: 0x8cc5003c  lw          $a1, 0x3C($a2)
    ctx->pc = 0x23ebdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x23ebe0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x23ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x23ebe4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x23ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23ebe8: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x23ebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x23ebec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x23ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x23ebf0: 0x24840af0  addiu       $a0, $a0, 0xAF0
    ctx->pc = 0x23ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2800));
    // 0x23ebf4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x23ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x23ebf8: 0x30a50020  andi        $a1, $a1, 0x20
    ctx->pc = 0x23ebf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x23ebfc: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x23ebfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23ec00: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x23EC00u;
    {
        const bool branch_taken_0x23ec00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC00u;
        // 0x23ec04: 0x24670070  addiu       $a3, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec00) {
            ctx->pc = 0x23EC30u;
            goto label_23ec30;
        }
    }
    ctx->pc = 0x23EC08u;
    // 0x23ec08: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x23ec08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x23ec0c: 0x24a488d0  addiu       $a0, $a1, -0x7730
    ctx->pc = 0x23ec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
    // 0x23ec10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x23ec14: 0x84430148  lh          $v1, 0x148($v0)
    ctx->pc = 0x23ec14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x23ec18: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23EC18u;
    {
        const bool branch_taken_0x23ec18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC18u;
        // 0x23ec1c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec18) {
            ctx->pc = 0x23EC34u;
            goto label_23ec34;
        }
    }
    ctx->pc = 0x23EC20u;
    // 0x23ec20: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23ec24: 0x84430148  lh          $v1, 0x148($v0)
    ctx->pc = 0x23ec24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x23ec28: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23EC28u;
    {
        const bool branch_taken_0x23ec28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ec28) {
            ctx->pc = 0x23EC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EC28u;
            // 0x23ec2c: 0x92a201f9  lbu         $v0, 0x1F9($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 505)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EC50u;
            goto label_23ec50;
        }
    }
    ctx->pc = 0x23EC30u;
label_23ec30:
    // 0x23ec30: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x23ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_23ec34:
    // 0x23ec34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ec34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec38: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x23ec38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec3c: 0x2646ddb8  addiu       $a2, $s2, -0x2248
    ctx->pc = 0x23ec3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958520));
    // 0x23ec40: 0xc08f6fa  jal         func_23DBE8
    ctx->pc = 0x23EC40u;
    SET_GPR_U32(ctx, 31, 0x23EC48u);
    ctx->pc = 0x23EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC40u;
    // 0x23ec44: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DBE8u, 0x23EC40u, 0x23EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC48u;
label_23ec48:
    // 0x23ec48: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23EC48u;
    {
        const bool branch_taken_0x23ec48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC48u;
        // 0x23ec4c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec48) {
            ctx->pc = 0x23ECA0u;
            goto label_23eca0;
        }
    }
    ctx->pc = 0x23EC50u;
label_23ec50:
    // 0x23ec50: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EC50u;
    {
        const bool branch_taken_0x23ec50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ec50) {
            ctx->pc = 0x23EC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EC50u;
            // 0x23ec54: 0xad1e0000  sw          $fp, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EC68u;
            goto label_23ec68;
        }
    }
    ctx->pc = 0x23EC58u;
    // 0x23ec58: 0x92a20196  lbu         $v0, 0x196($s5)
    ctx->pc = 0x23ec58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 406)));
    // 0x23ec5c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x23EC5Cu;
    {
        const bool branch_taken_0x23ec5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ec5c) {
            ctx->pc = 0x23EC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EC5Cu;
            // 0x23ec60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ECA0u;
            goto label_23eca0;
        }
    }
    ctx->pc = 0x23EC64u;
    // 0x23ec64: 0xad1e0000  sw          $fp, 0x0($t0)
    ctx->pc = 0x23ec64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 30));
label_23ec68:
    // 0x23ec68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ec68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23ec6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec70: 0xc08f6fa  jal         func_23DBE8
    ctx->pc = 0x23EC70u;
    SET_GPR_U32(ctx, 31, 0x23EC78u);
    ctx->pc = 0x23EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC70u;
    // 0x23ec74: 0x2646ddb8  addiu       $a2, $s2, -0x2248 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DBE8u, 0x23EC70u, 0x23EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC78u;
label_23ec78:
    // 0x23ec78: 0xc08f6b6  jal         func_23DAD8
    ctx->pc = 0x23EC78u;
    SET_GPR_U32(ctx, 31, 0x23EC80u);
    ctx->pc = 0x23DAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DAD8u, 0x23EC78u, 0x23EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC80u;
label_23ec80:
    // 0x23ec80: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x23ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x23ec84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x23ec88: 0x2463b548  addiu       $v1, $v1, -0x4AB8
    ctx->pc = 0x23ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948168));
    // 0x23ec8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23ec90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ec94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23ec98: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x23ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_23ec9c:
    // 0x23ec9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23ec9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23eca0:
    // 0x23eca0: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x23eca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x23eca4: 0x1440ff5a  bnez        $v0, . + 4 + (-0xA6 << 2)
    ctx->pc = 0x23ECA4u;
    {
        const bool branch_taken_0x23eca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECA4u;
        // 0x23eca8: 0x3c040047  lui         $a0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eca4) {
            ctx->pc = 0x23EA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ea10;
        }
    }
    ctx->pc = 0x23ECACu;
    // 0x23ecac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23ecacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ecb0: 0xc0af9de  jal         func_2BE778
    ctx->pc = 0x23ECB0u;
    SET_GPR_U32(ctx, 31, 0x23ECB8u);
    ctx->pc = 0x23ECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECB0u;
    // 0x23ecb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE778u, 0x23ECB0u, 0x23ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECB8u;
label_23ecb8:
    // 0x23ecb8: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23ecbc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x23ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x23ecc0: 0x2f41021  addu        $v0, $s7, $s4
    ctx->pc = 0x23ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x23ecc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23ecc8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23ecc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23eccc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23ecd0: 0xc79587d4  lwc1        $f21, -0x782C($gp)
    ctx->pc = 0x23ecd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23ecd4: 0x2f140  sll         $fp, $v0, 5
    ctx->pc = 0x23ecd4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x23ecd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23ecd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ecdc: 0x2492b598  addiu       $s2, $a0, -0x4A68
    ctx->pc = 0x23ecdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948248));
    // 0x23ece0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x23ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x23ece4: 0x0  nop
    ctx->pc = 0x23ece4u;
    // NOP
label_23ece8:
    // 0x23ece8: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x23ece8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23ecec: 0x2442b5f8  addiu       $v0, $v0, -0x4A08
    ctx->pc = 0x23ececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948344));
    // 0x23ecf0: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x23ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23ecf4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ecf8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x23ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23ecfc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23ecfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23ed00: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x23ED00u;
    {
        const bool branch_taken_0x23ed00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED00u;
        // 0x23ed04: 0x2122821  addu        $a1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed00) {
            ctx->pc = 0x23EDFCu;
            goto label_23edfc;
        }
    }
    ctx->pc = 0x23ED08u;
    // 0x23ed08: 0x86a40012  lh          $a0, 0x12($s5)
    ctx->pc = 0x23ed08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x23ed0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23ed0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ed10: 0xc0af9fe  jal         func_2BE7F8
    ctx->pc = 0x23ED10u;
    SET_GPR_U32(ctx, 31, 0x23ED18u);
    ctx->pc = 0x23ED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED10u;
    // 0x23ed14: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7F8u, 0x23ED10u, 0x23ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED18u;
label_23ed18:
    // 0x23ed18: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x23ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x23ed1c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x23ed1cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ed20: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x23ed24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23ed28: 0xc78487d8  lwc1        $f4, -0x7828($gp)
    ctx->pc = 0x23ed28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23ed2c: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x23ed2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x23ed30: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x23ed30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x23ed34: 0xc78387dc  lwc1        $f3, -0x7824($gp)
    ctx->pc = 0x23ed34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23ed38: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x23ed38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ed3c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x23ed3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23ed40: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x23ed40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23ed44: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x23ed44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ed48: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x23ed48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23ed4c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x23ed4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23ed50: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x23ed50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23ed54: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x23ed54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23ed58: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x23ed58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23ed5c: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x23ed5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ed60: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x23ed60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x23ed64: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x23ed64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ed68: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x23ED68u;
    {
        const bool branch_taken_0x23ed68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ed68) {
            ctx->pc = 0x23ED78u;
            goto label_23ed78;
        }
    }
    ctx->pc = 0x23ED70u;
    // 0x23ed70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23ED70u;
    {
        const bool branch_taken_0x23ed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED70u;
        // 0x23ed74: 0x46150001  sub.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed70) {
            ctx->pc = 0x23ED84u;
            goto label_23ed84;
        }
    }
    ctx->pc = 0x23ED78u;
label_23ed78:
    // 0x23ed78: 0x461a0034  c.lt.s      $f0, $f26
    ctx->pc = 0x23ed78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ed7c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x23ED7Cu;
    {
        const bool branch_taken_0x23ed7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ed7c) {
            ctx->pc = 0x23ED80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ED7Cu;
            // 0x23ed80: 0x46150000  add.s       $f0, $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ED84u;
            goto label_23ed84;
        }
    }
    ctx->pc = 0x23ED84u;
label_23ed84:
    // 0x23ed84: 0xc08f6b6  jal         func_23DAD8
    ctx->pc = 0x23ED84u;
    SET_GPR_U32(ctx, 31, 0x23ED8Cu);
    ctx->pc = 0x23ED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED84u;
    // 0x23ed88: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DAD8u, 0x23ED84u, 0x23ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED8Cu;
label_23ed8c:
    // 0x23ed8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23ED8Cu;
    {
        const bool branch_taken_0x23ed8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED8Cu;
        // 0x23ed90: 0x3c040047  lui         $a0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed8c) {
            ctx->pc = 0x23EDA8u;
            goto label_23eda8;
        }
    }
    ctx->pc = 0x23ED94u;
    // 0x23ed94: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x23ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x23ed98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23ed98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ed9c: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x23ED9Cu;
    SET_GPR_U32(ctx, 31, 0x23EDA4u);
    ctx->pc = 0x23EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED9Cu;
    // 0x23eda0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x23ED9Cu, 0x23EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDA4u;
label_23eda4:
    // 0x23eda4: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23eda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_23eda8:
    // 0x23eda8: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x23eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x23edac: 0x2484b5b0  addiu       $a0, $a0, -0x4A50
    ctx->pc = 0x23edacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948272));
    // 0x23edb0: 0x2446e0e0  addiu       $a2, $v0, -0x1F20
    ctx->pc = 0x23edb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959328));
    // 0x23edb4: 0x2043821  addu        $a3, $s0, $a0
    ctx->pc = 0x23edb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x23edb8: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x23edb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x23edbc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x23edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23edc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23edc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23edc4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23edc8: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x23edc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23edcc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x23edccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23edd0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x23edd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x23edd4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23edd8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x23edd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x23eddc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x23eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x23ede0: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x23ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x23ede4: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x23ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x23ede8: 0x2673821  addu        $a3, $s3, $a3
    ctx->pc = 0x23ede8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x23edec: 0x24630af0  addiu       $v1, $v1, 0xAF0
    ctx->pc = 0x23edecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2800));
    // 0x23edf0: 0x24e70070  addiu       $a3, $a3, 0x70
    ctx->pc = 0x23edf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x23edf4: 0xc08f6fa  jal         func_23DBE8
    ctx->pc = 0x23EDF4u;
    SET_GPR_U32(ctx, 31, 0x23EDFCu);
    ctx->pc = 0x23EDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDF4u;
    // 0x23edf8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DBE8u, 0x23EDF4u, 0x23EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDFCu;
label_23edfc:
    // 0x23edfc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23edfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23ee00: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x23ee00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23ee04: 0x5440ffb8  bnel        $v0, $zero, . + 4 + (-0x48 << 2)
    ctx->pc = 0x23EE04u;
    {
        const bool branch_taken_0x23ee04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ee04) {
            ctx->pc = 0x23EE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EE04u;
            // 0x23ee08: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ECE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ece8;
        }
    }
    ctx->pc = 0x23EE0Cu;
    // 0x23ee0c: 0xc08f6b6  jal         func_23DAD8
    ctx->pc = 0x23EE0Cu;
    SET_GPR_U32(ctx, 31, 0x23EE14u);
    ctx->pc = 0x23EE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE0Cu;
    // 0x23ee10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DAD8u, 0x23EE0Cu, 0x23EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE14u;
label_23ee14:
    // 0x23ee14: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23ee14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23ee18: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23ee18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x23ee1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23ee1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23ee20: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x23ee20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x23ee24: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x23ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x23ee28: 0xc79587e0  lwc1        $f21, -0x7820($gp)
    ctx->pc = 0x23ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23ee2c: 0x14f0c0  sll         $fp, $s4, 3
    ctx->pc = 0x23ee2cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x23ee30: 0xc79887e4  lwc1        $f24, -0x781C($gp)
    ctx->pc = 0x23ee30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x23ee34: 0xc79787e8  lwc1        $f23, -0x7818($gp)
    ctx->pc = 0x23ee34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x23ee38: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23ee3c: 0x0  nop
    ctx->pc = 0x23ee3cu;
    // NOP
label_23ee40:
    // 0x23ee40: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x23ee40u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23ee44: 0x2484b5f8  addiu       $a0, $a0, -0x4A08
    ctx->pc = 0x23ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948344));
    // 0x23ee48: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x23ee48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23ee4c: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x23ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x23ee50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ee54: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x23ee54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x23ee58: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x23EE58u;
    {
        const bool branch_taken_0x23ee58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE58u;
        // 0x23ee5c: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee58) {
            ctx->pc = 0x23F140u;
            goto label_23f140;
        }
    }
    ctx->pc = 0x23EE60u;
    // 0x23ee60: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x23ee60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x23ee64: 0x24430ae0  addiu       $v1, $v0, 0xAE0
    ctx->pc = 0x23ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2784));
    // 0x23ee68: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x23ee68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23ee6c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x23ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x23ee70: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x23ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x23ee74: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23ee78: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x23ee78u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23ee7c: 0x1810  mfhi        $v1
    ctx->pc = 0x23ee7cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x23ee80: 0x1460009c  bnez        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x23EE80u;
    {
        const bool branch_taken_0x23ee80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE80u;
        // 0x23ee84: 0x3d41023  subu        $v0, $fp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee80) {
            ctx->pc = 0x23F0F4u;
            goto label_23f0f4;
        }
    }
    ctx->pc = 0x23EE88u;
    // 0x23ee88: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x23ee88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23ee8c: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x23EE8Cu;
    {
        const bool branch_taken_0x23ee8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE8Cu;
        // 0x23ee90: 0x3d41023  subu        $v0, $fp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee8c) {
            ctx->pc = 0x23F0F4u;
            goto label_23f0f4;
        }
    }
    ctx->pc = 0x23EE94u;
    // 0x23ee94: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x23ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x23ee98: 0xc79987ec  lwc1        $f25, -0x7814($gp)
    ctx->pc = 0x23ee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x23ee9c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23eea0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23eea4: 0x2792c990  addiu       $s2, $gp, -0x3670
    ctx->pc = 0x23eea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953360));
    // 0x23eea8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x23EEA8u;
    SET_GPR_U32(ctx, 31, 0x23EEB0u);
    ctx->pc = 0x23EEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEA8u;
    // 0x23eeac: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x23EEA8u, 0x23EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEB0u;
label_23eeb0:
    // 0x23eeb0: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23eeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23eeb4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x23eeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x23eeb8: 0x2484b5e0  addiu       $a0, $a0, -0x4A20
    ctx->pc = 0x23eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948320));
    // 0x23eebc: 0x24a5b5b0  addiu       $a1, $a1, -0x4A50
    ctx->pc = 0x23eebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948272));
    // 0x23eec0: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x23eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x23eec4: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x23eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23eec8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x23eec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23eecc: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x23eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x23eed0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x23eed0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23eed4: 0x2463b598  addiu       $v1, $v1, -0x4A68
    ctx->pc = 0x23eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948248));
    // 0x23eed8: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x23eed8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23eedc: 0x2034021  addu        $t0, $s0, $v1
    ctx->pc = 0x23eedcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x23eee0: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x23eee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x23eee4: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x23eee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x23eee8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x23eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x23eeec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23eeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23eef0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x23eef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x23eef4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23eef8: 0xa6450000  sh          $a1, 0x0($s2)
    ctx->pc = 0x23eef8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x23eefc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x23eefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x23ef00: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x23ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x23ef04: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x23ef04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x23ef08: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x23ef08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x23ef0c: 0xc4c10074  lwc1        $f1, 0x74($a2)
    ctx->pc = 0x23ef0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ef10: 0xc4a00074  lwc1        $f0, 0x74($a1)
    ctx->pc = 0x23ef10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ef14: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x23ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x23ef18: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x23ef18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23ef1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23ef1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef20: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x23ef20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23ef24: 0x2442b5c8  addiu       $v0, $v0, -0x4A38
    ctx->pc = 0x23ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948296));
    // 0x23ef28: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x23ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23ef2c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x23ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23ef30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23ef34: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x23ef34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23ef38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23ef3c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x23ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23ef40: 0x46141032  c.eq.s      $f2, $f20
    ctx->pc = 0x23ef40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ef44: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x23ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x23ef48: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x23EF48u;
    {
        const bool branch_taken_0x23ef48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF48u;
        // 0x23ef4c: 0xc4430008  lwc1        $f3, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef48) {
            ctx->pc = 0x23EFE0u;
            goto label_23efe0;
        }
    }
    ctx->pc = 0x23EF50u;
    // 0x23ef50: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x23ef50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x23ef54: 0xc78187f0  lwc1        $f1, -0x7810($gp)
    ctx->pc = 0x23ef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ef58: 0x0  nop
    ctx->pc = 0x23ef58u;
    // NOP
    // 0x23ef5c: 0x0  nop
    ctx->pc = 0x23ef5cu;
    // NOP
    // 0x23ef60: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x23ef60u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x23ef64: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x23ef64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ef68: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x23EF68u;
    {
        const bool branch_taken_0x23ef68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF68u;
        // 0x23ef6c: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef68) {
            ctx->pc = 0x23EF88u;
            goto label_23ef88;
        }
    }
    ctx->pc = 0x23EF70u;
    // 0x23ef70: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x23ef70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23ef74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23ef78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x23ef78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x23ef7c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x23ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x23ef80: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x23EF80u;
    {
        const bool branch_taken_0x23ef80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF80u;
        // 0x23ef84: 0x78620070  lq          $v0, 0x70($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef80) {
            ctx->pc = 0x23EFE4u;
            goto label_23efe4;
        }
    }
    ctx->pc = 0x23EF88u;
label_23ef88:
    // 0x23ef88: 0xc78087f4  lwc1        $f0, -0x780C($gp)
    ctx->pc = 0x23ef88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ef8c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x23ef8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ef90: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
    ctx->pc = 0x23EF90u;
    {
        const bool branch_taken_0x23ef90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ef90) {
            ctx->pc = 0x23EF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EF90u;
            // 0x23ef94: 0x78a20070  lq          $v0, 0x70($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EFD8u;
            goto label_23efd8;
        }
    }
    ctx->pc = 0x23EF98u;
    // 0x23ef98: 0x24a20070  addiu       $v0, $a1, 0x70
    ctx->pc = 0x23ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x23ef9c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x23ef9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23efa0: 0x24c40070  addiu       $a0, $a2, 0x70
    ctx->pc = 0x23efa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x23efa4: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x23efa4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x23efa8: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x23efa8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23efac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x23efacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23efb0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23efb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23efb4: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x23efb4u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23efb8: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x23efb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x23efbc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23efbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23efc0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23efc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23efc4: 0x4be181bc  vmulax.xyzw $ACC, $vf16, $vf1x
    ctx->pc = 0x23efc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23efc8: 0x4be28c08  vmaddx.xyzw $vf16, $vf17, $vf2x
    ctx->pc = 0x23efc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23efcc: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x23efccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23efd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23EFD0u;
    {
        const bool branch_taken_0x23efd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFD0u;
        // 0x23efd4: 0xe4e30004  swc1        $f3, 0x4($a3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efd0) {
            ctx->pc = 0x23EFECu;
            goto label_23efec;
        }
    }
    ctx->pc = 0x23EFD8u;
label_23efd8:
    // 0x23efd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23EFD8u;
    {
        const bool branch_taken_0x23efd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFD8u;
        // 0x23efdc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efd8) {
            ctx->pc = 0x23EFE4u;
            goto label_23efe4;
        }
    }
    ctx->pc = 0x23EFE0u;
label_23efe0:
    // 0x23efe0: 0x78a20070  lq          $v0, 0x70($a1)
    ctx->pc = 0x23efe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 112)));
label_23efe4:
    // 0x23efe4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x23efe4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x23efe8: 0xe4e30004  swc1        $f3, 0x4($a3)
    ctx->pc = 0x23efe8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_23efec:
    // 0x23efec: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x23efecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x23eff0: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x23EFF0u;
    {
        const bool branch_taken_0x23eff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFF0u;
        // 0x23eff4: 0x3d41023  subu        $v0, $fp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eff0) {
            ctx->pc = 0x23F0F4u;
            goto label_23f0f4;
        }
    }
    ctx->pc = 0x23EFF8u;
    // 0x23eff8: 0x1500003f  bnez        $t0, . + 4 + (0x3F << 2)
    ctx->pc = 0x23EFF8u;
    {
        const bool branch_taken_0x23eff8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFF8u;
        // 0x23effc: 0x3c040016  lui         $a0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eff8) {
            ctx->pc = 0x23F0F8u;
            goto label_23f0f8;
        }
    }
    ctx->pc = 0x23F000u;
    // 0x23f000: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x23f000u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23f004: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x23f004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x23f008: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x23f008u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23f00c: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x23f00cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x23f010: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x23f010u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23f014: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x23f014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x23f018: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x23f018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23f01c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F01Cu;
    {
        const bool branch_taken_0x23f01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F01Cu;
        // 0x23f020: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f01c) {
            ctx->pc = 0x23F030u;
            goto label_23f030;
        }
    }
    ctx->pc = 0x23F024u;
    // 0x23f024: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x23f024u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f028: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23F028u;
    {
        const bool branch_taken_0x23f028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F028u;
        // 0x23f02c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f028) {
            ctx->pc = 0x23F040u;
            goto label_23f040;
        }
    }
    ctx->pc = 0x23F030u;
label_23f030:
    // 0x23f030: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23f030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23f034: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x23f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23f038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f03c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23f03cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23f040:
    // 0x23f040: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x23F040u;
    SET_GPR_U32(ctx, 31, 0x23F048u);
    ctx->pc = 0x23F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F040u;
    // 0x23f044: 0x46180302  mul.s       $f12, $f0, $f24 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x23F040u, 0x23F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F048u;
label_23f048:
    // 0x23f048: 0xc78187f8  lwc1        $f1, -0x7808($gp)
    ctx->pc = 0x23f048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f04c: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x23f04cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x23f050: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23f050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23f054: 0x4600c801  sub.s       $f0, $f25, $f0
    ctx->pc = 0x23f054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[0]);
    // 0x23f058: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x23f058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f05c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x23F05Cu;
    {
        const bool branch_taken_0x23f05c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f05c) {
            ctx->pc = 0x23F070u;
            goto label_23f070;
        }
    }
    ctx->pc = 0x23F064u;
    // 0x23f064: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23F064u;
    {
        const bool branch_taken_0x23f064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F064u;
        // 0x23f068: 0x46150001  sub.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f064) {
            ctx->pc = 0x23F07Cu;
            goto label_23f07c;
        }
    }
    ctx->pc = 0x23F06Cu;
    // 0x23f06c: 0x0  nop
    ctx->pc = 0x23f06cu;
    // NOP
label_23f070:
    // 0x23f070: 0x461a0034  c.lt.s      $f0, $f26
    ctx->pc = 0x23f070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f074: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x23F074u;
    {
        const bool branch_taken_0x23f074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f074) {
            ctx->pc = 0x23F078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F074u;
            // 0x23f078: 0x46150000  add.s       $f0, $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F07Cu;
            goto label_23f07c;
        }
    }
    ctx->pc = 0x23F07Cu;
label_23f07c:
    // 0x23f07c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x23f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23f080: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23f080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f084: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x23f084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f088: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x23F088u;
    SET_GPR_U32(ctx, 31, 0x23F090u);
    ctx->pc = 0x23F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F088u;
    // 0x23f08c: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x23F088u, 0x23F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F090u;
label_23f090:
    // 0x23f090: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x23F090u;
    SET_GPR_U32(ctx, 31, 0x23F098u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x23F090u, 0x23F098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F098u;
label_23f098:
    // 0x23f098: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23f098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23f09c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23f09cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23f0a0: 0xc78087fc  lwc1        $f0, -0x7804($gp)
    ctx->pc = 0x23f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f0a4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x23f0a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x23f0a8: 0xc7828800  lwc1        $f2, -0x7800($gp)
    ctx->pc = 0x23f0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f0ac: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x23f0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f0b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x23f0b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x23f0b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23f0b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23f0b8: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x23f0b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f0bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x23F0BCu;
    {
        const bool branch_taken_0x23f0bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f0bc) {
            ctx->pc = 0x23F0D0u;
            goto label_23f0d0;
        }
    }
    ctx->pc = 0x23F0C4u;
    // 0x23f0c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23F0C4u;
    {
        const bool branch_taken_0x23f0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0C4u;
        // 0x23f0c8: 0x46150001  sub.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0c4) {
            ctx->pc = 0x23F0DCu;
            goto label_23f0dc;
        }
    }
    ctx->pc = 0x23F0CCu;
    // 0x23f0cc: 0x0  nop
    ctx->pc = 0x23f0ccu;
    // NOP
label_23f0d0:
    // 0x23f0d0: 0x461a0034  c.lt.s      $f0, $f26
    ctx->pc = 0x23f0d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f0d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x23F0D4u;
    {
        const bool branch_taken_0x23f0d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f0d4) {
            ctx->pc = 0x23F0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F0D4u;
            // 0x23f0d8: 0x46150000  add.s       $f0, $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F0DCu;
            goto label_23f0dc;
        }
    }
    ctx->pc = 0x23F0DCu;
label_23f0dc:
    // 0x23f0dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x23f0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23f0e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23f0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x23f0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f0e8: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x23F0E8u;
    SET_GPR_U32(ctx, 31, 0x23F0F0u);
    ctx->pc = 0x23F0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F0E8u;
    // 0x23f0ec: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x23F0E8u, 0x23F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0F0u;
label_23f0f0:
    // 0x23f0f0: 0x3d41023  subu        $v0, $fp, $s4
    ctx->pc = 0x23f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
label_23f0f4:
    // 0x23f0f4: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x23f0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
label_23f0f8:
    // 0x23f0f8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23f0fc: 0x24841030  addiu       $a0, $a0, 0x1030
    ctx->pc = 0x23f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4144));
    // 0x23f100: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23f100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23f104: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23f104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23f108: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x23f108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f10c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x23f10cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f110: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x23F110u;
    {
        const bool branch_taken_0x23f110 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F110u;
        // 0x23f114: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f110) {
            ctx->pc = 0x23F120u;
            goto label_23f120;
        }
    }
    ctx->pc = 0x23F118u;
    // 0x23f118: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23F118u;
    {
        const bool branch_taken_0x23f118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F118u;
        // 0x23f11c: 0x46160000  add.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f118) {
            ctx->pc = 0x23F15Cu;
            goto label_23f15c;
        }
    }
    ctx->pc = 0x23F120u;
label_23f120:
    // 0x23f120: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23f120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f124: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23f124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f128: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23f128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f12c: 0xc08f94c  jal         func_23E530
    ctx->pc = 0x23F12Cu;
    SET_GPR_U32(ctx, 31, 0x23F134u);
    ctx->pc = 0x23F130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F12Cu;
    // 0x23f130: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E530u, 0x23F12Cu, 0x23F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F134u;
label_23f134:
    // 0x23f134: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23F134u;
    {
        const bool branch_taken_0x23f134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F134u;
        // 0x23f138: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f134) {
            ctx->pc = 0x23F164u;
            goto label_23f164;
        }
    }
    ctx->pc = 0x23F13Cu;
    // 0x23f13c: 0x0  nop
    ctx->pc = 0x23f13cu;
    // NOP
label_23f140:
    // 0x23f140: 0x3d41023  subu        $v0, $fp, $s4
    ctx->pc = 0x23f140u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x23f144: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x23f144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x23f148: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23f148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23f14c: 0xc7808804  lwc1        $f0, -0x77FC($gp)
    ctx->pc = 0x23f14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23f150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23f154: 0x24a51030  addiu       $a1, $a1, 0x1030
    ctx->pc = 0x23f154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4144));
    // 0x23f158: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23f158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23f15c:
    // 0x23f15c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x23f15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x23f160: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23f160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23f164:
    // 0x23f164: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x23f164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x23f168: 0x1440ff35  bnez        $v0, . + 4 + (-0xCB << 2)
    ctx->pc = 0x23F168u;
    {
        const bool branch_taken_0x23f168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F168u;
        // 0x23f16c: 0x3c040047  lui         $a0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f168) {
            ctx->pc = 0x23EE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ee40;
        }
    }
    ctx->pc = 0x23F170u;
    // 0x23f170: 0xc08f730  jal         func_23DCC0
    ctx->pc = 0x23F170u;
    SET_GPR_U32(ctx, 31, 0x23F178u);
    ctx->pc = 0x23F174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F170u;
    // 0x23f174: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DCC0u, 0x23F170u, 0x23F178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F178u;
label_23f178:
    // 0x23f178: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x23f178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23f17c: 0x1440fdd8  bnez        $v0, . + 4 + (-0x228 << 2)
    ctx->pc = 0x23F17Cu;
    {
        const bool branch_taken_0x23f17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F17Cu;
        // 0x23f180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f17c) {
            ctx->pc = 0x23E8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e8e0;
        }
    }
    ctx->pc = 0x23F184u;
    // 0x23f184: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23f184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23f188: 0x24440ae0  addiu       $a0, $v0, 0xAE0
    ctx->pc = 0x23f188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2784));
    // 0x23f18c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x23f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x23f190: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x23f190u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x160AE0u));
    // 0x23f194: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23f194u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x160AECu));
    // 0x23f198: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23f19c: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F19Cu;
    {
        const bool branch_taken_0x23f19c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x23F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F19Cu;
        // 0x23f1a0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f19c) {
            ctx->pc = 0x23F1ACu;
            goto label_23f1ac;
        }
    }
    ctx->pc = 0x23F1A4u;
    // 0x23f1a4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x23f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x23f1a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x23f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_23f1ac:
    // 0x23f1ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23f1b0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F1B0u;
    {
        const bool branch_taken_0x23f1b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1B0u;
        // 0x23f1b4: 0x24830004  addiu       $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f1b0) {
            ctx->pc = 0x23F1C0u;
            goto label_23f1c0;
        }
    }
    ctx->pc = 0x23F1B8u;
    // 0x23f1b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23f1bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23f1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23f1c0:
    // 0x23f1c0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23f1c4: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F1C4u;
    {
        const bool branch_taken_0x23f1c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1C4u;
        // 0x23f1c8: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f1c4) {
            ctx->pc = 0x23F1D4u;
            goto label_23f1d4;
        }
    }
    ctx->pc = 0x23F1CCu;
    // 0x23f1cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23f1d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23f1d4:
    // 0x23f1d4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x23f1d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23f1d8:
    // 0x23f1d8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x23f1d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f1dc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x23f1dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23f1e0: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x23f1e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23f1e4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x23f1e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f1e8: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x23f1e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23f1ec: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x23f1ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23f1f0: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x23f1f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23f1f4: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x23f1f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23f1f8: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x23f1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x23f1fc: 0xc7ba00e0  lwc1        $f26, 0xE0($sp)
    ctx->pc = 0x23f1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x23f200: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x23f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x23f204: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x23f204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x23f208: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x23f208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x23f20c: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x23f20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x23f210: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x23f210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23f214: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x23f214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f218: 0x3e00008  jr          $ra
    ctx->pc = 0x23F218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F218u;
        // 0x23f21c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F220u;
}
