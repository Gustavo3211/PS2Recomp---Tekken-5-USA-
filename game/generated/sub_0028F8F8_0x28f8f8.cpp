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

// Function: sub_0028F8F8
// Address: 0x28f8f8 - 0x28fd30
void sub_0028F8F8_0x28f8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F8F8_0x28f8f8");
#endif

    switch (ctx->pc) {
        case 0x28f934u: goto label_28f934;
        case 0x28f964u: goto label_28f964;
        case 0x28f994u: goto label_28f994;
        case 0x28f9c4u: goto label_28f9c4;
        case 0x28fa00u: goto label_28fa00;
        case 0x28fa14u: goto label_28fa14;
        case 0x28fa24u: goto label_28fa24;
        case 0x28fa60u: goto label_28fa60;
        case 0x28fa78u: goto label_28fa78;
        case 0x28fac4u: goto label_28fac4;
        case 0x28fad4u: goto label_28fad4;
        case 0x28fae8u: goto label_28fae8;
        case 0x28faf8u: goto label_28faf8;
        case 0x28fb1cu: goto label_28fb1c;
        case 0x28fb48u: goto label_28fb48;
        case 0x28fb58u: goto label_28fb58;
        case 0x28fb80u: goto label_28fb80;
        case 0x28fb98u: goto label_28fb98;
        case 0x28fbacu: goto label_28fbac;
        case 0x28fbc0u: goto label_28fbc0;
        case 0x28fbe8u: goto label_28fbe8;
        case 0x28fc10u: goto label_28fc10;
        case 0x28fc28u: goto label_28fc28;
        case 0x28fc30u: goto label_28fc30;
        case 0x28fc90u: goto label_28fc90;
        case 0x28fca0u: goto label_28fca0;
        case 0x28fcf4u: goto label_28fcf4;
        default: break;
    }

    ctx->pc = 0x28f8f8u;

    // 0x28f8f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28f8fc: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28f8fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28f900: 0x2445a8b0  addiu       $a1, $v0, -0x5750
    ctx->pc = 0x28f900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944944));
    // 0x28f904: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x28f904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x28f908: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x28f908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x28f90c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x28f90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x28f910: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x28f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x28f914: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28f914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28f918: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x28f918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x28f91c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x28f91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x28f920: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x28f920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x28f924: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x28f924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x28f928: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x28f928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x28f92c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F92Cu;
    SET_GPR_U32(ctx, 31, 0x28F934u);
    ctx->pc = 0x28F930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F92Cu;
    // 0x28f930: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F92Cu, 0x28F934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F934u;
label_28f934:
    // 0x28f934: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F934u;
    {
        const bool branch_taken_0x28f934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F934u;
        // 0x28f938: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f934) {
            ctx->pc = 0x28F958u;
            goto label_28f958;
        }
    }
    ctx->pc = 0x28F93Cu;
    // 0x28f93c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f940: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F940u;
    {
        const bool branch_taken_0x28f940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F940u;
        // 0x28f944: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f940) {
            ctx->pc = 0x28F954u;
            goto label_28f954;
        }
    }
    ctx->pc = 0x28F948u;
    // 0x28f948: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f94c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f950: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28f954:
    // 0x28f954: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28f954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_28f958:
    // 0x28f958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f95c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F95Cu;
    SET_GPR_U32(ctx, 31, 0x28F964u);
    ctx->pc = 0x28F960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F95Cu;
    // 0x28f960: 0x2465a900  addiu       $a1, $v1, -0x5700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F95Cu, 0x28F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F964u;
label_28f964:
    // 0x28f964: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F964u;
    {
        const bool branch_taken_0x28f964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F964u;
        // 0x28f968: 0x3c1e0048  lui         $fp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f964) {
            ctx->pc = 0x28F988u;
            goto label_28f988;
        }
    }
    ctx->pc = 0x28F96Cu;
    // 0x28f96c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f970: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F970u;
    {
        const bool branch_taken_0x28f970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F970u;
        // 0x28f974: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f970) {
            ctx->pc = 0x28F988u;
            goto label_28f988;
        }
    }
    ctx->pc = 0x28F978u;
    // 0x28f978: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f97c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f980: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28f984: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x28f984u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
