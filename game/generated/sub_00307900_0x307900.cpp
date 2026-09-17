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

// Function: sub_00307900
// Address: 0x307900 - 0x307c10
void sub_00307900_0x307900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307900_0x307900");
#endif

    switch (ctx->pc) {
        case 0x30794cu: goto label_30794c;
        case 0x30798cu: goto label_30798c;
        case 0x3079ccu: goto label_3079cc;
        case 0x307a0cu: goto label_307a0c;
        case 0x307a4cu: goto label_307a4c;
        case 0x307a8cu: goto label_307a8c;
        case 0x307accu: goto label_307acc;
        case 0x307b0cu: goto label_307b0c;
        case 0x307b4cu: goto label_307b4c;
        case 0x307b8cu: goto label_307b8c;
        case 0x307bccu: goto label_307bcc;
        default: break;
    }

    ctx->pc = 0x307900u;

    // 0x307900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x307904: 0x2486004c  addiu       $a2, $a0, 0x4C
    ctx->pc = 0x307904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x307908: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x307908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30790c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x307910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x307910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x307914: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x307914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x307918: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x307918u;
    {
        const bool branch_taken_0x307918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307918u;
        // 0x30791c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307918) {
            ctx->pc = 0x307930u;
            goto label_307930;
        }
    }
    ctx->pc = 0x307920u;
    // 0x307920: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x307920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x307924: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x307924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x307928: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307928u;
    {
        const bool branch_taken_0x307928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307928u;
        // 0x30792c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307928) {
            ctx->pc = 0x30793Cu;
            goto label_30793c;
        }
    }
    ctx->pc = 0x307930u;
label_307930:
    // 0x307930: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x307930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x307934: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x307934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307938: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x307938u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_30793c:
    // 0x30793c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x30793cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x307940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307944: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307944u;
    SET_GPR_U32(ctx, 31, 0x30794Cu);
    ctx->pc = 0x307948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307944u;
    // 0x307948: 0x24a52660  addiu       $a1, $a1, 0x2660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307944u, 0x30794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30794Cu;
label_30794c:
    // 0x30794c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x30794Cu;
    {
        const bool branch_taken_0x30794c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30794c) {
            ctx->pc = 0x307950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30794Cu;
            // 0x307950: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307980u;
            goto label_307980;
        }
    }
    ctx->pc = 0x307954u;
    // 0x307954: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307958: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307958u;
    {
        const bool branch_taken_0x307958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307958) {
            ctx->pc = 0x30795Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307958u;
            // 0x30795c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307980u;
            goto label_307980;
        }
    }
    ctx->pc = 0x307960u;
    // 0x307960: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307960u;
    {
        const bool branch_taken_0x307960 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307960u;
        // 0x307964: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307960) {
            ctx->pc = 0x307970u;
            goto label_307970;
        }
    }
    ctx->pc = 0x307968u;
    // 0x307968: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307968u;
    {
        const bool branch_taken_0x307968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307968u;
        // 0x30796c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307968) {
            ctx->pc = 0x307978u;
            goto label_307978;
        }
    }
    ctx->pc = 0x307970u;
label_307970:
    // 0x307970: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307974: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307978:
    // 0x307978: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x30797c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x30797cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307980:
    // 0x307980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307984: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307984u;
    SET_GPR_U32(ctx, 31, 0x30798Cu);
    ctx->pc = 0x307988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307984u;
    // 0x307988: 0x24a52678  addiu       $a1, $a1, 0x2678 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307984u, 0x30798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30798Cu;
label_30798c:
    // 0x30798c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x30798Cu;
    {
        const bool branch_taken_0x30798c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30798c) {
            ctx->pc = 0x307990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30798Cu;
            // 0x307990: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3079C0u;
            goto label_3079c0;
        }
    }
    ctx->pc = 0x307994u;
    // 0x307994: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307998: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307998u;
    {
        const bool branch_taken_0x307998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307998) {
            ctx->pc = 0x30799Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307998u;
            // 0x30799c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3079C0u;
            goto label_3079c0;
        }
    }
    ctx->pc = 0x3079A0u;
    // 0x3079a0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3079A0u;
    {
        const bool branch_taken_0x3079a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3079A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079A0u;
        // 0x3079a4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3079a0) {
            ctx->pc = 0x3079B0u;
            goto label_3079b0;
        }
    }
    ctx->pc = 0x3079A8u;
    // 0x3079a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3079A8u;
    {
        const bool branch_taken_0x3079a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3079ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079A8u;
        // 0x3079ac: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3079a8) {
            ctx->pc = 0x3079B8u;
            goto label_3079b8;
        }
    }
    ctx->pc = 0x3079B0u;
