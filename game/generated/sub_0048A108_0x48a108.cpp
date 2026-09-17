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

// Function: sub_0048A108
// Address: 0x48a108 - 0x48adf8
void sub_0048A108_0x48a108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048A108_0x48a108");
#endif

    switch (ctx->pc) {
        case 0x48a130u: goto label_48a130;
        case 0x48a138u: goto label_48a138;
        case 0x48a234u: goto label_48a234;
        case 0x48a240u: goto label_48a240;
        case 0x48a2f8u: goto label_48a2f8;
        case 0x48a694u: goto label_48a694;
        case 0x48aa30u: goto label_48aa30;
        case 0x48aa44u: goto label_48aa44;
        case 0x48ab14u: goto label_48ab14;
        case 0x48ab64u: goto label_48ab64;
        case 0x48abb4u: goto label_48abb4;
        case 0x48ac04u: goto label_48ac04;
        default: break;
    }

    ctx->pc = 0x48a108u;

    // 0x48a108: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48a108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48a10c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48a10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48a110: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48a110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a114: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x48a114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x48a118: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48a118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48a11c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48a11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x48a120: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x48a120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x48a124: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x48a124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x48a128: 0xc13e4f2  jal         func_4F93C8
    ctx->pc = 0x48A128u;
    SET_GPR_U32(ctx, 31, 0x48A130u);
    ctx->pc = 0x48A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A128u;
    // 0x48a12c: 0x3c140073  lui         $s4, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93C8u, 0x48A128u, 0x48A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A130u;
label_48a130:
    // 0x48a130: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x48A130u;
    SET_GPR_U32(ctx, 31, 0x48A138u);
    ctx->pc = 0x48A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A130u;
    // 0x48a134: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x48A130u, 0x48A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A138u;
label_48a138:
    // 0x48a138: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48a138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a13c: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x48a13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x48a140: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x48A140u;
    {
        const bool branch_taken_0x48a140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a140) {
            ctx->pc = 0x48A144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A140u;
            // 0x48a144: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A21Cu;
            goto label_48a21c;
        }
    }
    ctx->pc = 0x48A148u;
    // 0x48a148: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x48a148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x48a14c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48a150: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48a150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48a154: 0x8c639bb0  lw          $v1, -0x6450($v1)
    ctx->pc = 0x48a154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941616)));
    // 0x48a158: 0x600008  jr          $v1
    ctx->pc = 0x48A158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48A160u: goto label_48a160;
            case 0x48A178u: goto label_48a178;
            case 0x48A190u: goto label_48a190;
            case 0x48A1A8u: goto label_48a1a8;
            case 0x48A1C0u: goto label_48a1c0;
            case 0x48A1D8u: goto label_48a1d8;
            case 0x48A1F0u: goto label_48a1f0;
            case 0x48A208u: goto label_48a208;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A158u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48A160u;
label_48a160:
    // 0x48a160: 0x2683d600  addiu       $v1, $s4, -0x2A00
    ctx->pc = 0x48a160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a164: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x48a164u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x48a168: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x48a168u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x48a16c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x48A16Cu;
    {
        const bool branch_taken_0x48a16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A16Cu;
        // 0x48a170: 0xa4620010  sh          $v0, 0x10($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a16c) {
            ctx->pc = 0x48A218u;
            goto label_48a218;
        }
    }
    ctx->pc = 0x48A174u;
    // 0x48a174: 0x0  nop
    ctx->pc = 0x48a174u;
    // NOP
label_48a178:
    // 0x48a178: 0x2683d600  addiu       $v1, $s4, -0x2A00
    ctx->pc = 0x48a178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a17c: 0x94620022  lhu         $v0, 0x22($v1)
    ctx->pc = 0x48a17cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x48a180: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x48a180u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x48a184: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x48A184u;
    {
        const bool branch_taken_0x48a184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A184u;
        // 0x48a188: 0xa4620012  sh          $v0, 0x12($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a184) {
            ctx->pc = 0x48A218u;
            goto label_48a218;
        }
    }
    ctx->pc = 0x48A18Cu;
    // 0x48a18c: 0x0  nop
    ctx->pc = 0x48a18cu;
    // NOP
label_48a190:
    // 0x48a190: 0x2683d600  addiu       $v1, $s4, -0x2A00
    ctx->pc = 0x48a190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a194: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x48a194u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x48a198: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x48a198u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x48a19c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x48A19Cu;
    {
        const bool branch_taken_0x48a19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A19Cu;
        // 0x48a1a0: 0xa4620014  sh          $v0, 0x14($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a19c) {
            ctx->pc = 0x48A218u;
            goto label_48a218;
        }
    }
    ctx->pc = 0x48A1A4u;
    // 0x48a1a4: 0x0  nop
    ctx->pc = 0x48a1a4u;
    // NOP
label_48a1a8:
    // 0x48a1a8: 0x2683d600  addiu       $v1, $s4, -0x2A00
    ctx->pc = 0x48a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a1ac: 0x94620026  lhu         $v0, 0x26($v1)
    ctx->pc = 0x48a1acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x48a1b0: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x48a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x48a1b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x48A1B4u;
    {
        const bool branch_taken_0x48a1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A1B4u;
        // 0x48a1b8: 0xa4620016  sh          $v0, 0x16($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a1b4) {
            ctx->pc = 0x48A218u;
            goto label_48a218;
        }
    }
    ctx->pc = 0x48A1BCu;
    // 0x48a1bc: 0x0  nop
    ctx->pc = 0x48a1bcu;
    // NOP
label_48a1c0:
    // 0x48a1c0: 0x2683d600  addiu       $v1, $s4, -0x2A00
    ctx->pc = 0x48a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a1c4: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x48a1c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x48a1c8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x48a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x48a1cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x48A1CCu;
    {
        const bool branch_taken_0x48a1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A1CCu;
        // 0x48a1d0: 0xa4620018  sh          $v0, 0x18($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a1cc) {
            ctx->pc = 0x48A218u;
            goto label_48a218;
        }
    }
    ctx->pc = 0x48A1D4u;
    // 0x48a1d4: 0x0  nop
    ctx->pc = 0x48a1d4u;
    // NOP
label_48a1d8:
    // 0x48a1d8: 0x2683d600  addiu       $v1, $s4, -0x2A00
    ctx->pc = 0x48a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a1dc: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x48a1dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x48a1e0: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x48a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x48a1e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x48A1E4u;
    {
        const bool branch_taken_0x48a1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A1E4u;
        // 0x48a1e8: 0xa462001a  sh          $v0, 0x1A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a1e4) {
            ctx->pc = 0x48A218u;
            goto label_48a218;
        }
    }
    ctx->pc = 0x48A1ECu;
    // 0x48a1ec: 0x0  nop
    ctx->pc = 0x48a1ecu;
    // NOP
label_48a1f0:
    // 0x48a1f0: 0x2683d600  addiu       $v1, $s4, -0x2A00
    ctx->pc = 0x48a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a1f4: 0x9462002c  lhu         $v0, 0x2C($v1)
    ctx->pc = 0x48a1f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x48a1f8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x48a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x48a1fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48A1FCu;
    {
        const bool branch_taken_0x48a1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A1FCu;
        // 0x48a200: 0xa462001c  sh          $v0, 0x1C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a1fc) {
            ctx->pc = 0x48A218u;
            goto label_48a218;
        }
    }
    ctx->pc = 0x48A204u;
    // 0x48a204: 0x0  nop
    ctx->pc = 0x48a204u;
    // NOP
label_48a208:
    // 0x48a208: 0x2683d600  addiu       $v1, $s4, -0x2A00
    ctx->pc = 0x48a208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a20c: 0x9462002e  lhu         $v0, 0x2E($v1)
    ctx->pc = 0x48a20cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x48a210: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x48a210u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x48a214: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x48a214u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_48a218:
    // 0x48a218: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x48a218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_48a21c:
    // 0x48a21c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x48a21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x48a220: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x48A220u;
    {
        const bool branch_taken_0x48a220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48a220) {
            ctx->pc = 0x48A130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48a130;
        }
    }
    ctx->pc = 0x48A228u;
    // 0x48a228: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x48a228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x48a22c: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x48A22Cu;
    SET_GPR_U32(ctx, 31, 0x48A234u);
    ctx->pc = 0x48A230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A22Cu;
    // 0x48a230: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x48A22Cu, 0x48A234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A234u;
label_48a234:
    // 0x48a234: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48a234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a238: 0x2051007  srav        $v0, $a1, $s0
    ctx->pc = 0x48a238u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x48a23c: 0x0  nop
    ctx->pc = 0x48a23cu;
    // NOP