label_28f988:
    // 0x28f988: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f98c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F98Cu;
    SET_GPR_U32(ctx, 31, 0x28F994u);
    ctx->pc = 0x28F990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F98Cu;
    // 0x28f990: 0x27c5a8d8  addiu       $a1, $fp, -0x5728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294944984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F98Cu, 0x28F994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F994u;
label_28f994:
    // 0x28f994: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F994u;
    {
        const bool branch_taken_0x28f994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F994u;
        // 0x28f998: 0x3c170048  lui         $s7, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f994) {
            ctx->pc = 0x28F9B8u;
            goto label_28f9b8;
        }
    }
    ctx->pc = 0x28F99Cu;
    // 0x28f99c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f9a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F9A0u;
    {
        const bool branch_taken_0x28f9a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9A0u;
        // 0x28f9a4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9a0) {
            ctx->pc = 0x28F9B8u;
            goto label_28f9b8;
        }
    }
    ctx->pc = 0x28F9A8u;
    // 0x28f9a8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f9ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f9b0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28f9b4: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x28f9b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
label_28f9b8:
    // 0x28f9b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9bc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F9BCu;
    SET_GPR_U32(ctx, 31, 0x28F9C4u);
    ctx->pc = 0x28F9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F9BCu;
    // 0x28f9c0: 0x26e5a928  addiu       $a1, $s7, -0x56D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294945064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F9BCu, 0x28F9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9C4u;
label_28f9c4:
    // 0x28f9c4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F9C4u;
    {
        const bool branch_taken_0x28f9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f9c4) {
            ctx->pc = 0x28F9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F9C4u;
            // 0x28f9c8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F9E8u;
            goto label_28f9e8;
        }
    }
    ctx->pc = 0x28F9CCu;
    // 0x28f9cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f9d0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F9D0u;
    {
        const bool branch_taken_0x28f9d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9D0u;
        // 0x28f9d4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9d0) {
            ctx->pc = 0x28F9E4u;
            goto label_28f9e4;
        }
    }
    ctx->pc = 0x28F9D8u;
    // 0x28f9d8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f9dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f9e0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28f9e4:
    // 0x28f9e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_28f9e8:
    // 0x28f9e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28f9e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9ec: 0x2455aec0  addiu       $s5, $v0, -0x5140
    ctx->pc = 0x28f9ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946496));
    // 0x28f9f0: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x28f9f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28f9f4: 0x26b60004  addiu       $s6, $s5, 0x4
    ctx->pc = 0x28f9f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x28f9f8: 0x1380c0  sll         $s0, $s3, 3
    ctx->pc = 0x28f9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x28f9fc: 0x0  nop
    ctx->pc = 0x28f9fcu;
    // NOP
label_28fa00:
    // 0x28fa00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28fa00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa04: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x28fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x28fa08: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x28fa08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x28fa0c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28FA0Cu;
    SET_GPR_U32(ctx, 31, 0x28FA14u);
    ctx->pc = 0x28FA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA0Cu;
    // 0x28fa10: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28FA0Cu, 0x28FA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA14u;
label_28fa14:
    // 0x28fa14: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x28fa14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28fa18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28fa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa1c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28FA1Cu;
    SET_GPR_U32(ctx, 31, 0x28FA24u);
    ctx->pc = 0x28FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA1Cu;
    // 0x28fa20: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28FA1Cu, 0x28FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA24u;
