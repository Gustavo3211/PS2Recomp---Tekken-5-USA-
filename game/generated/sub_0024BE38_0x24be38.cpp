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

// Function: sub_0024BE38
// Address: 0x24be38 - 0x24bf28
void sub_0024BE38_0x24be38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BE38_0x24be38");
#endif

    switch (ctx->pc) {
        case 0x24be60u: goto label_24be60;
        case 0x24be68u: goto label_24be68;
        case 0x24beb0u: goto label_24beb0;
        default: break;
    }

    ctx->pc = 0x24be38u;

    // 0x24be38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24be38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24be3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24be3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24be40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24be40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24be44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24be44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24be48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24be48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24be4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24be4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24be50: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x24be50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x24be54: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24be54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24be58: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x24be58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x24be5c: 0x0  nop
    ctx->pc = 0x24be5cu;
    // NOP
label_24be60:
    // 0x24be60: 0xc0875f6  jal         func_21D7D8
    ctx->pc = 0x24BE60u;
    SET_GPR_U32(ctx, 31, 0x24BE68u);
    ctx->pc = 0x24BE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE60u;
    // 0x24be64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D7D8u, 0x24BE60u, 0x24BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE68u;
label_24be68:
    // 0x24be68: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24BE68u;
    {
        const bool branch_taken_0x24be68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24be68) {
            ctx->pc = 0x24BE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BE68u;
            // 0x24be6c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BE90u;
            goto label_24be90;
        }
    }
    ctx->pc = 0x24BE70u;
    // 0x24be70: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x24be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x24be74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24be74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24be78: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24be78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24be7c: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x24be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x24be80: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x24be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x24be84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24be84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24be88: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x24be88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
    // 0x24be8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24be8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24be90:
    // 0x24be90: 0x2a22001e  slti        $v0, $s1, 0x1E
    ctx->pc = 0x24be90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x24be94: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x24BE94u;
    {
        const bool branch_taken_0x24be94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24be94) {
            ctx->pc = 0x24BE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24be60;
        }
    }
    ctx->pc = 0x24BE9Cu;
    // 0x24be9c: 0x8e110094  lw          $s1, 0x94($s0)
    ctx->pc = 0x24be9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x24bea0: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x24BEA0u;
    {
        const bool branch_taken_0x24bea0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEA0u;
        // 0x24bea4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bea0) {
            ctx->pc = 0x24BEECu;
            goto label_24beec;
        }
    }
    ctx->pc = 0x24BEA8u;
    // 0x24bea8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24BEA8u;
    SET_GPR_U32(ctx, 31, 0x24BEB0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24BEA8u, 0x24BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BEB0u;
label_24beb0:
    // 0x24beb0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x24beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x24beb4: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x24beb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x24beb8: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x24beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x24bebc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24bec0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24bec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24bec4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x24bec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x24bec8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24becc: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x24beccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24bed0: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x24bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x24bed4: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x24bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x24bed8: 0x8e110094  lw          $s1, 0x94($s0)
    ctx->pc = 0x24bed8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x24bedc: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x24bedcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x24bee0: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x24bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x24bee4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x24bee4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x24bee8: 0x21bc3  sra         $v1, $v0, 15
    ctx->pc = 0x24bee8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 15));
label_24beec:
    // 0x24beec: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x24beecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x24bef0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24bef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24bef4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24bef8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24bef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24befc: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x24befcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x24bf00: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x24bf00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x24bf04: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x24bf04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x24bf08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24bf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24bf0c: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x24bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x24bf10: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x24bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24bf14: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x24bf14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x24bf18: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x24bf18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x24bf1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24bf1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bf20: 0x3e00008  jr          $ra
    ctx->pc = 0x24BF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF20u;
        // 0x24bf24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BF28u;
}