label_3079b0:
    // 0x3079b0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x3079b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x3079b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3079b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3079b8:
    // 0x3079b8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x3079b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x3079bc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3079bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3079c0:
    // 0x3079c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3079c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3079c4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3079C4u;
    SET_GPR_U32(ctx, 31, 0x3079CCu);
    ctx->pc = 0x3079C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3079C4u;
    // 0x3079c8: 0x24a52788  addiu       $a1, $a1, 0x2788 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3079C4u, 0x3079CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3079CCu;
label_3079cc:
    // 0x3079cc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3079CCu;
    {
        const bool branch_taken_0x3079cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3079cc) {
            ctx->pc = 0x3079D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3079CCu;
            // 0x3079d0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307A00u;
            goto label_307a00;
        }
    }
    ctx->pc = 0x3079D4u;
    // 0x3079d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3079d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3079d8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3079D8u;
    {
        const bool branch_taken_0x3079d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3079d8) {
            ctx->pc = 0x3079DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3079D8u;
            // 0x3079dc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307A00u;
            goto label_307a00;
        }
    }
    ctx->pc = 0x3079E0u;
    // 0x3079e0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3079E0u;
    {
        const bool branch_taken_0x3079e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3079E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079E0u;
        // 0x3079e4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3079e0) {
            ctx->pc = 0x3079F0u;
            goto label_3079f0;
        }
    }
    ctx->pc = 0x3079E8u;
    // 0x3079e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3079E8u;
    {
        const bool branch_taken_0x3079e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3079ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079E8u;
        // 0x3079ec: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3079e8) {
            ctx->pc = 0x3079F8u;
            goto label_3079f8;
        }
    }
    ctx->pc = 0x3079F0u;
label_3079f0:
    // 0x3079f0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x3079f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x3079f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3079f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3079f8:
    // 0x3079f8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x3079f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x3079fc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3079fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307a00:
    // 0x307a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a04: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307A04u;
    SET_GPR_U32(ctx, 31, 0x307A0Cu);
    ctx->pc = 0x307A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307A04u;
    // 0x307a08: 0x24a527a0  addiu       $a1, $a1, 0x27A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307A04u, 0x307A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307A0Cu;
label_307a0c:
    // 0x307a0c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307A0Cu;
    {
        const bool branch_taken_0x307a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307a0c) {
            ctx->pc = 0x307A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307A0Cu;
            // 0x307a10: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307A40u;
            goto label_307a40;
        }
    }
    ctx->pc = 0x307A14u;
    // 0x307a14: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307a18: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307A18u;
    {
        const bool branch_taken_0x307a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307a18) {
            ctx->pc = 0x307A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307A18u;
            // 0x307a1c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307A40u;
            goto label_307a40;
        }
    }
    ctx->pc = 0x307A20u;
    // 0x307a20: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307A20u;
    {
        const bool branch_taken_0x307a20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307A20u;
        // 0x307a24: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a20) {
            ctx->pc = 0x307A30u;
            goto label_307a30;
        }
    }
    ctx->pc = 0x307A28u;
    // 0x307a28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307A28u;
    {
        const bool branch_taken_0x307a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307A28u;
        // 0x307a2c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a28) {
            ctx->pc = 0x307A38u;
            goto label_307a38;
        }
    }
    ctx->pc = 0x307A30u;
label_307a30:
    // 0x307a30: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307a34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307a38:
    // 0x307a38: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307a3c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307a40:
    // 0x307a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a44: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307A44u;
    SET_GPR_U32(ctx, 31, 0x307A4Cu);
    ctx->pc = 0x307A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307A44u;
    // 0x307a48: 0x24a527b8  addiu       $a1, $a1, 0x27B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307A44u, 0x307A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307A4Cu;
label_307a4c:
    // 0x307a4c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307A4Cu;
    {
        const bool branch_taken_0x307a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307a4c) {
            ctx->pc = 0x307A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307A4Cu;
            // 0x307a50: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307A80u;
            goto label_307a80;
        }
    }
    ctx->pc = 0x307A54u;
    // 0x307a54: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307a58: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307A58u;
    {
        const bool branch_taken_0x307a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307a58) {
            ctx->pc = 0x307A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307A58u;
            // 0x307a5c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307A80u;
            goto label_307a80;
        }
    }
    ctx->pc = 0x307A60u;
    // 0x307a60: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307A60u;
    {
        const bool branch_taken_0x307a60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307A60u;
        // 0x307a64: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a60) {
            ctx->pc = 0x307A70u;
            goto label_307a70;
        }
    }
    ctx->pc = 0x307A68u;
    // 0x307a68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307A68u;
    {
        const bool branch_taken_0x307a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307A68u;
        // 0x307a6c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a68) {
            ctx->pc = 0x307A78u;
            goto label_307a78;
        }
    }
    ctx->pc = 0x307A70u;