label_48a240:
    // 0x48a240: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x48a240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48a244: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x48a244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x48a248: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x48a248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x48a24c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x48A24Cu;
    {
        const bool branch_taken_0x48a24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A24Cu;
        // 0x48a250: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a24c) {
            ctx->pc = 0x48A2E0u;
            goto label_48a2e0;
        }
    }
    ctx->pc = 0x48A254u;
    // 0x48a254: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x48a254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x48a258: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48a258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48a25c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48a260: 0x8c639bd0  lw          $v1, -0x6430($v1)
    ctx->pc = 0x48a260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941648)));
    // 0x48a264: 0x600008  jr          $v1
    ctx->pc = 0x48A264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48A270u: goto label_48a270;
            case 0x48A278u: goto label_48a278;
            case 0x48A288u: goto label_48a288;
            case 0x48A298u: goto label_48a298;
            case 0x48A2A8u: goto label_48a2a8;
            case 0x48A2B8u: goto label_48a2b8;
            case 0x48A2C8u: goto label_48a2c8;
            case 0x48A2D8u: goto label_48a2d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A264u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48A26Cu;
    // 0x48a26c: 0x0  nop
    ctx->pc = 0x48a26cu;
    // NOP
label_48a270:
    // 0x48a270: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x48A270u;
    {
        const bool branch_taken_0x48a270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A270u;
        // 0x48a274: 0xa684d600  sh          $a0, -0x2A00($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 4294956544), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a270) {
            ctx->pc = 0x48A2E0u;
            goto label_48a2e0;
        }
    }
    ctx->pc = 0x48A278u;
label_48a278:
    // 0x48a278: 0x2682d600  addiu       $v0, $s4, -0x2A00
    ctx->pc = 0x48a278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a27c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x48A27Cu;
    {
        const bool branch_taken_0x48a27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A27Cu;
        // 0x48a280: 0xa4440002  sh          $a0, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a27c) {
            ctx->pc = 0x48A2E0u;
            goto label_48a2e0;
        }
    }
    ctx->pc = 0x48A284u;
    // 0x48a284: 0x0  nop
    ctx->pc = 0x48a284u;
    // NOP
label_48a288:
    // 0x48a288: 0x2682d600  addiu       $v0, $s4, -0x2A00
    ctx->pc = 0x48a288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a28c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x48A28Cu;
    {
        const bool branch_taken_0x48a28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A28Cu;
        // 0x48a290: 0xa4440004  sh          $a0, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a28c) {
            ctx->pc = 0x48A2E0u;
            goto label_48a2e0;
        }
    }
    ctx->pc = 0x48A294u;
    // 0x48a294: 0x0  nop
    ctx->pc = 0x48a294u;
    // NOP
label_48a298:
    // 0x48a298: 0x2682d600  addiu       $v0, $s4, -0x2A00
    ctx->pc = 0x48a298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a29c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x48A29Cu;
    {
        const bool branch_taken_0x48a29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A29Cu;
        // 0x48a2a0: 0xa4440006  sh          $a0, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a29c) {
            ctx->pc = 0x48A2E0u;
            goto label_48a2e0;
        }
    }
    ctx->pc = 0x48A2A4u;
    // 0x48a2a4: 0x0  nop
    ctx->pc = 0x48a2a4u;
    // NOP
label_48a2a8:
    // 0x48a2a8: 0x2682d600  addiu       $v0, $s4, -0x2A00
    ctx->pc = 0x48a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a2ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x48A2ACu;
    {
        const bool branch_taken_0x48a2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A2ACu;
        // 0x48a2b0: 0xa4440008  sh          $a0, 0x8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a2ac) {
            ctx->pc = 0x48A2E0u;
            goto label_48a2e0;
        }
    }
    ctx->pc = 0x48A2B4u;
    // 0x48a2b4: 0x0  nop
    ctx->pc = 0x48a2b4u;
    // NOP
label_48a2b8:
    // 0x48a2b8: 0x2682d600  addiu       $v0, $s4, -0x2A00
    ctx->pc = 0x48a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a2bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48A2BCu;
    {
        const bool branch_taken_0x48a2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A2BCu;
        // 0x48a2c0: 0xa444000a  sh          $a0, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a2bc) {
            ctx->pc = 0x48A2E0u;
            goto label_48a2e0;
        }
    }
    ctx->pc = 0x48A2C4u;
    // 0x48a2c4: 0x0  nop
    ctx->pc = 0x48a2c4u;
    // NOP
label_48a2c8:
    // 0x48a2c8: 0x2682d600  addiu       $v0, $s4, -0x2A00
    ctx->pc = 0x48a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a2cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48A2CCu;
    {
        const bool branch_taken_0x48a2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A2CCu;
        // 0x48a2d0: 0xa444000c  sh          $a0, 0xC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a2cc) {
            ctx->pc = 0x48A2E0u;
            goto label_48a2e0;
        }
    }
    ctx->pc = 0x48A2D4u;
    // 0x48a2d4: 0x0  nop
    ctx->pc = 0x48a2d4u;
    // NOP
label_48a2d8:
    // 0x48a2d8: 0x2682d600  addiu       $v0, $s4, -0x2A00
    ctx->pc = 0x48a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a2dc: 0xa444000e  sh          $a0, 0xE($v0)
    ctx->pc = 0x48a2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 4));
label_48a2e0:
    // 0x48a2e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x48a2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x48a2e4: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x48a2e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x48a2e8: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x48A2E8u;
    {
        const bool branch_taken_0x48a2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48a2e8) {
            ctx->pc = 0x48A2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A2E8u;
            // 0x48a2ec: 0x2051007  srav        $v0, $a1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48a240;
        }
    }
    ctx->pc = 0x48A2F0u;
    // 0x48a2f0: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x48A2F0u;
    SET_GPR_U32(ctx, 31, 0x48A2F8u);
    ctx->pc = 0x48A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A2F0u;
    // 0x48a2f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x48A2F0u, 0x48A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A2F8u;
label_48a2f8:
    // 0x48a2f8: 0x3663ffff  ori         $v1, $s3, 0xFFFF
    ctx->pc = 0x48a2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48a2fc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x48a2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x48a300: 0x2688d600  addiu       $t0, $s4, -0x2A00
    ctx->pc = 0x48a300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a304: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x48a304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x48a308: 0x2462824  and         $a1, $s2, $a2
    ctx->pc = 0x48a308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x48a30c: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x48a30cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48a310: 0x2507003c  addiu       $a3, $t0, 0x3C
    ctx->pc = 0x48a310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 60));
    // 0x48a314: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x48a314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x48a318: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x48a318u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x48a31c: 0xa29025  or          $s2, $a1, $v0
    ctx->pc = 0x48a31cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x48a320: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x48a320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x48a324: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x48a324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x48a328: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x48a328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a32c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x48a32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x48a330: 0x31d03  sra         $v1, $v1, 20
    ctx->pc = 0x48a330u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 20));
    // 0x48a334: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x48a334u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48a338: 0x3662ffff  ori         $v0, $s3, 0xFFFF
    ctx->pc = 0x48a338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48a33c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x48a33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x48a340: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x48a340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a344: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x48a344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x48a348: 0x439824  and         $s3, $v0, $v1
    ctx->pc = 0x48a348u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48a34c: 0xa512003a  sh          $s2, 0x3A($t0)
    ctx->pc = 0x48a34cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 58), (uint16_t)GPR_U32(ctx, 18));
    // 0x48a350: 0xa49024  and         $s2, $a1, $a0
    ctx->pc = 0x48a350u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x48a354: 0x32630fff  andi        $v1, $s3, 0xFFF
    ctx->pc = 0x48a354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4095);
    // 0x48a358: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x48a358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a35c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x48a35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x48a360: 0x3665ffff  ori         $a1, $s3, 0xFFFF
    ctx->pc = 0x48a360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48a364: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x48a364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x48a368: 0xa39824  and         $s3, $a1, $v1
    ctx->pc = 0x48a368u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x48a36c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x48a36cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x48a370: 0x3642ffff  ori         $v0, $s2, 0xFFFF
    ctx->pc = 0x48a370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a374: 0x449024  and         $s2, $v0, $a0
    ctx->pc = 0x48a374u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x48a378: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x48a378u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x48a37c: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x48a37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48a380: 0x139843  sra         $s3, $s3, 1
    ctx->pc = 0x48a380u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x48a384: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x48a384u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x48a388: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x48a388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x48a38c: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x48a38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a390: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x48a390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x48a394: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x48a394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a398: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x48a398u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48a39c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x48a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x48a3a0: 0x3245000f  andi        $a1, $s2, 0xF
    ctx->pc = 0x48a3a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x48a3a4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x48a3a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x48a3a8: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x48a3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x48a3ac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x48A3ACu;
    {
        const bool branch_taken_0x48a3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A3ACu;
        // 0x48a3b0: 0xa4e40000  sh          $a0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a3ac) {
            ctx->pc = 0x48A3F0u;
            goto label_48a3f0;
        }
    }
    ctx->pc = 0x48A3B4u;
    // 0x48a3b4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x48a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x48a3b8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48a3bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48a3c0: 0x8c639bf0  lw          $v1, -0x6410($v1)
    ctx->pc = 0x48a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941680)));
    // 0x48a3c4: 0x600008  jr          $v1
    ctx->pc = 0x48A3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48A3D0u: goto label_48a3d0;
            case 0x48A3D8u: goto label_48a3d8;
            case 0x48A3E0u: goto label_48a3e0;
            case 0x48A3E8u: goto label_48a3e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A3C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48A3CCu;
    // 0x48a3cc: 0x0  nop
    ctx->pc = 0x48a3ccu;
    // NOP