label_28fa24:
    // 0x28fa24: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FA24u;
    {
        const bool branch_taken_0x28fa24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA24u;
        // 0x28fa28: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa24) {
            ctx->pc = 0x28FA38u;
            goto label_28fa38;
        }
    }
    ctx->pc = 0x28FA2Cu;
    // 0x28fa2c: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x28fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x28fa30: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x28fa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x28fa34: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x28fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_28fa38:
    // 0x28fa38: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FA38u;
    {
        const bool branch_taken_0x28fa38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA38u;
        // 0x28fa3c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa38) {
            ctx->pc = 0x28FA4Cu;
            goto label_28fa4c;
        }
    }
    ctx->pc = 0x28FA40u;
    // 0x28fa40: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28fa44: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x28fa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x28fa48: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28fa48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_28fa4c:
    // 0x28fa4c: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x28fa4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x28fa50: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x28FA50u;
    {
        const bool branch_taken_0x28fa50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA50u;
        // 0x28fa54: 0x1380c0  sll         $s0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa50) {
            ctx->pc = 0x28FA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28fa00;
        }
    }
    ctx->pc = 0x28FA58u;
    // 0x28fa58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28fa58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa5c: 0x0  nop
    ctx->pc = 0x28fa5cu;
    // NOP
label_28fa60:
    // 0x28fa60: 0x56600002  bnel        $s3, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x28FA60u;
    {
        const bool branch_taken_0x28fa60 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fa60) {
            ctx->pc = 0x28FA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FA60u;
            // 0x28fa64: 0x8e500154  lw          $s0, 0x154($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FA6Cu;
            goto label_28fa6c;
        }
    }
    ctx->pc = 0x28FA68u;
    // 0x28fa68: 0x8e500150  lw          $s0, 0x150($s2)
    ctx->pc = 0x28fa68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_28fa6c:
    // 0x28fa6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28fa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa70: 0xc0a3c32  jal         func_28F0C8
    ctx->pc = 0x28FA70u;
    SET_GPR_U32(ctx, 31, 0x28FA78u);
    ctx->pc = 0x28FA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA70u;
    // 0x28fa74: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F0C8u, 0x28FA70u, 0x28FA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA78u;
label_28fa78:
    // 0x28fa78: 0x82020020  lb          $v0, 0x20($s0)
    ctx->pc = 0x28fa78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x28fa7c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x28fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x28fa80: 0x2c430010  sltiu       $v1, $v0, 0x10
    ctx->pc = 0x28fa80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x28fa84: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x28FA84u;
    {
        const bool branch_taken_0x28fa84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA84u;
        // 0x28fa88: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa84) {
            ctx->pc = 0x28FB20u;
            goto label_28fb20;
        }
    }
    ctx->pc = 0x28FA8Cu;
    // 0x28fa8c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28fa90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fa94: 0x8c63aa60  lw          $v1, -0x55A0($v1)
    ctx->pc = 0x28fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945376)));
    // 0x28fa98: 0x600008  jr          $v1
    ctx->pc = 0x28FA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28FAA0u: goto label_28faa0;
            case 0x28FAE0u: goto label_28fae0;
            case 0x28FB00u: goto label_28fb00;
            case 0x28FB14u: goto label_28fb14;
            case 0x28FB20u: goto label_28fb20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FA98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28FAA0u;
label_28faa0:
    // 0x28faa0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28faa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28faa8: 0x8c4488a8  lw          $a0, -0x7758($v0)
    ctx->pc = 0x28faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x28faac: 0x2631804  sllv        $v1, $v1, $s3
    ctx->pc = 0x28faacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x28fab0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x28fab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x28fab4: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28FAB4u;
    {
        const bool branch_taken_0x28fab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fab4) {
            ctx->pc = 0x28FB20u;
            goto label_28fb20;
        }
    }
    ctx->pc = 0x28FABCu;
    // 0x28fabc: 0xc092ebe  jal         func_24BAF8
    ctx->pc = 0x28FABCu;
    SET_GPR_U32(ctx, 31, 0x28FAC4u);
    ctx->pc = 0x28FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FABCu;
    // 0x28fac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BAF8u, 0x28FABCu, 0x28FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAC4u;