label_307a70:
    // 0x307a70: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307a74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307a78:
    // 0x307a78: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307a7c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307a80:
    // 0x307a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a84: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307A84u;
    SET_GPR_U32(ctx, 31, 0x307A8Cu);
    ctx->pc = 0x307A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307A84u;
    // 0x307a88: 0x24a527d0  addiu       $a1, $a1, 0x27D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307A84u, 0x307A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307A8Cu;
label_307a8c:
    // 0x307a8c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307A8Cu;
    {
        const bool branch_taken_0x307a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307a8c) {
            ctx->pc = 0x307A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307A8Cu;
            // 0x307a90: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307AC0u;
            goto label_307ac0;
        }
    }
    ctx->pc = 0x307A94u;
    // 0x307a94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307a98: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307A98u;
    {
        const bool branch_taken_0x307a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307a98) {
            ctx->pc = 0x307A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307A98u;
            // 0x307a9c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307AC0u;
            goto label_307ac0;
        }
    }
    ctx->pc = 0x307AA0u;
    // 0x307aa0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307AA0u;
    {
        const bool branch_taken_0x307aa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307AA0u;
        // 0x307aa4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307aa0) {
            ctx->pc = 0x307AB0u;
            goto label_307ab0;
        }
    }
    ctx->pc = 0x307AA8u;
    // 0x307aa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307AA8u;
    {
        const bool branch_taken_0x307aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307AA8u;
        // 0x307aac: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307aa8) {
            ctx->pc = 0x307AB8u;
            goto label_307ab8;
        }
    }
    ctx->pc = 0x307AB0u;
label_307ab0:
    // 0x307ab0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307ab4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307ab8:
    // 0x307ab8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307abc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307ac0:
    // 0x307ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ac4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307AC4u;
    SET_GPR_U32(ctx, 31, 0x307ACCu);
    ctx->pc = 0x307AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307AC4u;
    // 0x307ac8: 0x24a527e8  addiu       $a1, $a1, 0x27E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307AC4u, 0x307ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307ACCu;
label_307acc:
    // 0x307acc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307ACCu;
    {
        const bool branch_taken_0x307acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307acc) {
            ctx->pc = 0x307AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307ACCu;
            // 0x307ad0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307B00u;
            goto label_307b00;
        }
    }
    ctx->pc = 0x307AD4u;
    // 0x307ad4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307ad8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307AD8u;
    {
        const bool branch_taken_0x307ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ad8) {
            ctx->pc = 0x307ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307AD8u;
            // 0x307adc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307B00u;
            goto label_307b00;
        }
    }
    ctx->pc = 0x307AE0u;
    // 0x307ae0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307AE0u;
    {
        const bool branch_taken_0x307ae0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307AE0u;
        // 0x307ae4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ae0) {
            ctx->pc = 0x307AF0u;
            goto label_307af0;
        }
    }
    ctx->pc = 0x307AE8u;
    // 0x307ae8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307AE8u;
    {
        const bool branch_taken_0x307ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307AE8u;
        // 0x307aec: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ae8) {
            ctx->pc = 0x307AF8u;
            goto label_307af8;
        }
    }
    ctx->pc = 0x307AF0u;
label_307af0:
    // 0x307af0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307af4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307af8:
    // 0x307af8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307afc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307b00:
    // 0x307b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b04: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307B04u;
    SET_GPR_U32(ctx, 31, 0x307B0Cu);
    ctx->pc = 0x307B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B04u;
    // 0x307b08: 0x24a52648  addiu       $a1, $a1, 0x2648 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307B04u, 0x307B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B0Cu;
label_307b0c:
    // 0x307b0c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307B0Cu;
    {
        const bool branch_taken_0x307b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307b0c) {
            ctx->pc = 0x307B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307B0Cu;
            // 0x307b10: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307B40u;
            goto label_307b40;
        }
    }
    ctx->pc = 0x307B14u;
    // 0x307b14: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307b18: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307B18u;
    {
        const bool branch_taken_0x307b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307b18) {
            ctx->pc = 0x307B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307B18u;
            // 0x307b1c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307B40u;
            goto label_307b40;
        }
    }
    ctx->pc = 0x307B20u;
    // 0x307b20: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307B20u;
    {
        const bool branch_taken_0x307b20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B20u;
        // 0x307b24: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307b20) {
            ctx->pc = 0x307B30u;
            goto label_307b30;
        }
    }
    ctx->pc = 0x307B28u;
    // 0x307b28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307B28u;
    {
        const bool branch_taken_0x307b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B28u;
        // 0x307b2c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307b28) {
            ctx->pc = 0x307B38u;
            goto label_307b38;
        }
    }
    ctx->pc = 0x307B30u;
label_307b30:
    // 0x307b30: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307b34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307b38:
    // 0x307b38: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307b3c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307b40:
    // 0x307b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b44: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307B44u;
    SET_GPR_U32(ctx, 31, 0x307B4Cu);
    ctx->pc = 0x307B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B44u;
    // 0x307b48: 0x24a52800  addiu       $a1, $a1, 0x2800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307B44u, 0x307B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B4Cu;