label_48a3d0:
    // 0x48a3d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48A3D0u;
    {
        const bool branch_taken_0x48a3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A3D0u;
        // 0x48a3d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a3d0) {
            ctx->pc = 0x48A3F4u;
            goto label_48a3f4;
        }
    }
    ctx->pc = 0x48A3D8u;
label_48a3d8:
    // 0x48a3d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48A3D8u;
    {
        const bool branch_taken_0x48a3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A3D8u;
        // 0x48a3dc: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a3d8) {
            ctx->pc = 0x48A3F4u;
            goto label_48a3f4;
        }
    }
    ctx->pc = 0x48A3E0u;
label_48a3e0:
    // 0x48a3e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48A3E0u;
    {
        const bool branch_taken_0x48a3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A3E0u;
        // 0x48a3e4: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a3e0) {
            ctx->pc = 0x48A3F4u;
            goto label_48a3f4;
        }
    }
    ctx->pc = 0x48A3E8u;
label_48a3e8:
    // 0x48a3e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48A3E8u;
    {
        const bool branch_taken_0x48a3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A3E8u;
        // 0x48a3ec: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a3e8) {
            ctx->pc = 0x48A3F4u;
            goto label_48a3f4;
        }
    }
    ctx->pc = 0x48A3F0u;
label_48a3f0:
    // 0x48a3f0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x48a3f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48a3f4:
    // 0x48a3f4: 0x2688d600  addiu       $t0, $s4, -0x2A00
    ctx->pc = 0x48a3f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a3f8: 0x240bff00  addiu       $t3, $zero, -0x100
    ctx->pc = 0x48a3f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x48a3fc: 0x250a003e  addiu       $t2, $t0, 0x3E
    ctx->pc = 0x48a3fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 62));
    // 0x48a400: 0x2508003c  addiu       $t0, $t0, 0x3C
    ctx->pc = 0x48a400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 60));
    // 0x48a404: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x48a404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x48a408: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x48a408u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x48a40c: 0x24b1824  and         $v1, $s2, $t3
    ctx->pc = 0x48a40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 11));
    // 0x48a410: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x48a410u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x48a414: 0x699025  or          $s2, $v1, $t1
    ctx->pc = 0x48a414u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x48a418: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a41c: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x48a41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a420: 0x32650001  andi        $a1, $s3, 0x1
    ctx->pc = 0x48a420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48a424: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x48a424u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48a428: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x48a428u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48a42c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x48a42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a430: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x48a430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a434: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x48a434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x48a438: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x48a438u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x48a43c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a440: 0x8b2024  and         $a0, $a0, $t3
    ctx->pc = 0x48a440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x48a444: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x48a444u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48a448: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x48a448u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x48a44c: 0x2459025  or          $s2, $s2, $a1
    ctx->pc = 0x48a44cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    // 0x48a450: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x48a450u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x48a454: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x48a454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x48a458: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x48a458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a45c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a460: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x48a460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a464: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x48a464u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48a468: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x48a468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x48a46c: 0x121600  sll         $v0, $s2, 24
    ctx->pc = 0x48a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x48a470: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x48a470u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x48a474: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x48a474u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x48a478: 0xa5460000  sh          $a2, 0x0($t2)
    ctx->pc = 0x48a478u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x48a47c: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x48a47cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x48a480: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x48A480u;
    {
        const bool branch_taken_0x48a480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A480u;
        // 0x48a484: 0x139843  sra         $s3, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a480) {
            ctx->pc = 0x48A4C0u;
            goto label_48a4c0;
        }
    }
    ctx->pc = 0x48A488u;
    // 0x48a488: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x48a488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x48a48c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48a490: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48a490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48a494: 0x8c639c30  lw          $v1, -0x63D0($v1)
    ctx->pc = 0x48a494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941744)));
    // 0x48a498: 0x600008  jr          $v1
    ctx->pc = 0x48A498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48A4A0u: goto label_48a4a0;
            case 0x48A4A8u: goto label_48a4a8;
            case 0x48A4B0u: goto label_48a4b0;
            case 0x48A4B8u: goto label_48a4b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A498u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48A4A0u;
label_48a4a0:
    // 0x48a4a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48A4A0u;
    {
        const bool branch_taken_0x48a4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A4A0u;
        // 0x48a4a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a4a0) {
            ctx->pc = 0x48A4C4u;
            goto label_48a4c4;
        }
    }
    ctx->pc = 0x48A4A8u;
label_48a4a8:
    // 0x48a4a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48A4A8u;
    {
        const bool branch_taken_0x48a4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A4A8u;
        // 0x48a4ac: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a4a8) {
            ctx->pc = 0x48A4C4u;
            goto label_48a4c4;
        }
    }
    ctx->pc = 0x48A4B0u;
label_48a4b0:
    // 0x48a4b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48A4B0u;
    {
        const bool branch_taken_0x48a4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A4B0u;
        // 0x48a4b4: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a4b0) {
            ctx->pc = 0x48A4C4u;
            goto label_48a4c4;
        }
    }
    ctx->pc = 0x48A4B8u;
label_48a4b8:
    // 0x48a4b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48A4B8u;
    {
        const bool branch_taken_0x48a4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A4B8u;
        // 0x48a4bc: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a4b8) {
            ctx->pc = 0x48A4C4u;
            goto label_48a4c4;
        }
    }
    ctx->pc = 0x48A4C0u;
label_48a4c0:
    // 0x48a4c0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x48a4c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48a4c4:
    // 0x48a4c4: 0x2688d600  addiu       $t0, $s4, -0x2A00
    ctx->pc = 0x48a4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a4c8: 0x240bff00  addiu       $t3, $zero, -0x100
    ctx->pc = 0x48a4c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x48a4cc: 0x250a0040  addiu       $t2, $t0, 0x40
    ctx->pc = 0x48a4ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x48a4d0: 0x2508003e  addiu       $t0, $t0, 0x3E
    ctx->pc = 0x48a4d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 62));
    // 0x48a4d4: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x48a4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x48a4d8: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x48a4d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x48a4dc: 0x24b1824  and         $v1, $s2, $t3
    ctx->pc = 0x48a4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 11));
    // 0x48a4e0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x48a4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x48a4e4: 0x699025  or          $s2, $v1, $t1
    ctx->pc = 0x48a4e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x48a4e8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a4ec: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x48a4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a4f0: 0x32650001  andi        $a1, $s3, 0x1
    ctx->pc = 0x48a4f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48a4f4: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x48a4f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48a4f8: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x48a4f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48a4fc: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x48a4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a500: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x48a500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a504: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x48a504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x48a508: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x48a508u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x48a50c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a510: 0x8b2024  and         $a0, $a0, $t3
    ctx->pc = 0x48a510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x48a514: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x48a514u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48a518: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x48a518u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x48a51c: 0x2459025  or          $s2, $s2, $a1
    ctx->pc = 0x48a51cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    // 0x48a520: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x48a520u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x48a524: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x48a524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x48a528: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x48a528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a52c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a530: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x48a530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a534: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x48a534u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48a538: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x48a538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x48a53c: 0x121600  sll         $v0, $s2, 24
    ctx->pc = 0x48a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x48a540: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x48a540u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x48a544: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x48a544u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x48a548: 0xa5460000  sh          $a2, 0x0($t2)
    ctx->pc = 0x48a548u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x48a54c: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x48a54cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x48a550: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x48A550u;
    {
        const bool branch_taken_0x48a550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A550u;
        // 0x48a554: 0x139843  sra         $s3, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a550) {
            ctx->pc = 0x48A590u;
            goto label_48a590;
        }
    }
    ctx->pc = 0x48A558u;
    // 0x48a558: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x48a558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x48a55c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48a560: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48a560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48a564: 0x8c639c70  lw          $v1, -0x6390($v1)
    ctx->pc = 0x48a564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941808)));
    // 0x48a568: 0x600008  jr          $v1
    ctx->pc = 0x48A568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48A570u: goto label_48a570;
            case 0x48A578u: goto label_48a578;
            case 0x48A580u: goto label_48a580;
            case 0x48A588u: goto label_48a588;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A568u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48A570u;