label_28fac4:
    // 0x28fac4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28FAC4u;
    {
        const bool branch_taken_0x28fac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fac4) {
            ctx->pc = 0x28FB20u;
            goto label_28fb20;
        }
    }
    ctx->pc = 0x28FACCu;
    // 0x28facc: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x28FACCu;
    SET_GPR_U32(ctx, 31, 0x28FAD4u);
    ctx->pc = 0x28FAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FACCu;
    // 0x28fad0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x28FACCu, 0x28FAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAD4u;
label_28fad4:
    // 0x28fad4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28FAD4u;
    {
        const bool branch_taken_0x28fad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FAD4u;
        // 0x28fad8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fad4) {
            ctx->pc = 0x28FB20u;
            goto label_28fb20;
        }
    }
    ctx->pc = 0x28FADCu;
    // 0x28fadc: 0x0  nop
    ctx->pc = 0x28fadcu;
    // NOP
label_28fae0:
    // 0x28fae0: 0xc092ebe  jal         func_24BAF8
    ctx->pc = 0x28FAE0u;
    SET_GPR_U32(ctx, 31, 0x28FAE8u);
    ctx->pc = 0x28FAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAE0u;
    // 0x28fae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BAF8u, 0x28FAE0u, 0x28FAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAE8u;
label_28fae8:
    // 0x28fae8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28FAE8u;
    {
        const bool branch_taken_0x28fae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fae8) {
            ctx->pc = 0x28FB20u;
            goto label_28fb20;
        }
    }
    ctx->pc = 0x28FAF0u;
    // 0x28faf0: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x28FAF0u;
    SET_GPR_U32(ctx, 31, 0x28FAF8u);
    ctx->pc = 0x28FAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAF0u;
    // 0x28faf4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x28FAF0u, 0x28FAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAF8u;
label_28faf8:
    // 0x28faf8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28FAF8u;
    {
        const bool branch_taken_0x28faf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FAF8u;
        // 0x28fafc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28faf8) {
            ctx->pc = 0x28FB20u;
            goto label_28fb20;
        }
    }
    ctx->pc = 0x28FB00u;
label_28fb00:
    // 0x28fb00: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28fb04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fb08: 0x904383ce  lbu         $v1, -0x7C32($v0)
    ctx->pc = 0x28fb08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3A83CEu));
    // 0x28fb0c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FB0Cu;
    {
        const bool branch_taken_0x28fb0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x28fb0c) {
            ctx->pc = 0x28FB20u;
            goto label_28fb20;
        }
    }
    ctx->pc = 0x28FB14u;
label_28fb14:
    // 0x28fb14: 0xc086408  jal         func_219020
    ctx->pc = 0x28FB14u;
    SET_GPR_U32(ctx, 31, 0x28FB1Cu);
    ctx->pc = 0x28FB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB14u;
    // 0x28fb18: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219020u, 0x28FB14u, 0x28FB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB1Cu;
label_28fb1c:
    // 0x28fb1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28fb1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28fb20:
    // 0x28fb20: 0x6200074  bltz        $s1, . + 4 + (0x74 << 2)
    ctx->pc = 0x28FB20u;
    {
        const bool branch_taken_0x28fb20 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x28FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB20u;
        // 0x28fb24: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb20) {
            ctx->pc = 0x28FCF4u;
            goto label_28fcf4;
        }
    }
    ctx->pc = 0x28FB28u;
    // 0x28fb28: 0x8c4283c0  lw          $v0, -0x7C40($v0)
    ctx->pc = 0x28fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935488)));
    // 0x28fb2c: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x28fb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x28fb30: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x28FB30u;
    {
        const bool branch_taken_0x28fb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB30u;
        // 0x28fb34: 0x38420007  xori        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb30) {
            ctx->pc = 0x28FCA8u;
            goto label_28fca8;
        }
    }
    ctx->pc = 0x28FB38u;
    // 0x28fb38: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x28FB38u;
    {
        const bool branch_taken_0x28fb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fb38) {
            ctx->pc = 0x28FCA8u;
            goto label_28fca8;
        }
    }
    ctx->pc = 0x28FB40u;
    // 0x28fb40: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x28FB40u;
    SET_GPR_U32(ctx, 31, 0x28FB48u);
    ctx->pc = 0x28FB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB40u;
    // 0x28fb44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x28FB40u, 0x28FB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB48u;
