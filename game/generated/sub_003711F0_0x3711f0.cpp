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

// Function: sub_003711F0
// Address: 0x3711f0 - 0x371338
void sub_003711F0_0x3711f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003711F0_0x3711f0");
#endif

    switch (ctx->pc) {
        case 0x371214u: goto label_371214;
        case 0x37122cu: goto label_37122c;
        default: break;
    }

    ctx->pc = 0x3711f0u;

    // 0x3711f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3711f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3711f4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3711f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3711f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3711f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3711fc: 0x24507530  addiu       $s0, $v0, 0x7530
    ctx->pc = 0x3711fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30000));
    // 0x371200: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371200u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7530u));
    // 0x371204: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x371204u;
    {
        const bool branch_taken_0x371204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371204u;
        // 0x371208: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371204) {
            ctx->pc = 0x37122Cu;
            goto label_37122c;
        }
    }
    ctx->pc = 0x37120Cu;
    // 0x37120c: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x37120Cu;
    SET_GPR_U32(ctx, 31, 0x371214u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x37120Cu, 0x371214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371214u;
label_371214:
    // 0x371214: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x371214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x371218: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x371218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x37121c: 0x24a50c70  addiu       $a1, $a1, 0xC70
    ctx->pc = 0x37121cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3184));
    // 0x371220: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x371220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x371224: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x371224u;
    SET_GPR_U32(ctx, 31, 0x37122Cu);
    ctx->pc = 0x371228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371224u;
    // 0x371228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x371224u, 0x37122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37122Cu;
label_37122c:
    // 0x37122c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37122cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371234: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371238: 0x3e00008  jr          $ra
    ctx->pc = 0x371238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371238u;
        // 0x37123c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371240u;
    // 0x371240: 0x248400e8  addiu       $a0, $a0, 0xE8
    ctx->pc = 0x371240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x371244: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x371244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x371248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x371248u;
    {
        const bool branch_taken_0x371248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371248u;
        // 0x37124c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371248) {
            ctx->pc = 0x371260u;
            goto label_371260;
        }
    }
    ctx->pc = 0x371250u;
    // 0x371250: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x371250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x371254: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x371254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x371258: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x371258u;
    {
        const bool branch_taken_0x371258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x371258) {
            ctx->pc = 0x37126Cu;
            goto label_37126c;
        }
    }
    ctx->pc = 0x371260u;
label_371260:
    // 0x371260: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x371260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x371264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x371264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371268: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x371268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_37126c:
    // 0x37126c: 0x3e00008  jr          $ra
    ctx->pc = 0x37126Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37126Cu;
        // 0x371270: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37126Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371274u;
    // 0x371274: 0x0  nop
    ctx->pc = 0x371274u;
    // NOP
    // 0x371278: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x371278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x37127c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x37127cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x371280: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x371280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x371284: 0x3e00008  jr          $ra
    ctx->pc = 0x371284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371284u;
        // 0x371288: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37128Cu;
    // 0x37128c: 0x0  nop
    ctx->pc = 0x37128cu;
    // NOP
    // 0x371290: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x371290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x371294: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x371294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x371298: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x371298u;
    {
        const bool branch_taken_0x371298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371298u;
        // 0x37129c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371298) {
            ctx->pc = 0x3712B0u;
            goto label_3712b0;
        }
    }
    ctx->pc = 0x3712A0u;
    // 0x3712a0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3712a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3712a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3712a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3712a8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3712A8u;
    {
        const bool branch_taken_0x3712a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3712a8) {
            ctx->pc = 0x3712BCu;
            goto label_3712bc;
        }
    }
    ctx->pc = 0x3712B0u;
label_3712b0:
    // 0x3712b0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3712b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3712b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3712b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3712b8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3712b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3712bc:
    // 0x3712bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3712BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3712C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3712BCu;
        // 0x3712c0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3712BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3712C4u;
    // 0x3712c4: 0x0  nop
    ctx->pc = 0x3712c4u;
    // NOP
    // 0x3712c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3712C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3712CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3712C8u;
        // 0x3712cc: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3712C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3712D0u;
    // 0x3712d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3712d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3712d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3712d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3712d8: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x3712d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x3712dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3712dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3712e0: 0x80bb97c  j           func_2EE5F0
    ctx->pc = 0x3712E0u;
    ctx->pc = 0x3712E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3712E0u;
    // 0x3712e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5F0u;
    sub_002EE5F0_0x2ee5f0(rdram, ctx, runtime); return;
    ctx->pc = 0x3712E8u;
    // 0x3712e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3712e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3712ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3712ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3712f0: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x3712f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x3712f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3712f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3712f8: 0x80bb986  j           func_2EE618
    ctx->pc = 0x3712F8u;
    ctx->pc = 0x3712FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3712F8u;
    // 0x3712fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE618u;
    sub_002EE618_0x2ee618(rdram, ctx, runtime); return;
    ctx->pc = 0x371300u;
    // 0x371300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371308: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x371308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x37130c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37130cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371310: 0x80bb984  j           func_2EE610
    ctx->pc = 0x371310u;
    ctx->pc = 0x371314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371310u;
    // 0x371314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE610u, 0x371310u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x371318u;
    // 0x371318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37131c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37131cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371320: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x371320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x371324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x371324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371328: 0x80bb98e  j           func_2EE638
    ctx->pc = 0x371328u;
    ctx->pc = 0x37132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371328u;
    // 0x37132c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE638u, 0x371328u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x371330u;
    // 0x371330: 0x3e00008  jr          $ra
    ctx->pc = 0x371330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371330u;
        // 0x371334: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371338u;
}