label_48a570:
    // 0x48a570: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48A570u;
    {
        const bool branch_taken_0x48a570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A570u;
        // 0x48a574: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a570) {
            ctx->pc = 0x48A594u;
            goto label_48a594;
        }
    }
    ctx->pc = 0x48A578u;
label_48a578:
    // 0x48a578: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48A578u;
    {
        const bool branch_taken_0x48a578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A578u;
        // 0x48a57c: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a578) {
            ctx->pc = 0x48A594u;
            goto label_48a594;
        }
    }
    ctx->pc = 0x48A580u;
label_48a580:
    // 0x48a580: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48A580u;
    {
        const bool branch_taken_0x48a580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A580u;
        // 0x48a584: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a580) {
            ctx->pc = 0x48A594u;
            goto label_48a594;
        }
    }
    ctx->pc = 0x48A588u;
label_48a588:
    // 0x48a588: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48A588u;
    {
        const bool branch_taken_0x48a588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A588u;
        // 0x48a58c: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a588) {
            ctx->pc = 0x48A594u;
            goto label_48a594;
        }
    }
    ctx->pc = 0x48A590u;
label_48a590:
    // 0x48a590: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x48a590u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48a594:
    // 0x48a594: 0x2688d600  addiu       $t0, $s4, -0x2A00
    ctx->pc = 0x48a594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a598: 0x240bff00  addiu       $t3, $zero, -0x100
    ctx->pc = 0x48a598u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x48a59c: 0x250a0042  addiu       $t2, $t0, 0x42
    ctx->pc = 0x48a59cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 66));
    // 0x48a5a0: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x48a5a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x48a5a4: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x48a5a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x48a5a8: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x48a5a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x48a5ac: 0x24b1824  and         $v1, $s2, $t3
    ctx->pc = 0x48a5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 11));
    // 0x48a5b0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x48a5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x48a5b4: 0x699025  or          $s2, $v1, $t1
    ctx->pc = 0x48a5b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x48a5b8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a5bc: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x48a5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a5c0: 0x32650001  andi        $a1, $s3, 0x1
    ctx->pc = 0x48a5c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48a5c4: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x48a5c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48a5c8: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x48a5c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48a5cc: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x48a5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a5d0: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x48a5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a5d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x48a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x48a5d8: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x48a5d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x48a5dc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a5e0: 0x8b2024  and         $a0, $a0, $t3
    ctx->pc = 0x48a5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x48a5e4: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x48a5e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48a5e8: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x48a5e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x48a5ec: 0x2459025  or          $s2, $s2, $a1
    ctx->pc = 0x48a5ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    // 0x48a5f0: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x48a5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x48a5f4: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x48a5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x48a5f8: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x48a5f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a5fc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a600: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x48a600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a604: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x48a604u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48a608: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x48a608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x48a60c: 0x121600  sll         $v0, $s2, 24
    ctx->pc = 0x48a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x48a610: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x48a610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x48a614: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x48a614u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x48a618: 0xa5460000  sh          $a2, 0x0($t2)
    ctx->pc = 0x48a618u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x48a61c: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x48a61cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x48a620: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x48A620u;
    {
        const bool branch_taken_0x48a620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A620u;
        // 0x48a624: 0x139843  sra         $s3, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a620) {
            ctx->pc = 0x48A660u;
            goto label_48a660;
        }
    }
    ctx->pc = 0x48A628u;
    // 0x48a628: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x48a628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x48a62c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48a630: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48a630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48a634: 0x8c639cb0  lw          $v1, -0x6350($v1)
    ctx->pc = 0x48a634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941872)));
    // 0x48a638: 0x600008  jr          $v1
    ctx->pc = 0x48A638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48A640u: goto label_48a640;
            case 0x48A648u: goto label_48a648;
            case 0x48A650u: goto label_48a650;
            case 0x48A658u: goto label_48a658;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A638u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48A640u;
label_48a640:
    // 0x48a640: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48A640u;
    {
        const bool branch_taken_0x48a640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A640u;
        // 0x48a644: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a640) {
            ctx->pc = 0x48A664u;
            goto label_48a664;
        }
    }
    ctx->pc = 0x48A648u;
label_48a648:
    // 0x48a648: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48A648u;
    {
        const bool branch_taken_0x48a648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A648u;
        // 0x48a64c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a648) {
            ctx->pc = 0x48A664u;
            goto label_48a664;
        }
    }
    ctx->pc = 0x48A650u;
label_48a650:
    // 0x48a650: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48A650u;
    {
        const bool branch_taken_0x48a650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A650u;
        // 0x48a654: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a650) {
            ctx->pc = 0x48A664u;
            goto label_48a664;
        }
    }
    ctx->pc = 0x48A658u;
label_48a658:
    // 0x48a658: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48A658u;
    {
        const bool branch_taken_0x48a658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A658u;
        // 0x48a65c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a658) {
            ctx->pc = 0x48A664u;
            goto label_48a664;
        }
    }
    ctx->pc = 0x48A660u;
label_48a660:
    // 0x48a660: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48a660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48a664:
    // 0x48a664: 0x2690d600  addiu       $s0, $s4, -0x2A00
    ctx->pc = 0x48a664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a668: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x48a668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x48a66c: 0x26070042  addiu       $a3, $s0, 0x42
    ctx->pc = 0x48a66cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
    // 0x48a670: 0x2462824  and         $a1, $s2, $a2
    ctx->pc = 0x48a670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x48a674: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x48a674u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x48a678: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x48a678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x48a67c: 0xa39025  or          $s2, $a1, $v1
    ctx->pc = 0x48a67cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x48a680: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48a680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48a684: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x48a684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x48a688: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x48a688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x48a68c: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x48A68Cu;
    SET_GPR_U32(ctx, 31, 0x48A694u);
    ctx->pc = 0x48A690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A68Cu;
    // 0x48a690: 0xa4e30000  sh          $v1, 0x0($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x48A68Cu, 0x48A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A694u;
label_48a694:
    // 0x48a694: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x48a694u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x48a698: 0x3663ffff  ori         $v1, $s3, 0xFFFF
    ctx->pc = 0x48a698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48a69c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x48a69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x48a6a0: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x48a6a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48a6a4: 0x2462824  and         $a1, $s2, $a2
    ctx->pc = 0x48a6a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x48a6a8: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x48a6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x48a6ac: 0x26070046  addiu       $a3, $s0, 0x46
    ctx->pc = 0x48a6acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 70));
    // 0x48a6b0: 0xa29025  or          $s2, $a1, $v0
    ctx->pc = 0x48a6b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x48a6b4: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x48a6b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x48a6b8: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x48a6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x48a6bc: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x48a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x48a6c0: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x48a6c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a6c4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x48a6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x48a6c8: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x48a6c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48a6cc: 0x3662ffff  ori         $v0, $s3, 0xFFFF
    ctx->pc = 0x48a6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48a6d0: 0x31d03  sra         $v1, $v1, 20
    ctx->pc = 0x48a6d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 20));
    // 0x48a6d4: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x48a6d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a6d8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x48a6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x48a6dc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x48a6dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x48a6e0: 0x439824  and         $s3, $v0, $v1
    ctx->pc = 0x48a6e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48a6e4: 0xa6120044  sh          $s2, 0x44($s0)
    ctx->pc = 0x48a6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 18));
    // 0x48a6e8: 0xa49024  and         $s2, $a1, $a0
    ctx->pc = 0x48a6e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x48a6ec: 0x3665ffff  ori         $a1, $s3, 0xFFFF
    ctx->pc = 0x48a6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48a6f0: 0x32630fff  andi        $v1, $s3, 0xFFF
    ctx->pc = 0x48a6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4095);
    // 0x48a6f4: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x48a6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a6f8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x48a6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x48a6fc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x48a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x48a700: 0xa39824  and         $s3, $a1, $v1
    ctx->pc = 0x48a700u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x48a704: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x48a704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x48a708: 0x3642ffff  ori         $v0, $s2, 0xFFFF
    ctx->pc = 0x48a708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a70c: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x48a70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48a710: 0x449024  and         $s2, $v0, $a0
    ctx->pc = 0x48a710u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x48a714: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x48a714u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x48a718: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x48a718u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x48a71c: 0x139843  sra         $s3, $s3, 1
    ctx->pc = 0x48a71cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x48a720: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x48a720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x48a724: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x48a724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a728: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x48a728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x48a72c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x48a72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a730: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x48a730u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48a734: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x48a734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x48a738: 0x3245000f  andi        $a1, $s2, 0xF
    ctx->pc = 0x48a738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x48a73c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x48a73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x48a740: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x48a740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x48a744: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x48A744u;
    {
        const bool branch_taken_0x48a744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A744u;
        // 0x48a748: 0xa4e40000  sh          $a0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a744) {
            ctx->pc = 0x48A788u;
            goto label_48a788;
        }
    }
    ctx->pc = 0x48A74Cu;
    // 0x48a74c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x48a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x48a750: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48a750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48a754: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48a754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48a758: 0x8c639cf0  lw          $v1, -0x6310($v1)
    ctx->pc = 0x48a758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941936)));
    // 0x48a75c: 0x600008  jr          $v1
    ctx->pc = 0x48A75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48A768u: goto label_48a768;
            case 0x48A770u: goto label_48a770;
            case 0x48A778u: goto label_48a778;
            case 0x48A780u: goto label_48a780;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A75Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48A764u;
    // 0x48a764: 0x0  nop
    ctx->pc = 0x48a764u;
    // NOP