label_28fb48:
    // 0x28fb48: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x28FB48u;
    {
        const bool branch_taken_0x28fb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fb48) {
            ctx->pc = 0x28FCA8u;
            goto label_28fca8;
        }
    }
    ctx->pc = 0x28FB50u;
    // 0x28fb50: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x28FB50u;
    SET_GPR_U32(ctx, 31, 0x28FB58u);
    ctx->pc = 0x28FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB50u;
    // 0x28fb54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x28FB50u, 0x28FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB58u;
label_28fb58:
    // 0x28fb58: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FB58u;
    {
        const bool branch_taken_0x28fb58 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB58u;
        // 0x28fb5c: 0x2b02b  sltu        $s6, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb58) {
            ctx->pc = 0x28FB70u;
            goto label_28fb70;
        }
    }
    ctx->pc = 0x28FB60u;
    // 0x28fb60: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28fb64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28fb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28FB68u;
    {
        const bool branch_taken_0x28fb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB68u;
        // 0x28fb6c: 0x2445a8b0  addiu       $a1, $v0, -0x5750 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb68) {
            ctx->pc = 0x28FB78u;
            goto label_28fb78;
        }
    }
    ctx->pc = 0x28FB70u;
label_28fb70:
    // 0x28fb70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28fb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb74: 0x27c5a8d8  addiu       $a1, $fp, -0x5728
    ctx->pc = 0x28fb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294944984));
label_28fb78:
    // 0x28fb78: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28FB78u;
    SET_GPR_U32(ctx, 31, 0x28FB80u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28FB78u, 0x28FB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB80u;
label_28fb80:
    // 0x28fb80: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x28FB80u;
    {
        const bool branch_taken_0x28fb80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB80u;
        // 0x28fb84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb80) {
            ctx->pc = 0x28FBA0u;
            goto label_28fba0;
        }
    }
    ctx->pc = 0x28FB88u;
    // 0x28fb88: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28fb8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28fb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb90: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28FB90u;
    SET_GPR_U32(ctx, 31, 0x28FB98u);
    ctx->pc = 0x28FB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB90u;
    // 0x28fb94: 0x2465a900  addiu       $a1, $v1, -0x5700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28FB90u, 0x28FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB98u;
label_28fb98:
    // 0x28fb98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28FB98u;
    {
        const bool branch_taken_0x28fb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB98u;
        // 0x28fb9c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb98) {
            ctx->pc = 0x28FBB0u;
            goto label_28fbb0;
        }
    }
    ctx->pc = 0x28FBA0u;
label_28fba0:
    // 0x28fba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28fba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fba4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28FBA4u;
    SET_GPR_U32(ctx, 31, 0x28FBACu);
    ctx->pc = 0x28FBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBA4u;
    // 0x28fba8: 0x26e5a928  addiu       $a1, $s7, -0x56D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294945064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28FBA4u, 0x28FBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FBACu;
label_28fbac:
    // 0x28fbac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_28fbb0:
    // 0x28fbb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28fbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fbb4: 0x2454aec0  addiu       $s4, $v0, -0x5140
    ctx->pc = 0x28fbb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946496));
    // 0x28fbb8: 0x26950004  addiu       $s5, $s4, 0x4
    ctx->pc = 0x28fbb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x28fbbc: 0x0  nop
    ctx->pc = 0x28fbbcu;
    // NOP
