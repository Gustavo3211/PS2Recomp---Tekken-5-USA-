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

// Function: sub_00375510
// Address: 0x375510 - 0x375630
void sub_00375510_0x375510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375510_0x375510");
#endif

    switch (ctx->pc) {
        case 0x375568u: goto label_375568;
        case 0x3755a0u: goto label_3755a0;
        case 0x3755d8u: goto label_3755d8;
        case 0x375608u: goto label_375608;
        default: break;
    }

    ctx->pc = 0x375510u;

    // 0x375510: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375514: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375518: 0x24422130  addiu       $v0, $v0, 0x2130
    ctx->pc = 0x375518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8496));
    // 0x37551c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x37551cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x375520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375524: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x375524u;
    {
        const bool branch_taken_0x375524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x375528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375524u;
        // 0x375528: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375524) {
            ctx->pc = 0x375538u;
            goto label_375538;
        }
    }
    ctx->pc = 0x37552Cu;
    // 0x37552c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37552cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375530: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x375530u;
    ctx->pc = 0x375534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375530u;
    // 0x375534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x375538u;
label_375538:
    // 0x375538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37553c: 0x3e00008  jr          $ra
    ctx->pc = 0x37553Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37553Cu;
        // 0x375540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37553Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375544u;
    // 0x375544: 0x0  nop
    ctx->pc = 0x375544u;
    // NOP
    // 0x375548: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x375548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37554c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37554cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375550: 0x24422080  addiu       $v0, $v0, 0x2080
    ctx->pc = 0x375550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8320));
    // 0x375554: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x375554u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x375558: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x375558u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x37555c: 0x24e20030  addiu       $v0, $a3, 0x30
    ctx->pc = 0x37555cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x375560: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375564: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x375564u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_375568:
    // 0x375568: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x375568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x37556c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x37556cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x375570: 0x0  nop
    ctx->pc = 0x375570u;
    // NOP
    // 0x375574: 0x0  nop
    ctx->pc = 0x375574u;
    // NOP
    // 0x375578: 0x0  nop
    ctx->pc = 0x375578u;
    // NOP
    // 0x37557c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x37557Cu;
    {
        const bool branch_taken_0x37557c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x375580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37557Cu;
        // 0x375580: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37557c) {
            ctx->pc = 0x375568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375568;
        }
    }
    ctx->pc = 0x375584u;
    // 0x375584: 0x24ea0004  addiu       $t2, $a3, 0x4
    ctx->pc = 0x375584u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x375588: 0x24eb0008  addiu       $t3, $a3, 0x8
    ctx->pc = 0x375588u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x37558c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37558cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375590: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x375590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375594: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x375594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375598: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x375598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x37559c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37559cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3755a0:
    // 0x3755a0: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x3755a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3755a4: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x3755a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3755a8: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x3755a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3755ac: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x3755acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x3755b0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3755b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3755b4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3755b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3755b8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3755b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3755bc: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3755BCu;
    {
        const bool branch_taken_0x3755bc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x3755C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3755BCu;
        // 0x3755c0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3755bc) {
            ctx->pc = 0x3755A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3755a0;
        }
    }
    ctx->pc = 0x3755C4u;
    // 0x3755c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3755c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3755c8: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x3755c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3755cc: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x3755ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3755d0: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x3755d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3755d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3755d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3755d8:
    // 0x3755d8: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x3755d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3755dc: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x3755dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3755e0: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x3755e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3755e4: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x3755e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x3755e8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3755e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3755ec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3755ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3755f0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3755f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3755f4: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3755F4u;
    {
        const bool branch_taken_0x3755f4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x3755F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3755F4u;
        // 0x3755f8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3755f4) {
            ctx->pc = 0x3755D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3755d8;
        }
    }
    ctx->pc = 0x3755FCu;
    // 0x3755fc: 0x24e400bc  addiu       $a0, $a3, 0xBC
    ctx->pc = 0x3755fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 188));
    // 0x375600: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x375600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x375604: 0x0  nop
    ctx->pc = 0x375604u;
    // NOP
label_375608:
    // 0x375608: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x375608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x37560c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x37560cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x375610: 0x0  nop
    ctx->pc = 0x375610u;
    // NOP
    // 0x375614: 0x0  nop
    ctx->pc = 0x375614u;
    // NOP
    // 0x375618: 0x0  nop
    ctx->pc = 0x375618u;
    // NOP
    // 0x37561c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x37561Cu;
    {
        const bool branch_taken_0x37561c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x375620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37561Cu;
        // 0x375620: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37561c) {
            ctx->pc = 0x375608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375608;
        }
    }
    ctx->pc = 0x375624u;
    // 0x375624: 0x3e00008  jr          $ra
    ctx->pc = 0x375624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37562Cu;
    // 0x37562c: 0x0  nop
    ctx->pc = 0x37562cu;
    // NOP
    ctx->pc = 0x375630u;
}