label_48a768:
    // 0x48a768: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48A768u;
    {
        const bool branch_taken_0x48a768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A768u;
        // 0x48a76c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a768) {
            ctx->pc = 0x48A78Cu;
            goto label_48a78c;
        }
    }
    ctx->pc = 0x48A770u;
label_48a770:
    // 0x48a770: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48A770u;
    {
        const bool branch_taken_0x48a770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A770u;
        // 0x48a774: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a770) {
            ctx->pc = 0x48A78Cu;
            goto label_48a78c;
        }
    }
    ctx->pc = 0x48A778u;
label_48a778:
    // 0x48a778: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48A778u;
    {
        const bool branch_taken_0x48a778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A778u;
        // 0x48a77c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a778) {
            ctx->pc = 0x48A78Cu;
            goto label_48a78c;
        }
    }
    ctx->pc = 0x48A780u;
label_48a780:
    // 0x48a780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48A780u;
    {
        const bool branch_taken_0x48a780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A780u;
        // 0x48a784: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a780) {
            ctx->pc = 0x48A78Cu;
            goto label_48a78c;
        }
    }
    ctx->pc = 0x48A788u;
label_48a788:
    // 0x48a788: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x48a788u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48a78c:
    // 0x48a78c: 0x2688d600  addiu       $t0, $s4, -0x2A00
    ctx->pc = 0x48a78cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a790: 0x240bff00  addiu       $t3, $zero, -0x100
    ctx->pc = 0x48a790u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x48a794: 0x250a0048  addiu       $t2, $t0, 0x48
    ctx->pc = 0x48a794u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 72));
    // 0x48a798: 0x25080046  addiu       $t0, $t0, 0x46
    ctx->pc = 0x48a798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 70));
    // 0x48a79c: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x48a79cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x48a7a0: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x48a7a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x48a7a4: 0x24b1824  and         $v1, $s2, $t3
    ctx->pc = 0x48a7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 11));
    // 0x48a7a8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x48a7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x48a7ac: 0x699025  or          $s2, $v1, $t1
    ctx->pc = 0x48a7acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x48a7b0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a7b4: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x48a7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a7b8: 0x32650001  andi        $a1, $s3, 0x1
    ctx->pc = 0x48a7b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48a7bc: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x48a7bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48a7c0: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x48a7c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48a7c4: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x48a7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a7c8: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x48a7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a7cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x48a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x48a7d0: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x48a7d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x48a7d4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a7d8: 0x8b2024  and         $a0, $a0, $t3
    ctx->pc = 0x48a7d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x48a7dc: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x48a7dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48a7e0: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x48a7e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x48a7e4: 0x2459025  or          $s2, $s2, $a1
    ctx->pc = 0x48a7e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    // 0x48a7e8: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x48a7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x48a7ec: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x48a7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x48a7f0: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x48a7f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a7f4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a7f8: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x48a7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a7fc: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x48a7fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48a800: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x48a800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x48a804: 0x121600  sll         $v0, $s2, 24
    ctx->pc = 0x48a804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x48a808: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x48a808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x48a80c: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x48a80cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x48a810: 0xa5460000  sh          $a2, 0x0($t2)
    ctx->pc = 0x48a810u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x48a814: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x48a814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x48a818: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x48A818u;
    {
        const bool branch_taken_0x48a818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A818u;
        // 0x48a81c: 0x139843  sra         $s3, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a818) {
            ctx->pc = 0x48A858u;
            goto label_48a858;
        }
    }
    ctx->pc = 0x48A820u;
    // 0x48a820: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x48a820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x48a824: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48a824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48a828: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48a828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48a82c: 0x8c639d30  lw          $v1, -0x62D0($v1)
    ctx->pc = 0x48a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942000)));
    // 0x48a830: 0x600008  jr          $v1
    ctx->pc = 0x48A830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48A838u: goto label_48a838;
            case 0x48A840u: goto label_48a840;
            case 0x48A848u: goto label_48a848;
            case 0x48A850u: goto label_48a850;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A830u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48A838u;
label_48a838:
    // 0x48a838: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48A838u;
    {
        const bool branch_taken_0x48a838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A838u;
        // 0x48a83c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a838) {
            ctx->pc = 0x48A85Cu;
            goto label_48a85c;
        }
    }
    ctx->pc = 0x48A840u;
label_48a840:
    // 0x48a840: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48A840u;
    {
        const bool branch_taken_0x48a840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A840u;
        // 0x48a844: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a840) {
            ctx->pc = 0x48A85Cu;
            goto label_48a85c;
        }
    }
    ctx->pc = 0x48A848u;
label_48a848:
    // 0x48a848: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48A848u;
    {
        const bool branch_taken_0x48a848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A848u;
        // 0x48a84c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a848) {
            ctx->pc = 0x48A85Cu;
            goto label_48a85c;
        }
    }
    ctx->pc = 0x48A850u;
label_48a850:
    // 0x48a850: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48A850u;
    {
        const bool branch_taken_0x48a850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A850u;
        // 0x48a854: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a850) {
            ctx->pc = 0x48A85Cu;
            goto label_48a85c;
        }
    }
    ctx->pc = 0x48A858u;
label_48a858:
    // 0x48a858: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x48a858u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48a85c:
    // 0x48a85c: 0x2688d600  addiu       $t0, $s4, -0x2A00
    ctx->pc = 0x48a85cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a860: 0x240bff00  addiu       $t3, $zero, -0x100
    ctx->pc = 0x48a860u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x48a864: 0x250a004a  addiu       $t2, $t0, 0x4A
    ctx->pc = 0x48a864u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 74));
    // 0x48a868: 0x25080048  addiu       $t0, $t0, 0x48
    ctx->pc = 0x48a868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 72));
    // 0x48a86c: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x48a86cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x48a870: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x48a870u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x48a874: 0x24b1824  and         $v1, $s2, $t3
    ctx->pc = 0x48a874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 11));
    // 0x48a878: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x48a878u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x48a87c: 0x699025  or          $s2, $v1, $t1
    ctx->pc = 0x48a87cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x48a880: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a884: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x48a884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a888: 0x32650001  andi        $a1, $s3, 0x1
    ctx->pc = 0x48a888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48a88c: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x48a88cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48a890: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x48a890u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48a894: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x48a894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a898: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x48a898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a89c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x48a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x48a8a0: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x48a8a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x48a8a4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a8a8: 0x8b2024  and         $a0, $a0, $t3
    ctx->pc = 0x48a8a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x48a8ac: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x48a8acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48a8b0: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x48a8b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x48a8b4: 0x2459025  or          $s2, $s2, $a1
    ctx->pc = 0x48a8b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    // 0x48a8b8: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x48a8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x48a8bc: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x48a8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x48a8c0: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x48a8c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a8c4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a8c8: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x48a8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a8cc: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x48a8ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48a8d0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x48a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x48a8d4: 0x121600  sll         $v0, $s2, 24
    ctx->pc = 0x48a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x48a8d8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x48a8d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x48a8dc: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x48a8dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x48a8e0: 0xa5460000  sh          $a2, 0x0($t2)
    ctx->pc = 0x48a8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x48a8e4: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x48a8e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x48a8e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x48A8E8u;
    {
        const bool branch_taken_0x48a8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A8E8u;
        // 0x48a8ec: 0x139843  sra         $s3, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a8e8) {
            ctx->pc = 0x48A928u;
            goto label_48a928;
        }
    }
    ctx->pc = 0x48A8F0u;
    // 0x48a8f0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x48a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x48a8f4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48a8f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48a8fc: 0x8c639d70  lw          $v1, -0x6290($v1)
    ctx->pc = 0x48a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942064)));
    // 0x48a900: 0x600008  jr          $v1
    ctx->pc = 0x48A900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48A908u: goto label_48a908;
            case 0x48A910u: goto label_48a910;
            case 0x48A918u: goto label_48a918;
            case 0x48A920u: goto label_48a920;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A900u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48A908u;
