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

// Function: sub_00249BD0
// Address: 0x249bd0 - 0x249c40
void sub_00249BD0_0x249bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249BD0_0x249bd0");
#endif

    switch (ctx->pc) {
        case 0x249bd0u: goto label_249bd0;
        case 0x249bd4u: goto label_249bd4;
        case 0x249bd8u: goto label_249bd8;
        case 0x249bdcu: goto label_249bdc;
        case 0x249be0u: goto label_249be0;
        case 0x249be4u: goto label_249be4;
        case 0x249be8u: goto label_249be8;
        case 0x249becu: goto label_249bec;
        case 0x249bf0u: goto label_249bf0;
        case 0x249bf4u: goto label_249bf4;
        case 0x249bf8u: goto label_249bf8;
        case 0x249bfcu: goto label_249bfc;
        case 0x249c00u: goto label_249c00;
        case 0x249c04u: goto label_249c04;
        case 0x249c08u: goto label_249c08;
        case 0x249c0cu: goto label_249c0c;
        case 0x249c10u: goto label_249c10;
        case 0x249c14u: goto label_249c14;
        case 0x249c18u: goto label_249c18;
        case 0x249c1cu: goto label_249c1c;
        case 0x249c20u: goto label_249c20;
        case 0x249c24u: goto label_249c24;
        case 0x249c28u: goto label_249c28;
        case 0x249c2cu: goto label_249c2c;
        case 0x249c30u: goto label_249c30;
        case 0x249c34u: goto label_249c34;
        case 0x249c38u: goto label_249c38;
        case 0x249c3cu: goto label_249c3c;
        default: break;
    }

    ctx->pc = 0x249bd0u;

label_249bd0:
    // 0x249bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x249bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_249bd4:
    // 0x249bd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_249bd8:
    // 0x249bd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_249bdc:
    // 0x249bdc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x249bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_249be0:
    // 0x249be0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x249be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_249be4:
    // 0x249be4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x249be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_249be8:
    // 0x249be8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x249be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_249bec:
    // 0x249bec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x249becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_249bf0:
    // 0x249bf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x249bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_249bf4:
    // 0x249bf4: 0x3c120016  lui         $s2, 0x16
    ctx->pc = 0x249bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)22 << 16));
label_249bf8:
    // 0x249bf8: 0x26527180  addiu       $s2, $s2, 0x7180
    ctx->pc = 0x249bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 29056));
label_249bfc:
    // 0x249bfc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x249bfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_249c00:
    // 0x249c00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x249c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_249c04:
    // 0x249c04: 0xc0d6898  jal         func_35A260
label_249c08:
    if (ctx->pc == 0x249C08u) {
        ctx->pc = 0x249C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C04u;
        // 0x249c08: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C0Cu;
        goto label_249c0c;
    }
    ctx->pc = 0x249C04u;
    SET_GPR_U32(ctx, 31, 0x249C0Cu);
    ctx->pc = 0x249C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C04u;
    // 0x249c08: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A260u, 0x249C04u, 0x249C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C0Cu;
label_249c0c:
    // 0x249c0c: 0xc09251e  jal         func_249478
label_249c10:
    if (ctx->pc == 0x249C10u) {
        ctx->pc = 0x249C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C0Cu;
        // 0x249c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C14u;
        goto label_249c14;
    }
    ctx->pc = 0x249C0Cu;
    SET_GPR_U32(ctx, 31, 0x249C14u);
    ctx->pc = 0x249C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C0Cu;
    // 0x249c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249478u, 0x249C0Cu, 0x249C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C14u;
label_249c14:
    // 0x249c14: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_249c18:
    if (ctx->pc == 0x249C18u) {
        ctx->pc = 0x249C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C14u;
        // 0x249c18: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C1Cu;
        goto label_249c1c;
    }
    ctx->pc = 0x249C14u;
    {
        const bool branch_taken_0x249c14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C14u;
        // 0x249c18: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c14) {
            ctx->pc = 0x249CC0u;
            return;
        }
    }
    ctx->pc = 0x249C1Cu;
label_249c1c:
    // 0x249c1c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x249c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_249c20:
    // 0x249c20: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_249c24:
    if (ctx->pc == 0x249C24u) {
        ctx->pc = 0x249C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C20u;
        // 0x249c24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C28u;
        goto label_249c28;
    }
    ctx->pc = 0x249C20u;
    {
        const bool branch_taken_0x249c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249c20) {
            ctx->pc = 0x249C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249C20u;
            // 0x249c24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249CC4u;
            return;
        }
    }
    ctx->pc = 0x249C28u;
label_249c28:
    // 0x249c28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x249c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_249c2c:
    // 0x249c2c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x249c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_249c30:
    // 0x249c30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x249c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_249c34:
    // 0x249c34: 0x8c6314e0  lw          $v1, 0x14E0($v1)
    ctx->pc = 0x249c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5344)));
label_249c38:
    // 0x249c38: 0x600008  jr          $v1
label_249c3c:
    if (ctx->pc == 0x249C3Cu) {
        ctx->pc = 0x249C40u;
        goto label_fallthrough_0x249c38;
    }
    ctx->pc = 0x249C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249C38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x249c38:
    ctx->pc = 0x249C40u;
}
