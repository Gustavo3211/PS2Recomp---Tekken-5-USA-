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

// Function: sub_003622D0
// Address: 0x3622d0 - 0x3623b0
void sub_003622D0_0x3622d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003622D0_0x3622d0");
#endif

    switch (ctx->pc) {
        case 0x362308u: goto label_362308;
        case 0x362328u: goto label_362328;
        case 0x362378u: goto label_362378;
        case 0x362394u: goto label_362394;
        default: break;
    }

    ctx->pc = 0x3622d0u;

    // 0x3622d0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3622d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3622d4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3622d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3622d8: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x3622d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3622dc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3622dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3622e0: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3622e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3622e4: 0x2ce30030  sltiu       $v1, $a3, 0x30
    ctx->pc = 0x3622e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x3622e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3622e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3622ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3622ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3622f0: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x3622f0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3622f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3622F4u;
    {
        const bool branch_taken_0x3622f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3622F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3622F4u;
        // 0x3622f8: 0x63403  sra         $a2, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3622f4) {
            ctx->pc = 0x362310u;
            goto label_362310;
        }
    }
    ctx->pc = 0x3622FCu;
    // 0x3622fc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3622fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362300: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362300u;
    SET_GPR_U32(ctx, 31, 0x362308u);
    ctx->pc = 0x362304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362300u;
    // 0x362304: 0x248472b8  addiu       $a0, $a0, 0x72B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362300u, 0x362308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362308u;
label_362308:
    // 0x362308: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x362308u;
    {
        const bool branch_taken_0x362308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362308u;
        // 0x36230c: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362308) {
            ctx->pc = 0x362338u;
            goto label_362338;
        }
    }
    ctx->pc = 0x362310u;
label_362310:
    // 0x362310: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x362310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x362314: 0xa3a70008  sb          $a3, 0x8($sp)
    ctx->pc = 0x362314u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x362318: 0xa7a8000c  sh          $t0, 0xC($sp)
    ctx->pc = 0x362318u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 8));
    // 0x36231c: 0xa7a6000e  sh          $a2, 0xE($sp)
    ctx->pc = 0x36231cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x362320: 0xc0d6f0c  jal         func_35BC30
    ctx->pc = 0x362320u;
    SET_GPR_U32(ctx, 31, 0x362328u);
    ctx->pc = 0x362324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362320u;
    // 0x362324: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BC30u, 0x362320u, 0x362328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362328u;
label_362328:
    // 0x362328: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x362328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x36232c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x36232cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x362330: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x362330u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x362334: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x362334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_362338:
    // 0x362338: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x362338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36233c: 0x3e00008  jr          $ra
    ctx->pc = 0x36233Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36233Cu;
        // 0x362340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36233Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362344u;
    // 0x362344: 0x0  nop
    ctx->pc = 0x362344u;
    // NOP
    // 0x362348: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x362348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36234c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36234cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x362350: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x362350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x362354: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x362354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362358: 0x2cc20030  sltiu       $v0, $a2, 0x30
    ctx->pc = 0x362358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x36235c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36235cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x362360: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x362360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362364: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x362364u;
    {
        const bool branch_taken_0x362364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362364u;
        // 0x362368: 0x31c03  sra         $v1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362364) {
            ctx->pc = 0x362380u;
            goto label_362380;
        }
    }
    ctx->pc = 0x36236Cu;
    // 0x36236c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x36236cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362370: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362370u;
    SET_GPR_U32(ctx, 31, 0x362378u);
    ctx->pc = 0x362374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362370u;
    // 0x362374: 0x248472f8  addiu       $a0, $a0, 0x72F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362370u, 0x362378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362378u;
label_362378:
    // 0x362378: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x362378u;
    {
        const bool branch_taken_0x362378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362378u;
        // 0x36237c: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362378) {
            ctx->pc = 0x3623A4u;
            goto label_3623a4;
        }
    }
    ctx->pc = 0x362380u;
label_362380:
    // 0x362380: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x362380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x362384: 0xa7a30014  sh          $v1, 0x14($sp)
    ctx->pc = 0x362384u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x362388: 0xa3a60008  sb          $a2, 0x8($sp)
    ctx->pc = 0x362388u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x36238c: 0xc0d6f0c  jal         func_35BC30
    ctx->pc = 0x36238Cu;
    SET_GPR_U32(ctx, 31, 0x362394u);
    ctx->pc = 0x362390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36238Cu;
    // 0x362390: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BC30u, 0x36238Cu, 0x362394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362394u;
label_362394:
    // 0x362394: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x362394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x362398: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x362398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x36239c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x36239cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x3623a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3623a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3623a4:
    // 0x3623a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3623a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3623a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3623A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3623ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3623A8u;
        // 0x3623ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3623A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3623B0u;
}