label_48a908:
    // 0x48a908: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48A908u;
    {
        const bool branch_taken_0x48a908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A908u;
        // 0x48a90c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a908) {
            ctx->pc = 0x48A92Cu;
            goto label_48a92c;
        }
    }
    ctx->pc = 0x48A910u;
label_48a910:
    // 0x48a910: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48A910u;
    {
        const bool branch_taken_0x48a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A910u;
        // 0x48a914: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a910) {
            ctx->pc = 0x48A92Cu;
            goto label_48a92c;
        }
    }
    ctx->pc = 0x48A918u;
label_48a918:
    // 0x48a918: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48A918u;
    {
        const bool branch_taken_0x48a918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A918u;
        // 0x48a91c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a918) {
            ctx->pc = 0x48A92Cu;
            goto label_48a92c;
        }
    }
    ctx->pc = 0x48A920u;
label_48a920:
    // 0x48a920: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48A920u;
    {
        const bool branch_taken_0x48a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A920u;
        // 0x48a924: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a920) {
            ctx->pc = 0x48A92Cu;
            goto label_48a92c;
        }
    }
    ctx->pc = 0x48A928u;
label_48a928:
    // 0x48a928: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x48a928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48a92c:
    // 0x48a92c: 0x2688d600  addiu       $t0, $s4, -0x2A00
    ctx->pc = 0x48a92cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48a930: 0x240bff00  addiu       $t3, $zero, -0x100
    ctx->pc = 0x48a930u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x48a934: 0x250a004c  addiu       $t2, $t0, 0x4C
    ctx->pc = 0x48a934u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 76));
    // 0x48a938: 0x2508004a  addiu       $t0, $t0, 0x4A
    ctx->pc = 0x48a938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 74));
    // 0x48a93c: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x48a93cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x48a940: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x48a940u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x48a944: 0x24b1824  and         $v1, $s2, $t3
    ctx->pc = 0x48a944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 11));
    // 0x48a948: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x48a948u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x48a94c: 0x699025  or          $s2, $v1, $t1
    ctx->pc = 0x48a94cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x48a950: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a954: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x48a954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a958: 0x32650001  andi        $a1, $s3, 0x1
    ctx->pc = 0x48a958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48a95c: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x48a95cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48a960: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x48a960u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48a964: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x48a964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a968: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x48a968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a96c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x48a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x48a970: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x48a970u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x48a974: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a978: 0x8b2024  and         $a0, $a0, $t3
    ctx->pc = 0x48a978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x48a97c: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x48a97cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48a980: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x48a980u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x48a984: 0x2459025  or          $s2, $s2, $a1
    ctx->pc = 0x48a984u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    // 0x48a988: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x48a988u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x48a98c: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x48a98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x48a990: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x48a990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48a994: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48a994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48a998: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x48a998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x48a99c: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x48a99cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48a9a0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x48a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x48a9a4: 0x121600  sll         $v0, $s2, 24
    ctx->pc = 0x48a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x48a9a8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x48a9a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x48a9ac: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x48a9acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x48a9b0: 0xa5460000  sh          $a2, 0x0($t2)
    ctx->pc = 0x48a9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x48a9b4: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x48a9b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x48a9b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x48A9B8u;
    {
        const bool branch_taken_0x48a9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A9B8u;
        // 0x48a9bc: 0x139843  sra         $s3, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a9b8) {
            ctx->pc = 0x48A9F8u;
            goto label_48a9f8;
        }
    }
    ctx->pc = 0x48A9C0u;
    // 0x48a9c0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x48a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x48a9c4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48a9c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48a9cc: 0x8c639db0  lw          $v1, -0x6250($v1)
    ctx->pc = 0x48a9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942128)));
    // 0x48a9d0: 0x600008  jr          $v1
    ctx->pc = 0x48A9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48A9D8u: goto label_48a9d8;
            case 0x48A9E0u: goto label_48a9e0;
            case 0x48A9E8u: goto label_48a9e8;
            case 0x48A9F0u: goto label_48a9f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A9D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48A9D8u;
label_48a9d8:
    // 0x48a9d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48A9D8u;
    {
        const bool branch_taken_0x48a9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A9D8u;
        // 0x48a9dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a9d8) {
            ctx->pc = 0x48A9FCu;
            goto label_48a9fc;
        }
    }
    ctx->pc = 0x48A9E0u;
label_48a9e0:
    // 0x48a9e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48A9E0u;
    {
        const bool branch_taken_0x48a9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A9E0u;
        // 0x48a9e4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a9e0) {
            ctx->pc = 0x48A9FCu;
            goto label_48a9fc;
        }
    }
    ctx->pc = 0x48A9E8u;
label_48a9e8:
    // 0x48a9e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48A9E8u;
    {
        const bool branch_taken_0x48a9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A9E8u;
        // 0x48a9ec: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a9e8) {
            ctx->pc = 0x48A9FCu;
            goto label_48a9fc;
        }
    }
    ctx->pc = 0x48A9F0u;
label_48a9f0:
    // 0x48a9f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48A9F0u;
    {
        const bool branch_taken_0x48a9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A9F0u;
        // 0x48a9f4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a9f0) {
            ctx->pc = 0x48A9FCu;
            goto label_48a9fc;
        }
    }
    ctx->pc = 0x48A9F8u;
label_48a9f8:
    // 0x48a9f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48a9fc:
    // 0x48a9fc: 0x2691d600  addiu       $s1, $s4, -0x2A00
    ctx->pc = 0x48a9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48aa00: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x48aa00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x48aa04: 0x2627004c  addiu       $a3, $s1, 0x4C
    ctx->pc = 0x48aa04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x48aa08: 0x2462824  and         $a1, $s2, $a2
    ctx->pc = 0x48aa08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x48aa0c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x48aa0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x48aa10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x48aa10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x48aa14: 0xa39025  or          $s2, $a1, $v1
    ctx->pc = 0x48aa14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x48aa18: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x48aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48aa1c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x48aa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x48aa20: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x48aa20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x48aa24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x48aa24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x48aa28: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x48AA28u;
    SET_GPR_U32(ctx, 31, 0x48AA30u);
    ctx->pc = 0x48AA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48AA28u;
    // 0x48aa2c: 0xa4e30000  sh          $v1, 0x0($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x48AA28u, 0x48AA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AA30u;
label_48aa30:
    // 0x48aa30: 0x3663ffff  ori         $v1, $s3, 0xFFFF
    ctx->pc = 0x48aa30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48aa34: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48aa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48aa38: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x48aa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x48aa3c: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x48AA3Cu;
    SET_GPR_U32(ctx, 31, 0x48AA44u);
    ctx->pc = 0x48AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48AA3Cu;
    // 0x48aa40: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x48AA3Cu, 0x48AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AA44u;
label_48aa44:
    // 0x48aa44: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48aa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48aa48: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x48aa48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48aa4c: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x48aa4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48aa50: 0x3663ffff  ori         $v1, $s3, 0xFFFF
    ctx->pc = 0x48aa50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48aa54: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x48aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x48aa58: 0x132400  sll         $a0, $s3, 16
    ctx->pc = 0x48aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x48aa5c: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x48aa5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
    // 0x48aa60: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x48aa60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48aa64: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48aa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48aa68: 0x424c3  sra         $a0, $a0, 19
    ctx->pc = 0x48aa68u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 19));
    // 0x48aa6c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x48aa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48aa70: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x48aa70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48aa74: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x48aa74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x48aa78: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x48aa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x48aa7c: 0x649824  and         $s3, $v1, $a0
    ctx->pc = 0x48aa7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x48aa80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x48aa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aa84: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x48aa84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aa88: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x48aa88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48aa8c: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x48aa8cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x48aa90: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x48aa90u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x48aa94: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x48aa94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x48aa98: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x48aa98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x48aa9c: 0x139843  sra         $s3, $s3, 1
    ctx->pc = 0x48aa9cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x48aaa0: 0xa6270062  sh          $a3, 0x62($s1)
    ctx->pc = 0x48aaa0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 98), (uint16_t)GPR_U32(ctx, 7));
    // 0x48aaa4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x48aaa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aaa8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x48aaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48aaac: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x48aaacu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x48aab0: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x48aab0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x48aab4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x48aab4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x48aab8: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x48aab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x48aabc: 0xa6270064  sh          $a3, 0x64($s1)
    ctx->pc = 0x48aabcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 7));
    // 0x48aac0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x48aac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aac4: 0x139843  sra         $s3, $s3, 1
    ctx->pc = 0x48aac4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x48aac8: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x48aac8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x48aacc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x48aaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48aad0: 0x139843  sra         $s3, $s3, 1
    ctx->pc = 0x48aad0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x48aad4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x48aad4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x48aad8: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x48aad8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x48aadc: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x48aadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x48aae0: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x48aae0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x48aae4: 0xa6270066  sh          $a3, 0x66($s1)
    ctx->pc = 0x48aae4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 7));
    // 0x48aae8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x48aae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aaec: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x48aaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48aaf0: 0x139843  sra         $s3, $s3, 1
    ctx->pc = 0x48aaf0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x48aaf4: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x48aaf4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x48aaf8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48aafc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x48aafcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x48ab00: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x48ab00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x48ab04: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x48ab04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x48ab08: 0xa6270068  sh          $a3, 0x68($s1)
    ctx->pc = 0x48ab08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 104), (uint16_t)GPR_U32(ctx, 7));
    // 0x48ab0c: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x48AB0Cu;
    SET_GPR_U32(ctx, 31, 0x48AB14u);
    ctx->pc = 0x48AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48AB0Cu;
    // 0x48ab10: 0xa29024  and         $s2, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x48AB0Cu, 0x48AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AB14u;