label_28fbc0:
    // 0x28fbc0: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FBC0u;
    {
        const bool branch_taken_0x28fbc0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBC0u;
        // 0x28fbc4: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fbc0) {
            ctx->pc = 0x28FBD8u;
            goto label_28fbd8;
        }
    }
    ctx->pc = 0x28FBC8u;
    // 0x28fbc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28fbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fbcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28FBCCu;
    {
        const bool branch_taken_0x28fbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBCCu;
        // 0x28fbd0: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fbcc) {
            ctx->pc = 0x28FBE0u;
            goto label_28fbe0;
        }
    }
    ctx->pc = 0x28FBD4u;
    // 0x28fbd4: 0x0  nop
    ctx->pc = 0x28fbd4u;
    // NOP
label_28fbd8:
    // 0x28fbd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28fbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fbdc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x28fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_28fbe0:
    // 0x28fbe0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28FBE0u;
    SET_GPR_U32(ctx, 31, 0x28FBE8u);
    ctx->pc = 0x28FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBE0u;
    // 0x28fbe4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28FBE0u, 0x28FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FBE8u;
label_28fbe8:
    // 0x28fbe8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x28fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28fbec: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x28fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x28fbf0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28fbf4: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x28fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x28fbf8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28fbfc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FBFCu;
    {
        const bool branch_taken_0x28fbfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fbfc) {
            ctx->pc = 0x28FC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FBFCu;
            // 0x28fc00: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FC14u;
            goto label_28fc14;
        }
    }
    ctx->pc = 0x28FC04u;
    // 0x28fc04: 0xc64c0158  lwc1        $f12, 0x158($s2)
    ctx->pc = 0x28fc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28fc08: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28FC08u;
    SET_GPR_U32(ctx, 31, 0x28FC10u);
    ctx->pc = 0x28FC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC08u;
    // 0x28fc0c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28FC08u, 0x28FC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC10u;
label_28fc10:
    // 0x28fc10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28fc10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28fc14:
    // 0x28fc14: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x28fc14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x28fc18: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x28FC18u;
    {
        const bool branch_taken_0x28fc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fc18) {
            ctx->pc = 0x28FBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28fbc0;
        }
    }
    ctx->pc = 0x28FC20u;
    // 0x28fc20: 0xc0b2304  jal         func_2C8C10
    ctx->pc = 0x28FC20u;
    SET_GPR_U32(ctx, 31, 0x28FC28u);
    ctx->pc = 0x28FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC20u;
    // 0x28fc24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8C10u, 0x28FC20u, 0x28FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC28u;
label_28fc28:
    // 0x28fc28: 0xc0b2316  jal         func_2C8C58
    ctx->pc = 0x28FC28u;
    SET_GPR_U32(ctx, 31, 0x28FC30u);
    ctx->pc = 0x28FC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC28u;
    // 0x28fc2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8C58u, 0x28FC28u, 0x28FC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC30u;
label_28fc30:
    // 0x28fc30: 0xc6410158  lwc1        $f1, 0x158($s2)
    ctx->pc = 0x28fc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fc34: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x28fc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x28fc38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fc3c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x28fc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x28fc40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28fc40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28fc44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28fc44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28fc48: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x28fc48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fc4c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fc4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28fc50: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x28fc50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x28fc54: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x28FC54u;
    {
        const bool branch_taken_0x28fc54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC54u;
        // 0x28fc58: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc54) {
            ctx->pc = 0x28FC74u;
            goto label_28fc74;
        }
    }
    ctx->pc = 0x28FC5Cu;
    // 0x28fc5c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28fc5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x28fc60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28fc64: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fc64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28fc68: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x28fc68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x28fc6c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x28fc6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x28fc70: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x28fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_28fc74:
    // 0x28fc74: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x28fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x28fc78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28fc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x28fc7c: 0x12c0001d  beqz        $s6, . + 4 + (0x1D << 2)
    ctx->pc = 0x28FC7Cu;
    {
        const bool branch_taken_0x28fc7c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC7Cu;
        // 0x28fc80: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc7c) {
            ctx->pc = 0x28FCF4u;
            goto label_28fcf4;
        }
    }
    ctx->pc = 0x28FC84u;
    // 0x28fc84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28fc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc88: 0xc0a650c  jal         func_299430
    ctx->pc = 0x28FC88u;
    SET_GPR_U32(ctx, 31, 0x28FC90u);
    ctx->pc = 0x28FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC88u;
    // 0x28fc8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299430u, 0x28FC88u, 0x28FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC90u;