label_307b4c:
    // 0x307b4c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307B4Cu;
    {
        const bool branch_taken_0x307b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307b4c) {
            ctx->pc = 0x307B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307B4Cu;
            // 0x307b50: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307B80u;
            goto label_307b80;
        }
    }
    ctx->pc = 0x307B54u;
    // 0x307b54: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307b58: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307B58u;
    {
        const bool branch_taken_0x307b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307b58) {
            ctx->pc = 0x307B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307B58u;
            // 0x307b5c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307B80u;
            goto label_307b80;
        }
    }
    ctx->pc = 0x307B60u;
    // 0x307b60: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307B60u;
    {
        const bool branch_taken_0x307b60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B60u;
        // 0x307b64: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307b60) {
            ctx->pc = 0x307B70u;
            goto label_307b70;
        }
    }
    ctx->pc = 0x307B68u;
    // 0x307b68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307B68u;
    {
        const bool branch_taken_0x307b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B68u;
        // 0x307b6c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307b68) {
            ctx->pc = 0x307B78u;
            goto label_307b78;
        }
    }
    ctx->pc = 0x307B70u;
label_307b70:
    // 0x307b70: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307b74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307b78:
    // 0x307b78: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307b7c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307b80:
    // 0x307b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b84: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307B84u;
    SET_GPR_U32(ctx, 31, 0x307B8Cu);
    ctx->pc = 0x307B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B84u;
    // 0x307b88: 0x24a52690  addiu       $a1, $a1, 0x2690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307B84u, 0x307B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B8Cu;
label_307b8c:
    // 0x307b8c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307B8Cu;
    {
        const bool branch_taken_0x307b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307b8c) {
            ctx->pc = 0x307B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307B8Cu;
            // 0x307b90: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307BC0u;
            goto label_307bc0;
        }
    }
    ctx->pc = 0x307B94u;
    // 0x307b94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307b98: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307B98u;
    {
        const bool branch_taken_0x307b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307b98) {
            ctx->pc = 0x307B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307B98u;
            // 0x307b9c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307BC0u;
            goto label_307bc0;
        }
    }
    ctx->pc = 0x307BA0u;
    // 0x307ba0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307BA0u;
    {
        const bool branch_taken_0x307ba0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BA0u;
        // 0x307ba4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ba0) {
            ctx->pc = 0x307BB0u;
            goto label_307bb0;
        }
    }
    ctx->pc = 0x307BA8u;
    // 0x307ba8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307BA8u;
    {
        const bool branch_taken_0x307ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BA8u;
        // 0x307bac: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ba8) {
            ctx->pc = 0x307BB8u;
            goto label_307bb8;
        }
    }
    ctx->pc = 0x307BB0u;
label_307bb0:
    // 0x307bb0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307bb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307bb8:
    // 0x307bb8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307bbc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307bc0:
    // 0x307bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307bc4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307BC4u;
    SET_GPR_U32(ctx, 31, 0x307BCCu);
    ctx->pc = 0x307BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307BC4u;
    // 0x307bc8: 0x24a526b0  addiu       $a1, $a1, 0x26B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307BC4u, 0x307BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307BCCu;
label_307bcc:
    // 0x307bcc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x307BCCu;
    {
        const bool branch_taken_0x307bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BCCu;
        // 0x307bd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307bcc) {
            ctx->pc = 0x307C00u;
            goto label_307c00;
        }
    }
    ctx->pc = 0x307BD4u;
    // 0x307bd4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307bd8: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x307BD8u;
    {
        const bool branch_taken_0x307bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307bd8) {
            ctx->pc = 0x307BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307BD8u;
            // 0x307bdc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307C04u;
            goto label_307c04;
        }
    }
    ctx->pc = 0x307BE0u;
    // 0x307be0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307BE0u;
    {
        const bool branch_taken_0x307be0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BE0u;
        // 0x307be4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307be0) {
            ctx->pc = 0x307BF0u;
            goto label_307bf0;
        }
    }
    ctx->pc = 0x307BE8u;
    // 0x307be8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307BE8u;
    {
        const bool branch_taken_0x307be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BE8u;
        // 0x307bec: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307be8) {
            ctx->pc = 0x307BF8u;
            goto label_307bf8;
        }
    }
    ctx->pc = 0x307BF0u;
label_307bf0:
    // 0x307bf0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307bf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307bf8:
    // 0x307bf8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x307bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_307c00:
    // 0x307c00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x307c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_307c04:
    // 0x307c04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x307c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307c08: 0x3e00008  jr          $ra
    ctx->pc = 0x307C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C08u;
        // 0x307c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307C10u;
}