label_48ab14:
    // 0x48ab14: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48ab14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48ab18: 0x3663ffff  ori         $v1, $s3, 0xFFFF
    ctx->pc = 0x48ab18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ab1c: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x48ab1cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48ab20: 0x26260052  addiu       $a2, $s1, 0x52
    ctx->pc = 0x48ab20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 82));
    // 0x48ab24: 0x2721024  and         $v0, $s3, $s2
    ctx->pc = 0x48ab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 18));
    // 0x48ab28: 0x94c70000  lhu         $a3, 0x0($a2)
    ctx->pc = 0x48ab28u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48ab2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48ab2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x48ab30: 0x3665ffff  ori         $a1, $s3, 0xFFFF
    ctx->pc = 0x48ab30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ab34: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48ab34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48ab38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48ab3c: 0xa29824  and         $s3, $a1, $v0
    ctx->pc = 0x48ab3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48ab40: 0xf31826  xor         $v1, $a3, $s3
    ctx->pc = 0x48ab40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 19));
    // 0x48ab44: 0xa4d30000  sh          $s3, 0x0($a2)
    ctx->pc = 0x48ab44u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x48ab48: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x48ab48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x48ab4c: 0x3665ffff  ori         $a1, $s3, 0xFFFF
    ctx->pc = 0x48ab4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ab50: 0x2671024  and         $v0, $s3, $a3
    ctx->pc = 0x48ab50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 7));
    // 0x48ab54: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48ab54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48ab58: 0xa29824  and         $s3, $a1, $v0
    ctx->pc = 0x48ab58u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48ab5c: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x48AB5Cu;
    SET_GPR_U32(ctx, 31, 0x48AB64u);
    ctx->pc = 0x48AB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48AB5Cu;
    // 0x48ab60: 0xa6330054  sh          $s3, 0x54($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x48AB5Cu, 0x48AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AB64u;
label_48ab64:
    // 0x48ab64: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48ab64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48ab68: 0x3663ffff  ori         $v1, $s3, 0xFFFF
    ctx->pc = 0x48ab68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ab6c: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x48ab6cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48ab70: 0x26260056  addiu       $a2, $s1, 0x56
    ctx->pc = 0x48ab70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 86));
    // 0x48ab74: 0x2721024  and         $v0, $s3, $s2
    ctx->pc = 0x48ab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 18));
    // 0x48ab78: 0x94c70000  lhu         $a3, 0x0($a2)
    ctx->pc = 0x48ab78u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48ab7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48ab7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x48ab80: 0x3665ffff  ori         $a1, $s3, 0xFFFF
    ctx->pc = 0x48ab80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ab84: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48ab84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48ab88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x48ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48ab8c: 0xa29824  and         $s3, $a1, $v0
    ctx->pc = 0x48ab8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48ab90: 0xf31826  xor         $v1, $a3, $s3
    ctx->pc = 0x48ab90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 19));
    // 0x48ab94: 0xa4d30000  sh          $s3, 0x0($a2)
    ctx->pc = 0x48ab94u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x48ab98: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x48ab98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x48ab9c: 0x3665ffff  ori         $a1, $s3, 0xFFFF
    ctx->pc = 0x48ab9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48aba0: 0x2671024  and         $v0, $s3, $a3
    ctx->pc = 0x48aba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 7));
    // 0x48aba4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48aba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48aba8: 0xa29824  and         $s3, $a1, $v0
    ctx->pc = 0x48aba8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48abac: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x48ABACu;
    SET_GPR_U32(ctx, 31, 0x48ABB4u);
    ctx->pc = 0x48ABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48ABACu;
    // 0x48abb0: 0xa6330058  sh          $s3, 0x58($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 88), (uint16_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x48ABACu, 0x48ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48ABB4u;
label_48abb4:
    // 0x48abb4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48abb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48abb8: 0x3663ffff  ori         $v1, $s3, 0xFFFF
    ctx->pc = 0x48abb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48abbc: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x48abbcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48abc0: 0x2626005a  addiu       $a2, $s1, 0x5A
    ctx->pc = 0x48abc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 90));
    // 0x48abc4: 0x2721024  and         $v0, $s3, $s2
    ctx->pc = 0x48abc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 18));
    // 0x48abc8: 0x94c70000  lhu         $a3, 0x0($a2)
    ctx->pc = 0x48abc8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48abcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48abccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x48abd0: 0x3665ffff  ori         $a1, $s3, 0xFFFF
    ctx->pc = 0x48abd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48abd4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48abd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48abd8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x48abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x48abdc: 0xa29824  and         $s3, $a1, $v0
    ctx->pc = 0x48abdcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48abe0: 0xf31826  xor         $v1, $a3, $s3
    ctx->pc = 0x48abe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 19));
    // 0x48abe4: 0xa4d30000  sh          $s3, 0x0($a2)
    ctx->pc = 0x48abe4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x48abe8: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x48abe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x48abec: 0x3665ffff  ori         $a1, $s3, 0xFFFF
    ctx->pc = 0x48abecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48abf0: 0x2671024  and         $v0, $s3, $a3
    ctx->pc = 0x48abf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 7));
    // 0x48abf4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48abf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48abf8: 0xa29824  and         $s3, $a1, $v0
    ctx->pc = 0x48abf8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48abfc: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x48ABFCu;
    SET_GPR_U32(ctx, 31, 0x48AC04u);
    ctx->pc = 0x48AC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48ABFCu;
    // 0x48ac00: 0xa633005c  sh          $s3, 0x5C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 92), (uint16_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x48ABFCu, 0x48AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AC04u;
label_48ac04:
    // 0x48ac04: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48ac04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48ac08: 0x3663ffff  ori         $v1, $s3, 0xFFFF
    ctx->pc = 0x48ac08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ac0c: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x48ac0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48ac10: 0x2625005e  addiu       $a1, $s1, 0x5E
    ctx->pc = 0x48ac10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 94));
    // 0x48ac14: 0x2721024  and         $v0, $s3, $s2
    ctx->pc = 0x48ac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 18));
    // 0x48ac18: 0x94a70000  lhu         $a3, 0x0($a1)
    ctx->pc = 0x48ac18u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48ac1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48ac1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x48ac20: 0x3663ffff  ori         $v1, $s3, 0xFFFF
    ctx->pc = 0x48ac20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ac24: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48ac24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48ac28: 0x8626003c  lh          $a2, 0x3C($s1)
    ctx->pc = 0x48ac28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x48ac2c: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x48ac2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48ac30: 0x9624003e  lhu         $a0, 0x3E($s1)
    ctx->pc = 0x48ac30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 62)));
    // 0x48ac34: 0xf31026  xor         $v0, $a3, $s3
    ctx->pc = 0x48ac34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 19));
    // 0x48ac38: 0x3667ffff  ori         $a3, $s3, 0xFFFF
    ctx->pc = 0x48ac38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ac3c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x48ac3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x48ac40: 0xa4b30000  sh          $s3, 0x0($a1)
    ctx->pc = 0x48ac40u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x48ac44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48ac44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x48ac48: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x48ac48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x48ac4c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48ac4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48ac50: 0x96230040  lhu         $v1, 0x40($s1)
    ctx->pc = 0x48ac50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x48ac54: 0xe29824  and         $s3, $a3, $v0
    ctx->pc = 0x48ac54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x48ac58: 0x9625004a  lhu         $a1, 0x4A($s1)
    ctx->pc = 0x48ac58u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x48ac5c: 0x3662ffff  ori         $v0, $s3, 0xFFFF
    ctx->pc = 0x48ac5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ac60: 0xa6330060  sh          $s3, 0x60($s1)
    ctx->pc = 0x48ac60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 19));
    // 0x48ac64: 0x469824  and         $s3, $v0, $a2
    ctx->pc = 0x48ac64u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x48ac68: 0x2642025  or          $a0, $s3, $a0
    ctx->pc = 0x48ac68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x48ac6c: 0x3662ffff  ori         $v0, $s3, 0xFFFF
    ctx->pc = 0x48ac6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ac70: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48ac74: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x48ac74u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x48ac78: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x48ac78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x48ac7c: 0x449824  and         $s3, $v0, $a0
    ctx->pc = 0x48ac7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x48ac80: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x48ac80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x48ac84: 0x3662ffff  ori         $v0, $s3, 0xFFFF
    ctx->pc = 0x48ac84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ac88: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x48ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48ac8c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x48ac8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x48ac90: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x48ac90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x48ac94: 0x439824  and         $s3, $v0, $v1
    ctx->pc = 0x48ac94u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48ac98: 0x2652825  or          $a1, $s3, $a1
    ctx->pc = 0x48ac98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
    // 0x48ac9c: 0x3663ffff  ori         $v1, $s3, 0xFFFF
    ctx->pc = 0x48ac9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48aca0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x48aca0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x48aca4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x48aca4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x48aca8: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x48aca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x48acac: 0x659824  and         $s3, $v1, $a1
    ctx->pc = 0x48acacu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x48acb0: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x48acb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x48acb4: 0x3663ffff  ori         $v1, $s3, 0xFFFF
    ctx->pc = 0x48acb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48acb8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48acb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48acbc: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x48acbcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48acc0: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x48acc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x48acc4: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x48acc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x48acc8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x48ACC8u;
    {
        const bool branch_taken_0x48acc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ACC8u;
        // 0x48accc: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48acc8) {
            ctx->pc = 0x48AD0Cu;
            goto label_48ad0c;
        }
    }
    ctx->pc = 0x48ACD0u;
    // 0x48acd0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x48acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48acd4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48acd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48acd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48acdc: 0x8c639df0  lw          $v1, -0x6210($v1)
    ctx->pc = 0x48acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942192)));
    // 0x48ace0: 0x600008  jr          $v1
    ctx->pc = 0x48ACE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48ACE8u: goto label_48ace8;
            case 0x48ACF0u: goto label_48acf0;
            case 0x48ACF8u: goto label_48acf8;
            case 0x48AD00u: goto label_48ad00;
            case 0x48AD08u: goto label_48ad08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48ACE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48ACE8u;