label_28fc90:
    // 0x28fc90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28fc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28fc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc98: 0xc0a64de  jal         func_299378
    ctx->pc = 0x28FC98u;
    SET_GPR_U32(ctx, 31, 0x28FCA0u);
    ctx->pc = 0x28FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC98u;
    // 0x28fc9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299378u, 0x28FC98u, 0x28FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCA0u;
label_28fca0:
    // 0x28fca0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28FCA0u;
    {
        const bool branch_taken_0x28fca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCA0u;
        // 0x28fca4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fca0) {
            ctx->pc = 0x28FCF8u;
            goto label_28fcf8;
        }
    }
    ctx->pc = 0x28FCA8u;
label_28fca8:
    // 0x28fca8: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x28FCA8u;
    {
        const bool branch_taken_0x28fca8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCA8u;
        // 0x28fcac: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fca8) {
            ctx->pc = 0x28FCC8u;
            goto label_28fcc8;
        }
    }
    ctx->pc = 0x28FCB0u;
    // 0x28fcb0: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x28fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x28fcb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fcb8: 0x8c637270  lw          $v1, 0x7270($v1)
    ctx->pc = 0x28fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29296)));
    // 0x28fcbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28FCBCu;
    {
        const bool branch_taken_0x28fcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fcbc) {
            ctx->pc = 0x28FCD4u;
            goto label_28fcd4;
        }
    }
    ctx->pc = 0x28FCC4u;
    // 0x28fcc4: 0x0  nop
    ctx->pc = 0x28fcc4u;
    // NOP
label_28fcc8:
    // 0x28fcc8: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x28fcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x28fccc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fcd0: 0x8c637274  lw          $v1, 0x7274($v1)
    ctx->pc = 0x28fcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29300)));
label_28fcd4:
    // 0x28fcd4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28FCD4u;
    {
        const bool branch_taken_0x28fcd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCD4u;
        // 0x28fcd8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fcd4) {
            ctx->pc = 0x28FCF4u;
            goto label_28fcf4;
        }
    }
    ctx->pc = 0x28FCDCu;
    // 0x28fcdc: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28fce0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x28fce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28fce4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28fce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28fce8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28fce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x28fcec: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28FCECu;
    SET_GPR_U32(ctx, 31, 0x28FCF4u);
    ctx->pc = 0x28FCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FCECu;
    // 0x28fcf0: 0xc64c0158  lwc1        $f12, 0x158($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28FCECu, 0x28FCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCF4u;
label_28fcf4:
    // 0x28fcf4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28fcf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_28fcf8:
    // 0x28fcf8: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x28fcf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28fcfc: 0x1440ff58  bnez        $v0, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x28FCFCu;
    {
        const bool branch_taken_0x28fcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCFCu;
        // 0x28fd00: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fcfc) {
            ctx->pc = 0x28FA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28fa60;
        }
    }
    ctx->pc = 0x28FD04u;
    // 0x28fd04: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x28fd04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28fd08: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x28fd08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28fd0c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x28fd0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28fd10: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28fd10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28fd14: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x28fd14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28fd18: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x28fd18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28fd1c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x28fd1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28fd20: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x28fd20u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28fd24: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x28fd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x28fd28: 0x3e00008  jr          $ra
    ctx->pc = 0x28FD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD28u;
        // 0x28fd2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FD30u;
}