label_48ace8:
    // 0x48ace8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48ACE8u;
    {
        const bool branch_taken_0x48ace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ACE8u;
        // 0x48acec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ace8) {
            ctx->pc = 0x48AD0Cu;
            goto label_48ad0c;
        }
    }
    ctx->pc = 0x48ACF0u;
label_48acf0:
    // 0x48acf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48ACF0u;
    {
        const bool branch_taken_0x48acf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ACF0u;
        // 0x48acf4: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48acf0) {
            ctx->pc = 0x48AD0Cu;
            goto label_48ad0c;
        }
    }
    ctx->pc = 0x48ACF8u;
label_48acf8:
    // 0x48acf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48ACF8u;
    {
        const bool branch_taken_0x48acf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ACF8u;
        // 0x48acfc: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48acf8) {
            ctx->pc = 0x48AD0Cu;
            goto label_48ad0c;
        }
    }
    ctx->pc = 0x48AD00u;
label_48ad00:
    // 0x48ad00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48AD00u;
    {
        const bool branch_taken_0x48ad00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AD00u;
        // 0x48ad04: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ad00) {
            ctx->pc = 0x48AD0Cu;
            goto label_48ad0c;
        }
    }
    ctx->pc = 0x48AD08u;
label_48ad08:
    // 0x48ad08: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x48ad08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ad0c:
    // 0x48ad0c: 0x2686d600  addiu       $a2, $s4, -0x2A00
    ctx->pc = 0x48ad0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48ad10: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x48ad10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x48ad14: 0x84c4003c  lh          $a0, 0x3C($a2)
    ctx->pc = 0x48ad14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x48ad18: 0x3667ffff  ori         $a3, $s3, 0xFFFF
    ctx->pc = 0x48ad18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ad1c: 0x94c2003e  lhu         $v0, 0x3E($a2)
    ctx->pc = 0x48ad1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 62)));
    // 0x48ad20: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x48ad20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x48ad24: 0x94c30040  lhu         $v1, 0x40($a2)
    ctx->pc = 0x48ad24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x48ad28: 0xe49824  and         $s3, $a3, $a0
    ctx->pc = 0x48ad28u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x48ad2c: 0x94c5004a  lhu         $a1, 0x4A($a2)
    ctx->pc = 0x48ad2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 74)));
    // 0x48ad30: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x48ad30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x48ad34: 0x3664ffff  ori         $a0, $s3, 0xFFFF
    ctx->pc = 0x48ad34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ad38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48ad3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48ad3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48ad40: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x48ad40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x48ad44: 0x829824  and         $s3, $a0, $v0
    ctx->pc = 0x48ad44u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48ad48: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x48ad48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x48ad4c: 0x3662ffff  ori         $v0, $s3, 0xFFFF
    ctx->pc = 0x48ad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ad50: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x48ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48ad54: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x48ad54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x48ad58: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x48ad58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x48ad5c: 0x439824  and         $s3, $v0, $v1
    ctx->pc = 0x48ad5cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48ad60: 0xb32824  and         $a1, $a1, $s3
    ctx->pc = 0x48ad60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 19));
    // 0x48ad64: 0x3662ffff  ori         $v0, $s3, 0xFFFF
    ctx->pc = 0x48ad64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ad68: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x48ad68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x48ad6c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x48ad6cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x48ad70: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x48ad70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x48ad74: 0x459824  and         $s3, $v0, $a1
    ctx->pc = 0x48ad74u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x48ad78: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x48ad78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x48ad7c: 0x3662ffff  ori         $v0, $s3, 0xFFFF
    ctx->pc = 0x48ad7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48ad80: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x48ad80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48ad84: 0x2c43000f  sltiu       $v1, $v0, 0xF
    ctx->pc = 0x48ad84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x48ad88: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x48AD88u;
    {
        const bool branch_taken_0x48ad88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AD88u;
        // 0x48ad8c: 0xa4c9004e  sh          $t1, 0x4E($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 78), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ad88) {
            ctx->pc = 0x48ADC8u;
            goto label_48adc8;
        }
    }
    ctx->pc = 0x48AD90u;
    // 0x48ad90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48ad94: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48ad98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48ad9c: 0x8c639e30  lw          $v1, -0x61D0($v1)
    ctx->pc = 0x48ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942256)));
    // 0x48ada0: 0x600008  jr          $v1
    ctx->pc = 0x48ADA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48ADA8u: goto label_48ada8;
            case 0x48ADB0u: goto label_48adb0;
            case 0x48ADB8u: goto label_48adb8;
            case 0x48ADC0u: goto label_48adc0;
            case 0x48ADC8u: goto label_48adc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48ADA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48ADA8u;
label_48ada8:
    // 0x48ada8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48ADA8u;
    {
        const bool branch_taken_0x48ada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ADA8u;
        // 0x48adac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ada8) {
            ctx->pc = 0x48ADCCu;
            goto label_48adcc;
        }
    }
    ctx->pc = 0x48ADB0u;
label_48adb0:
    // 0x48adb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48ADB0u;
    {
        const bool branch_taken_0x48adb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ADB0u;
        // 0x48adb4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48adb0) {
            ctx->pc = 0x48ADCCu;
            goto label_48adcc;
        }
    }
    ctx->pc = 0x48ADB8u;
label_48adb8:
    // 0x48adb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48ADB8u;
    {
        const bool branch_taken_0x48adb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ADB8u;
        // 0x48adbc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48adb8) {
            ctx->pc = 0x48ADCCu;
            goto label_48adcc;
        }
    }
    ctx->pc = 0x48ADC0u;
label_48adc0:
    // 0x48adc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48ADC0u;
    {
        const bool branch_taken_0x48adc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ADC0u;
        // 0x48adc4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48adc0) {
            ctx->pc = 0x48ADCCu;
            goto label_48adcc;
        }
    }
    ctx->pc = 0x48ADC8u;
label_48adc8:
    // 0x48adc8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x48adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48adcc:
    // 0x48adcc: 0x2682d600  addiu       $v0, $s4, -0x2A00
    ctx->pc = 0x48adccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956544));
    // 0x48add0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x48add0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48add4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48add4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48add8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48add8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48addc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48addcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ade0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48ade0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48ade4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x48ade4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48ade8: 0xa4440050  sh          $a0, 0x50($v0)
    ctx->pc = 0x48ade8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 80), (uint16_t)GPR_U32(ctx, 4));
    // 0x48adec: 0x3e00008  jr          $ra
    ctx->pc = 0x48ADECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ADECu;
        // 0x48adf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48ADECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48ADF4u;
    // 0x48adf4: 0x0  nop
    ctx->pc = 0x48adf4u;
    // NOP
    ctx->pc = 0x48adf8u;
}
